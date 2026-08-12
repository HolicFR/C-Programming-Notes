# C - Nested Switch & Switch Case Using Range

## 1. Nested Switch Statements

### What is it?
Just like nested `if`, you can put a `switch` inside another `switch`'s case block — useful for sub-categories within a category.

### Example
```c
#include <stdio.h>

int main() {
    int dept = 1, level = 2;

    switch (dept) {
        case 1: // CS department
            switch (level) {
                case 1:
                    printf("CS - Beginner\n");
                    break;
                case 2:
                    printf("CS - Intermediate\n");
                    break;
            }
            break;
        default:
            printf("Unknown department\n");
    }

    return 0;
}
```
Output: `CS - Intermediate`

**Note:** Each inner `case` value only has to be unique within its own `switch`, not across the whole program — the compiler treats each `switch` as its own scope.

---

## 2. Switch Case Using Range (GNU extension)

### What is it?
Standard C `switch` only matches exact single values. GCC provides a non-standard extension letting you match a **range** of values in one case, using `...` between two constants.

### Syntax
```c
switch (expression) {
    case low_value ... high_value:
        // code
        break;
}
```

### Example
```c
#include <stdio.h>

int main() {
    int marks = 82;

    switch (marks) {
        case 90 ... 100:
            printf("Grade A\n");
            break;
        case 75 ... 89:
            printf("Grade B\n");
            break;
        case 60 ... 74:
            printf("Grade C\n");
            break;
        default:
            printf("Grade F\n");
    }

    return 0;
}
```
Output: `Grade B`

### Key Points
- Spaces around `...` matter in some compilers — write `case 75 ... 89:` not `case 75...89:` to avoid it being misread as a float.
- This is **not standard ISO C** — it works on GCC/Clang but may not compile on other compilers (e.g. MSVC). Use plain `if...else if` with ranges if you need full portability.
- Great for grading systems, age brackets, or any "value falls between X and Y" situation.
