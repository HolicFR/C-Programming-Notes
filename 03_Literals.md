# C Literals

## What is a Literal?
A *literal* is a fixed value that appears directly in the source code. The compiler embeds this exact value into the program; it cannot be changed at run‑time.

---

## 1. Integer Literals
Integer literals represent whole numbers. They can be written in several bases and may include suffixes that affect their type.

### Decimal (base‑10)
```c
int a = 42;          // plain decimal
unsigned int b = 30U; // unsigned suffix
long c = 1000L;      // long suffix
```

### Octal (base‑8)
Starts with a leading `0`.
```c
int oct = 0755; // equals 493 in decimal
```

### Hexadecimal (base‑16)
Starts with `0x` or `0X`.
```c
int hex = 0xFF;    // 255 decimal
unsigned long hx = 0x1A3FUL; // unsigned long suffix
```

### Suffixes (type modifiers)
| Suffix | Meaning |
|--------|---------|
| `U` / `u` | unsigned |
| `L` / `l` | long |
| `LL` / `ll` | long long |
| Combination | e.g. `123UL`, `0xFFull` |

---

## 2. Floating‑point Literals
Represent real numbers. Must contain a decimal point, an exponent, or both.
```c
float f1 = 3.14f;          // decimal form, `f` suffix makes it `float`
double d1 = 2.71828;       // double (default)
long double ld = 6.022e23L; // exponential form, `L` suffix for long double
```

**Components**
- **Decimal part** – digits before/after `.`
- **Exponent part** – `e` or `E` followed by an optional sign and decimal exponent
- **Suffixes** – `f/F` for `float`, `l/L` for `long double`

---

## 3. Character Literals
A single character surrounded by single quotes.
```c
char ch = 'A';
char newline = '\n';   // escape sequence for newline
char backslash = '\\'; // backslash itself
```

### Escape Sequences
| Escape | Meaning |
|--------|---------|
| `\n`   | newline |
| `\t`   | horizontal tab |
| `\r`   | carriage return |
| `\'`   | single quote |
| `\"`   | double quote |
| `\\`   | backslash |
| `\a`   | alert (bell) |
| `\xhh` | hexadecimal value |
| `\uXXXX` | Unicode code point (C11) |

---

## 4. String Literals
A sequence of characters enclosed in double quotes. The compiler appends a terminating null character `\0`.
```c
char *msg = "Hello, world!";
```
String literals are of type `char[]` and can be used wherever a character array is expected.

---

## 5. Boolean Literals (C99 and later)
C does not have a dedicated boolean literal in the original language, but when `<stdbool.h>` is included the identifiers `true` and `false` become available.
```c
#include <stdbool.h>
bool flag = true;
```

---

## Quick Reference Table
| Literal Type | Example | Typical Use |
|--------------|---------|-------------|
| Integer      | `42`, `0x2A`, `075` | Whole numbers, array sizes, loop counters |
| Floating‑point | `3.14`, `2.5e-3f` | Real numbers, measurements |
| Character    | `'a'`, `'\n'` | Single character values |
| String       | `"text"` | Text strings, messages |
| Boolean      | `true`, `false` | Logical conditions (with `<stdbool.h>`) |

---

## Where to Find More Details
For a deeper dive, see the **Data Types** note which explains how each literal maps to C’s built‑in types.

[Data Types](02_Data Types.md)
