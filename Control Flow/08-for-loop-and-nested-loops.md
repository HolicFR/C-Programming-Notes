# C - For Loop & Nested Loops

## 1. For Loop

### What is it?
`for` is a **counted loop** — use it when you know (or can calculate) how many times you want something to repeat. It packs initialization, condition, and increment into one line.

### Syntax
```c
for (initialization; condition; update) {
    // code to repeat
}
```

Execution order: `initialization` runs once → check `condition` → if true, run body → run `update` → check `condition` again → repeat until false.

### Example
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```
Output: `1 2 3 4 5`

### Key Points
- All three parts (`init; condition; update`) are optional — `for (;;) {}` is a valid infinite loop.
- The loop variable declared inside `for (int i = ...)` only exists inside the loop's scope.
- Use `for` when the number of repetitions is known/countable; use `while` when it depends on a condition that isn't a simple counter.

---

## 2. Nested Loops

### What is it?
A loop inside another loop. The inner loop completes **all** its iterations for every single iteration of the outer loop. Very common for grids, tables, and pattern printing.

### Example
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}
```
Output:
```
(1,1) (1,2) (1,3)
(2,1) (2,2) (2,3)
(3,1) (3,2) (3,3)
```

### Key Points
- Total iterations = outer iterations × inner iterations — a 3x3 nested loop runs the inner body 9 times.
- Great for: multiplication tables, 2D array traversal, star/number pattern printing.
- Use different variable names for each loop (`i`, `j`, `k`...) — reusing the same name breaks the outer loop's counting.
- Watch performance: deeply nested loops (3+) on large ranges can get slow fast — that's O(n²), O(n³) territory.
