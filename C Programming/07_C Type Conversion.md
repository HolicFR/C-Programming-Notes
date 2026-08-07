
## Type Conversion

Sometimes, you have to convert the value of one [data type](https://www.w3schools.com/c/c_data_types.php) to another type. This is known as **type conversion**.

For example, if you try to divide two integers, `5` by `2`, you would expect the result to be `2.5`. But since we are working with integers (and not floating-point values), the following example will just output `2`:

### Example
```c
int x = 5;  
int y = 2;  
int sum = 5 / 2;  
  
printf("%d", sum); // Outputs 2
```

## To get the right result, you need to know how **type conversion** works.

There are two types of conversion in C:

- **Implicit Conversion** (automatically)  
    
- **Explicit Conversion** (manually)

## Implicit Conversion

implicit conversion is done by the compiler automatically when you assign a value to another.

For example, if you assign an `int` value to a `float` type:

### Example

```c

```// Automatic conversion: int to float  
float myFloat = 9;  
  
printf("%f", myFloat); // 9.000000
```

As you can see, the compiler automatically converts the int value `9` to a float value of `9.000000`.

This can be risky, as you might lose control over specific values in certain situations.

Especially if it was the other way around - the following example automatically converts the float value `9.99` to an int value of `9`:

### Example
```c
// Automatic conversion: float to int  
int myInt = 9.99;  
  
printf("%d", myInt); // 9
```


## Explicit Conversion

Explicit conversion is done manually by placing the type in parentheses `()` in front of the value.

Considering our problem from the example above, we can now get the right result:

### Example
```c

// Manual conversion: int to float  
float sum = (float) 5 / 2;  
  
printf("%f", sum); // 2.500000
```

You can also place the type in front of a variable:

### Example
```c

int num1 = 5;  
int num2 = 2;  
float sum = (float) num1 / num2;  
  
printf("%f", sum); // 2.500000
```

And since you learned about "[decimal precision](https://www.w3schools.com/c/c_data_types_dec.php)" in a previous chapter, you could make the output even cleaner by removing the extra zeros (if you like):

### Example
```c

int num1 = 5;  
int num2 = 2;  
float sum = (float) num1 / num2;  
  
printf("%.1f", sum); // 2.5
```

---

## Real-Life Example

Here's a real-life example of data types and type conversion where we create a program to calculate the percentage of a user's score in relation to the maximum score in a game:

### Example
```c

// Set the maximum possible score in the game to 500  
int maxScore = 500;  
  
// The actual score of the user  
int userScore = 423;  
  
/* Calculate the percantage of the user's score in relation to the maximum available score.  
Convert userScore to float to make sure that the division is accurate */  
float percentage = (float) userScore / maxScore * 100.0;  
  
// Print the percentage  
printf("User's percentage is %.2f", percentage);
```