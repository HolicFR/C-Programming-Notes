
Very often, in programming, you will need a data type that can only have one of two values, like:

- YES / NO
- ON / OFF
- TRUE / FALSE

For this, C has a `bool` data type, which is known as **booleans**.

Booleans represent one of two values: `true` or `false`.


# A boolean variable is declared with the `bool` keyword and can take the values `true` or `false`:

bool isProgrammingFun = true;  
bool isFishTasty = false;

## Before trying to print the boolean variables, you should know that boolean values are returned as **integers**:

- `1` (or any other number that is not 0) represents `true`
- `0` represents `false`

Therefore, you can use the `%d` format specifier to print a boolean value:

# MUST INCLUDE   <stdbool.h>



$$EXAMPLE$$

```
#include <stdio.h>
#include <stdbool.h>  // INCLUDE THIS TO USE BOOLEAN DATA TYPE

int main() {

    bool IsProgrammingFun = true;

    bool WillIFindTrueLove = false;    

       // Print boolean values

    printf("%d\n", IsProgrammingFun); 

    printf("%d", WillIFindTrueLove);    

    return 0;
}
```


$$PASSWORD$$
```c
#include <stdio.h>

#include <stdbool.h>

  

int main(void) {

    int correctPassword = 12345;

    int enteredPassword;

  

    printf("Enter Your Password: ");

    scanf("%d", &enteredPassword);

  

    bool passwordCorrect = (enteredPassword == correctPassword); // IMPORTANT

  

    if (passwordCorrect) {

        printf("Login Succesfull");

  

    } else {

        printf("Wrong Password!\n");

  

    }    

        return 0;

}
```


## Storing Comparison Results

You can also store the result of a comparison in a `bool` variable:

### Example
```c

int x = 10;  
int y = 9;  
  
bool isGreater = x > y;  
  
printf("%d", isGreater); // Prints 1 (true)
```
```
