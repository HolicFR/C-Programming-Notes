```c

#include <stdio.h>

  

int main() {

    int a = 5;

    int b = 20;

  

    // In C, any non-zero value is considered TRUE.

    // So a = 5 is TRUE and b = 20 is TRUE.

    // && (Logical AND) requires BOTH conditions to be true.

    // a && b → TRUE && TRUE → TRUE

    // Therefore, this if block runs.

    if (a && b) {

        printf("Line 1 - Condition is true\n");

    }

  

    // || (Logical OR) requires AT LEAST ONE condition to be true.

    // a || b → TRUE || TRUE → TRUE

    // Both happen to be true here, so the condition is true.

    if (a || b) {

        printf("Line 2 - Condition is true\n");

    }

  
  

    /* Let's change the value of a and b */

  

    a = 0;

    b = 10;

  

    // Now:

    // a = 0  → FALSE

    // b = 10 → TRUE

  

    // && requires BOTH sides to be true.

    // a && b → FALSE && TRUE → FALSE

    //

    // Since the condition is false, the if block is skipped

    // and the else block runs instead.

    if (a && b) {

        printf("Line 3 - Condition is true\n");

    } else {

        printf("Line 3 - Condition is not true\n");

    }

  
  

    // ! is the Logical NOT operator.

    // It reverses the result:

    // TRUE  → FALSE

    // FALSE → TRUE

    //

    // First, C evaluates what is inside the parentheses:

    //

    // a && b

    // FALSE && TRUE → FALSE

    //

    // Then ! reverses FALSE:

    //

    // !FALSE → TRUE

    //

    // Therefore, this if block runs.

    if (!(a && b)) {

        printf("Line 4 - Condition is true\n");

    }

  

    return 0;

}

```

### Example 2

In C, a **char** type is a subset of **int** type. Hence, logical operators can work with char type too.

```c
#include <stdio.h>

int main(){

   char a = 'a';
   char b = '\0'; // Null character

   if (a && b){
      printf("Line 1 - Condition is true\n" );
   }

   if (a || b){
      printf("Line 2 - Condition is true\n" );
   }
   
   return 0;
}

```
#### Output

Run the code and check its output −

Line 2 - Condition is true

Logical operators are generally used to build a compound boolean expression. Along with relational operators, logical operators too are used in decision-control and looping statements in C.

### Example 3

The following example shows a compound Boolean expression in a C program −

``` c
#include <stdio.h>

int main(){

   int phy = 50;
   int maths = 60;

   if (phy < 50 || maths < 50){
      printf("Result:Fail");
   }
   else {
      printf("Result:Pass");
   }
   
   return 0;
}
``` 

#### Output

Result:Pass

### Example 4

The similar logic can also be expressed using the **&&** operator as follows −

```c
#include <stdio.h>

int main(){

   int phy = 50;
   int maths = 60;

   if (phy >= 50 && maths >= 50){
      printf("Result: Pass");
   }
   else {
      printf("Result: Fail");
   }
   
   return 0;
}
```

#### Output

Run the code and check its output −

Result: Pass

### Example 5

The following C code employs the NOT operator in a **while** loop −

```c
#include <stdio.h>

int main(){

   int i = 0;

   while (!(i > 5)){
      printf("i = %d\n", i);
      i++;
   }
   
   return 0;
}
```


#### Output

In the above code, the **while** loop continues to iterate till the expression "!(i > 5)" becomes false, which will be when the value of "i" becomes more than 5.

i = 0
i = 1
i = 2
i = 3
i = 4
i = 5

C has bitwise counterparts of the logical operators such as bitwise AND (&), bitwise OR (|), and binary NOT or complement (~) operator.