# C - if...else Statement

## What is it?
A plain `if` only handles the "true" case. `if...else` gives you a second path for when the condition is **false** — so you always run exactly one of the two blocks, never both, never neither.

## Syntax
```c
if (condition) {
    // runs if condition is true
} else {
    // runs if condition is false
}
```

## Example
```c
#include <stdio.h>

int main() {
    int num = 7;

    if (num % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    return 0;
}
```
Output: `Odd number`

## Key Points
- Exactly one branch runs — think of it like a fork in the road, not two separate checks.
- `else` never has its own condition — it's just "everything else."
- You can put multiple statements in either block, wrapped in `{}`.
- Compare with plain `if`: plain `if` says "maybe do this," `if...else` says "do this, or do that instead."
