# C - if Statement

## What is it?
Programs normally run top to bottom, line by line. The `if` statement is how you tell the program "only run this bit if something is true." It's the most basic building block of decision-making in C.

C doesn't have a real boolean type (in older standards), so it treats:
- `0` → false
- anything non-zero (including negative numbers) → true

## Syntax
```c
if (condition) {
    // runs only if condition is true (non-zero)
}
```

- `condition` must be inside `()`
- If the block has only **one** statement, the `{}` are optional (but keep them anyway, saves you from bugs later)

## Example
```c
#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }

    return 0;
}
```
Output: `You are eligible to vote.`

If `age` was `15`, nothing would print — the block is just skipped.

## Key Points
- `if` checks a condition and runs code only when it's true.
- No `else` needed — if the condition is false, C just moves to whatever comes after the `if` block.
- Common conditions use relational operators: `==`, `!=`, `>`, `<`, `>=`, `<=`
- Watch out for the classic bug: writing `=` (assignment) instead of `==` (comparison) inside the condition.
