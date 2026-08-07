// C Literals - Example Program

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // Integer literals
    int decimal = 42;            // decimal
    int octal = 0755;            // octal (equals 493 decimal)
    int hex = 0xFF;              // hexadecimal (255 decimal)
    unsigned long ulong = 0x1A3FUL; // unsigned long hex
    long long ll = 1234567890123LL; // long long literal

    // Floating‑point literals
    float f = 3.14f;              // float suffix
    double d = 2.71828;           // double (default)
    long double ld = 6.022e23L;   // long double with exponent

    // Character literals and escape sequences
    char ch = 'A';
    char newline = '\n';
    char backslash = '\\';
    char tab = '\t';
    char quote = '\"';
    char unicode = '\u03A9'; // Ω (C11)

    // String literal
    const char *msg = "Hello, C literals!\n";

    // Boolean literals (C99)
    bool flag = true;

    // Print values to verify
    printf("Integer literals: %d, %d, %d, %lu, %lld\n", decimal, octal, hex, ulong, ll);
    printf("Floating‑point literals: %f, %lf, %Lf\n", f, d, ld);
    printf("Character literals: %c %c %c %c %c %lc\n", ch, newline, backslash, tab, quote, unicode);
    printf("String literal: %s", msg);
    printf("Boolean literal: %s\n", flag ? "true" : "false");
    return 0;
}
