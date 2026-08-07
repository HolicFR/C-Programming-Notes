
# Arithmetic operators are used to perform common mathematical operations.

| Operator | Name           | Description                            | Example |
| -------- | -------------- | -------------------------------------- | ------- |
| +        | Addition       | Adds together two values               | x + y   |
| -        | Subtraction    | Subtracts one value from another       | x - y   |
| *        | Multiplication | Multiplies two values                  | x * y   |
| /        | Division       | Divides one value by another           | x / y   |
| %        | Modulus        | Returns the division remainder         | x % y   |
| ++       | Increment      | Increases the value of a variable by 1 | ++x     |
| --       | Decrement      | Decreases the value of a variable by 1 | --x     |

$$EXAMPLE$$
### Example

```c
int x = 10;
int y = 3;

printf("%d\n", x + y); // 13
printf("%d\n", x - y); // 7
printf("%d\n", x * y); // 30
printf("%d\n", x / y); // 3
printf("%d\n", x % y); // 1

int z = 5;
++z;
printf("%d\n", z); // 6
--z;
printf("%d\n", z); // 5
```


## **Note:** When dividing two integers in C, the result will also be an integer. For example, `10 / 3` gives `3`. If you want a decimal result, use `float` or `double` values, like `10.0 / 3`.

### Example

```c
int a = 10;
int b = 3;
printf("%d\n", a / b);   // Integer division, result is 3

double c = 10.0;
double d = 3.0;
printf("%f\n", c / d);   // Decimal division, result is 3.333...
```


# [[Incrementing and Decrementing]]
