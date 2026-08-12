# C - if...else if Ladder

## What is it?
When you have more than two possible outcomes, chaining `else if` blocks lets you check multiple conditions in order — like a ladder of questions where you stop at the first "yes."

## Syntax
```c
if (condition1) {
    // runs if condition1 is true
} else if (condition2) {
    // runs if condition1 false, condition2 true
} else if (condition3) {
    // runs if both above are false, condition3 true
} else {
    // runs if none of the above matched
}
```

## Example
```c
#include <stdio.h>

int main() {
    int marks = 72;

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 75) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
```
Output: `Grade: C`

## Key Points
- C checks conditions **top to bottom** and stops at the first `true` one — the rest are skipped, even if they'd also be true.
- Order matters a lot. Put the most specific/highest condition first (like checking `>= 90` before `>= 75`).
- The final `else` is optional but good practice — it catches "none of the above."
- This is basically several `if...else` blocks stacked together, not a special new keyword.
