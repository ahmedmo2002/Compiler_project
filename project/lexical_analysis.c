/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TOKEN_LENGTH 100

// Define token types
typedef enum {
    KEYWORD,
    IDENTIFIER,
    OPERATOR,
    Numeric_const,
} TokenType;

// Define token structure
typedef struct {
    TokenType type;
    char lexeme[MAX_TOKEN_LENGTH];
} Token;

// Define keywords
char* keywords[] = {"int", "float", "char", "if", "else", "while", "for"};
char* OPERATORS[] = {"+", "-", "*", "/", "="};

// Function to check if a given string is a keyword
int isKeyword(char *word) {
    for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(keywords[i], word) == 0) {
            return 1;
        }
    }
    return 0;
}
int isOperator(char *operat) {
    for (int i = 0; i < sizeof(OPERATORS) / sizeof(OPERATORS[0]); i++) {
        if (strcmp(OPERATORS[i], operat) == 0) {
            return 1;
        }
    }
    return 0;
}

// Function to perform lexical analysis
Token* lexicalAnalysis(char *input) {
    Token *tokens = malloc(sizeof(Token) * MAX_TOKEN_LENGTH);
    int tokenCount = 0;
    char *token = strtok(input, " ");
    while (token != NULL) {
        Token newToken;
        if (isKeyword(token)) {
            newToken.type = KEYWORD;
        }
        else if(isOperator(token)){
                newToken.type = OPERATOR;
        }
        else if (isdigit(token[0])) {
            newToken.type = Numeric_const;
        } else {
            newToken.type = IDENTIFIER;
        }
        strcpy(newToken.lexeme, token);
        tokens[tokenCount] = newToken;
        tokenCount++;
        token = strtok(NULL, " ");
    }
    tokens[tokenCount].type = -1;  // End of tokens
    return tokens;
}

// Main function for testing lexical analysis
int main() {
    char input[] = "int num1 = 7; float num2 = 17; float num3 = num1 + num2;";
    Token *tokens = lexicalAnalysis(input);
    int i = 0;
    while (tokens[i].type != -1) {
        if (tokens[i].type == KEYWORD) {
            printf("Keyword: %s\n", tokens[i].lexeme);
        } else if (tokens[i].type == IDENTIFIER) {
            printf("Identifier: %s\n", tokens[i].lexeme);
        }
          else if (tokens[i].type == OPERATOR) {
            printf("Operator: %s\n", tokens[i].lexeme);
        } else if (tokens[i].type == Numeric_const) {
            printf("Numeric Const: %s\n", tokens[i].lexeme);
        }
        i++;
    }
    return 0;
}
*/
