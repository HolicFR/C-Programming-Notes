# - What is a **Variable** ? 
 A Variable is a named container that stores a value. 
 for example : 
 int a = 10 
 int b = 20

int  = Data type
a = The variable name
10 = The value stored in the variable (a)

# Why do we use Variables in C ?

A variable in C is a user-assigned name to a certain location in the computer’s memory, which is a collection of a large number of randomly accessible locations capable of holding a single bit. Each location in the memory is identified by a unique address, expressed in binary (or Hexa-decimal for convenience) format.

Since it is extremely cumbersome to store and process the data in the memory by referring to their locations in binary form, high-level languages such as C let the locations be identified by user-defined names or variables.

Instead of identifying a free memory location and assigning it a value, you can find a suitable mnemonic identifier and assign it a value. The C compiler will choose an appropriate location and bind it to the identifier specified by you.

## Naming Conventions of C Variables

- The name of the variable must start with an alphabet (upper or lowercase) or an underscore (_). It may consist of alphabets (upper or lowercase), digits, and underscore characters. No other characters can be a part of the name of a variable in C.

- **Variable names in C are case-sensitive. For example, "age" is not the same as "AGE".**

- The ANSI standard recognizes a length of 31 characters for a variable name. Although you can choose a name with more characters, only the first 31 will be recognized. Using a descriptive name for a variable, that reflects the value it intends to store is considered to be a good practice. Avoid using very short variable names that might confuse you.

- C is a statically typed language. Hence, the data type of the variable must be mentioned in the declaration before its name. A variable may be declared inside a function (local variable) or globally. More than one variable of the same type may be declared in a single statement.

**EXAMPLE -** 

```c

 int _num = 5; // valid integer variable
 float marks = 55.50; // valid float variable 
 char choice = '0'; // valid char variable 

 // invalid variable name 
 // cannot use "-" 
 int sub-1 = 35; 
 
 //invalid; must have data type 
 avg = 50; 
 
 // invalid; name can be used for 
 // declaration only once in a function 
 int choice = 0; 
 
 // Valid integer name 
 int sal_of_employee = 20000; 
 
 // Valid because all are of same type 
 int phy, che, maths; 
 
 // error because variables of 
 // different types in same statement 
 int sal, float tax;
```


## **In C, variables can store data belonging to any of the types it recognizes. Hence there are as many number of types of variables as the number of [data types in C](https://www.tutorialspoint.com/cprogramming/c_data_types.htm).**

![[Pasted image 20260726144751.png]]


- **C programming language also allows to define various other types of variables such as Enumeration type, [Pointer](https://www.tutorialspoint.com/cprogramming/c_pointers.htm) type, [Array](https://www.tutorialspoint.com/cprogramming/c_arrays.htm) type, [Structure](https://www.tutorialspoint.com/cprogramming/c_structures.htm) type, [Union](https://www.tutorialspoint.com/cprogramming/c_unions.htm) type, etc. For this chapter, let us study only basic variable types.**


## Variable Definition in C
 - A variable definition tells the compiler where and how much storage to create for the variable. A variable definition specifies a data type and contains a list of one or more variables of that type as follows −
```c
type variable_list;

```

**Here, type must be a valid C data type including char, w_char, int, float, double, bool, or any user-defined object; and variable_list may consist of one or more identifier names separated by commas.**

**Some valid variable declarations are shown here −**

```c
int i, j, k; 
char c, ch; 
float f, salary; 
double d;
```

The line **int i, j, k;** declares and defines the variables i, j, and k; which instruct the compiler to create variables named i, j and k of type **int**.

Variables can be initialized (assigned an initial value) in their declaration. The initializer consists of an equal sign followed by a constant expression as follows −

```c
type variable_name = value;

```

for further in depth learning : https://www.tutorialspoint.com/cprogramming/c_variables.htm










