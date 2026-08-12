# C - While Loop & Do...While Loop

## 1. While Loop

### What is it?
`while` is a **conditional loop** — it keeps repeating as long as a condition stays true. Unlike `for`, it's not built around a counter, so it's the natural choice when you don't know in advance how many times you'll loop (e.g., reading input until the user types "quit").

### Syntax
```c
while (condition) {
    // code
}
```

The condition is checked **before** every iteration — including the very first one. If it's false right away, the loop body never runs even once.

### Example
```c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}
```
Output: `1 2 3 4 5`

---

## 2. Do...While Loop

### What is it?
Same idea as `while`, but the condition is checked **after** the body runs. This guarantees the loop body executes **at least once**, no matter what.

### Syntax
```c
do {
    // code
} while (condition);
```
Notice the semicolon `;` after `while(condition)` — easy to forget, and it's required here (unlike a normal `while` loop).

### Example
```c
#include <stdio.h>

int main() {
    int i = 10;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
```
Output: `10`

Even though `i <= 5` is false from the start, the body still ran once — that's the key difference from `while`.

## Key Points
- `while`: check first, then maybe run. Could run **zero** times.
- `do...while`: run first, then check. Always runs **at least once**.
- Use `do...while` for things like menu systems where you want to show the menu at least once before checking if the user wants to exit.
- Both are conditional loops (vs `for`, which is a counted loop) — pick based on whether you're counting or waiting for a condition to flip.
