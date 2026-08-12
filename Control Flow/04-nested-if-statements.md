# C - Nested if Statements

## What is it?
A nested `if` is simply an `if` (or `if...else`) placed **inside** another `if` block. Use it when a decision only makes sense after another condition has already been satisfied — i.e., checking a sub-condition within a condition.

## Syntax
```c
if (condition1) {
    if (condition2) {
        // runs only if BOTH condition1 and condition2 are true
    }
}
```

## Example
```c
#include <stdio.h>

int main() {
    int age = 20;
    int hasID = 1; // 1 = true, 0 = false

    if (age >= 18) {
        if (hasID) {
            printf("Entry allowed.\n");
        } else {
            printf("Bring your ID.\n");
        }
    } else {
        printf("Too young to enter.\n");
    }

    return 0;
}
```
Output: `Entry allowed.`

## Key Points
- The inner `if` only even gets evaluated if the outer condition is true first.
- Nesting can replace some cases of `&&` (AND) — `if (a) { if (b) {...} }` behaves like `if (a && b) {...}`, but nesting lets you handle each condition failing differently.
- Don't nest too deep (3+ levels) — it gets hard to read. If you find yourself nesting a lot, consider combining conditions with `&&`/`||` or restructuring the logic.
- Indentation is your friend here — always indent inner blocks so the structure is visible at a glance.
