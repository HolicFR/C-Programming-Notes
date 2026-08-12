# C - The ?: (Ternary/Conditional) Operator

## What is it?
The ternary operator squeezes a simple `if...else` into a single expression. It's the only operator in C that takes **three** operands (hence "ternary").

## Syntax
```c
condition ? expr_if_true : expr_if_false;
```

- If `condition` is true, the whole expression evaluates to `expr_if_true`.
- If false, it evaluates to `expr_if_false`.

## Example
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20, max;

    max = (a > b) ? a : b;

    printf("Max value: %d\n", max);

    return 0;
}
```
Output: `Max value: 20`

This one line replaces:
```c
if (a > b) {
    max = a;
} else {
    max = b;
}
```

## Nesting Ternary Operators
You can nest one ternary inside another to simulate multiple conditions, though readability drops fast:
```c
int num = 0;
char *result = (num > 0) ? "positive" : (num < 0) ? "negative" : "zero";
```

## Key Points
- Best used for **short, simple** either/or assignments — not for multi-line logic.
- Since it's an expression (not a statement), you can use it directly inside `printf()`, assignments, or function arguments.
- Overusing nested ternaries makes code hard to read — if you need more than one level, an `if...else if` ladder is usually clearer.
- Both `expr_if_true` and `expr_if_false` should ideally return compatible types.
