# C - Switch Statement

## What is it?
`switch` is used when you want to compare **one variable** against a list of possible fixed values, instead of writing a long `if...else if` chain. It tests a variable for equality against several `case` values.

## Syntax
```c
switch (expression) {
    case constant1:
        // code
        break;
    case constant2:
        // code
        break;
    default:
        // runs if nothing matched
}
```

## Example
```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
```
Output: `Wednesday`

## Key Points
- `expression` must evaluate to an integer type (`int`, `char`) — no floats, no strings directly.
- `case` values must be **constants**, not variables.
- `break` stops execution from spilling into the next case. Forget it, and control "falls through" to the next case's code — sometimes intentional, usually a bug.
- `default` is optional but recommended, like the `else` at the end of an `if` ladder.
- `switch` vs `if...else if`: switch is cleaner for many discrete values of one variable; `if...else if` is better for ranges or multiple different variables.
