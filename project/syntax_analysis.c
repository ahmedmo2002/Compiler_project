/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    KEYWORD,
    IDENTIFIER,
    OPERATOR,
    Numeric_const,
    SPECIALCHAR
} TokenType;

typedef struct {
    TokenType type;
    char lexeme[100];
} Token;

int syntaxAnalysis(Token *tokens) {
    int i = 0;
    while (tokens[i].type != -1) {
        if (tokens[i].type == KEYWORD) {
            i++;
            if (tokens[i].type == IDENTIFIER) {
                i++;
                if (strcmp(tokens[i].lexeme, "=") == 0) {
                    i++;
                    if (tokens[i].type == Numeric_const) {
                        i++;
                        if (strcmp(tokens[i].lexeme, ";") == 0) {
                            i++;
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

int main() {

    Token tokens[] = {
        {KEYWORD, "int"},
        {IDENTIFIER, "x"},
        {OPERATOR, "="},
        {Numeric_const, "10"},
        {-1, ""}
    };

    if (syntaxAnalysis(tokens)) {
        printf("Syntax analysis succeeded.\n");
    } else {
        printf("Syntax analysis failed.\n");
    }

    return 0;
}
*/
