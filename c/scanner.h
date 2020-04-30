#ifndef dictu_scanner_h
#define dictu_scanner_h

typedef enum {
    // Single-character tokens.
    TOKEN_LEFT_PAREN, TOKEN_RIGHT_PAREN,
    TOKEN_LEFT_BRACE, TOKEN_RIGHT_BRACE,
    TOKEN_LEFT_BRACKET, TOKEN_RIGHT_BRACKET,
    TOKEN_COMMA, TOKEN_DOT, TOKEN_MINUS, TOKEN_PLUS,
    TOKEN_PLUS_PLUS, TOKEN_MINUS_MINUS,

    TOKEN_PLUS_EQUALS, TOKEN_MINUS_EQUALS,
    TOKEN_MULTIPLY_EQUALS, TOKEN_DIVIDE_EQUALS,

    TOKEN_SEMICOLON, TOKEN_COLON, TOKEN_SLASH,
    TOKEN_STAR, TOKEN_STAR_STAR,
    TOKEN_PERCENT,

    // Bitwise
    TOKEN_AMPERSAND, TOKEN_CARET, TOKEN_PIPE,
    TOKEN_AMPERSAND_EQUALS, TOKEN_CARET_EQUALS, TOKEN_PIPE_EQUALS,

    // One or two character tokens.
    TOKEN_BANG, TOKEN_BANG_EQUAL,
    TOKEN_EQUAL, TOKEN_EQUAL_EQUAL,
    TOKEN_GREATER, TOKEN_GREATER_EQUAL,
    TOKEN_LESS, TOKEN_LESS_EQUAL,
    TOKEN_R, TOKEN_ARROW,

    // Literals.
    TOKEN_IDENTIFIER, TOKEN_STRING, TOKEN_NUMBER,

    // Keywords.
    TOKEN_CLASS, TOKEN_TRAIT, TOKEN_USE, TOKEN_STATIC,
    TOKEN_THIS,TOKEN_SUPER, TOKEN_DEF,
    TOKEN_IF, TOKEN_AND, TOKEN_ELSE, TOKEN_OR,
    TOKEN_VAR, TOKEN_TRUE, TOKEN_FALSE, TOKEN_NIL,
    TOKEN_FOR, TOKEN_WHILE, TOKEN_BREAK,
    TOKEN_RETURN, TOKEN_CONTINUE,
    TOKEN_WITH, TOKEN_EOF, TOKEN_IMPORT,
    TOKEN_ERROR

} TokenType;

typedef struct {
    TokenType type;
    const char *start;
    int length;
    int line;
} Token;

void initScanner(const char *source);

void backTrack();

Token scanToken();

#endif
