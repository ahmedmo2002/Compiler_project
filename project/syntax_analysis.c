
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define token types
typedef enum {
    KEYWORD,
    IDENTIFIER,
    OPERATOR,
    Numeric_const,
    SPECIALCHAR
} TokenType;

// Define token structure
typedef struct {
    TokenType type;
    char lexeme[100];
} Token;

// Main function for syntax analysis
int syntaxAnalysis(Token *tokens) {
    int i = 0;
    while (tokens[i].type != -1) {
        if (tokens[i].type == KEYWORD) {
            i++;  // Move to next token
            if (tokens[i].type == IDENTIFIER) {
                i++;  // Move to next token
                if (strcmp(tokens[i].lexeme, "=") == 0) {
                    i++;  // Move to next token
                    if (tokens[i].type == Numeric_const) {
                        i++;  // Move to next token
                        if (strcmp(tokens[i].lexeme, ";") == 0) {
                            i++;  // Move to next token
                        } else {
                            printf("Syntax error: Missing semicolon.\n");
                            return 0;
                        }
                    } else {
                        printf("Syntax error: Expected literal after assignment operator.\n");
                        return 0;
                    }
                } else {
                    printf("Syntax error: Expected assignment operator.\n");
                    return 0;
                }
            } else {
                printf("Syntax error: Expected identifier after keyword.\n");
                return 0;
            }
        } else {
            printf("Syntax error: Unexpected token.\n");
            return 0;
        }
    }
    return 1;
}

// Main function for testing syntax analysis
int main() {
    // Tokenize the input (assuming tokens array is already created)

    Token tokens[] = {
        {KEYWORD, "int"},
        {IDENTIFIER, "x"},
        {OPERATOR, "="},
        {Numeric_const, "10"},
        {SPECIALCHAR, ";"},
        {-1, ""}
    };

    if (syntaxAnalysis(tokens)) {
        printf("Syntax analysis succeeded.\n");
    } else {
        printf("Syntax analysis failed.\n");
    }

    return 0;
}
