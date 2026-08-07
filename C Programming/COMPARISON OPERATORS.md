# Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us  find answers and make decisions.

## The return value of a comparison is either `1` or `0`, which means **true** (`1`) or **false** (`0`). These values are known as **Boolean values**, and you will learn more about them in the [Booleans](https://www.w3schools.com/c/c_booleans.php) and [If..Else](https://www.w3schools.com/c/c_conditions.php) chapter.

### In the following example, we use the **greater than** operator (`>`) to find out if 5 is greater than 3:

### Example

int x = 5;  
int y = 3;  
printf("%d", x > y); // returns 1 (true) because 5 is greater than 3

A list of all comparison operators:

| Operator | Name                     | Example | Description                                                                 |
| -------- | ------------------------ | ------- | --------------------------------------------------------------------------- |
| ==       | Equal to                 | x == y  | Returns 1 if the values are equal                                           |
| !=       | Not equal                | x != y  | Returns 1 if the values are not equal                                       |
| >        | Greater than             | x > y   | Returns 1 if the first value is greater than the second value               |
| <        | Less than                | x < y   | Returns 1 if the first value is less than the second value                  |
| >=       | Greater than or equal to | x >= y  | Returns 1 if the first value is greater than, or equal to, the second value |
| <=       | Less than or equal to    | x <= y  | Returns 1 if the first value is less than, or equal to, the second value    |

## Real-Life Examples

### Comparison operators are often used in real-world conditions, such as checking if a person is old enough to vote:

### Example

```c
int age = 18;

printf("%d\n", age >= 18); // 1 (true), old enough to vote
printf("%d\n", age < 18);  // 0 (false)
```

Another common use is checking if a password is long enough:

### Example

```c
int passwordLength = 5;

printf("%d\n", passwordLength >= 8); // 0 (false), too short
printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters
```
