# C - Break, Continue & Goto Statements

These are **jump statements** — they alter the normal top-to-bottom / loop-by-loop flow of a program.

## 1. Break Statement

### What is it?
`break` immediately exits the loop (or `switch`) it's inside — the moment it runs, the loop stops completely, no more iterations.

### Example
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // stop the loop entirely
        }
        printf("%d ", i);
    }
    return 0;
}
```
Output: `1 2 3 4`

### Key Points
- In nested loops, `break` only exits the **innermost** loop it's placed in, not all of them.
- Used in `switch` to prevent fall-through between cases.
- Common use: searching for something and stopping as soon as it's found.

---

## 2. Continue Statement

### What is it?
`continue` skips the **rest of the current iteration** and jumps straight to the next one — it doesn't stop the loop, just that one round.

### Example
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // skip printing 3
        }
        printf("%d ", i);
    }
    return 0;
}
```
Output: `1 2 4 5`

### Key Points
- In a `for` loop, `continue` still runs the update step (`i++`) before re-checking the condition.
- In a `while`/`do...while` loop, be careful — if the update happens after the `continue`, you can accidentally create an infinite loop.
- `break` = stop everything. `continue` = skip just this round and move on.

---

## 3. Goto Statement

### What is it?
`goto` jumps program execution directly to a labeled line anywhere in the same function — forward or backward.

### Syntax
```c
goto label;
...
label: statement;
```

### Example
```c
#include <stdio.h>

int main() {
    int i = 1;

    start:
    if (i <= 5) {
        printf("%d ", i);
        i++;
        goto start;
    }

    return 0;
}
```
Output: `1 2 3 4 5`

### Key Points
- `goto` can jump to any label in the same function, in either direction.
- It's widely discouraged in modern C — overusing it creates "spaghetti code" that's hard to trace and debug. Loops (`for`, `while`) and `break`/`continue` can replace almost every use case cleanly.
- One accepted use: jumping to a single cleanup/error-handling label near the end of a function (common in systems-level C code) instead of duplicating cleanup code in multiple places.
- Rule of thumb: avoid `goto` unless you have a very specific, well-understood reason to use it.
