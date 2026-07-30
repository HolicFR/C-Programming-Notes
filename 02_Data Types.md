

# WHAT ARE DATA TYPES ? 

- **Data types** in C refer to an extensive system used for declaring [variables](https://www.tutorialspoint.com/cprogramming/c_variables.htm) or [functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm) of different types. The type of a variable determines how much space it occupies in storage and how the bit pattern stored is interpreted. In this chapter, we will learn about **data types in C**. A related concept is that of "variables", which refer to the addressable location in the memory of the processor. The data captured via different input devices is stored in the computer memory. A symbolic name can be assigned to the storage location called variable name.

- C is a statically typed language. The name of the variable along with the type of data it intends to store must be explicitly declared before actually using it.

- C is also a strongly typed language, which means that the automatic or implicit conversion of one data type to another is not allowed.

- The types in C can be classified as follows −


![[Pasted image 20260727001657.png]]

The array types and structure types are referred collectively as the aggregate types. The type of a function specifies the type of the function's return value.
##### What are basic types ? 
They are arithmetic types and are classified into 
- Integer types
- Floating-Point types

#### What are **ENUMERATED** Types ?

An **enum** is basically a set of **names (words)** that you assign to **integer values (numbers)**. The compiler automatically gives them numbers starting from 0 unless you specify otherwise.

$$EXAMPLE$$

```c
enum Day {

  MONDAY,

  TUESDAY,

  WEDNESDAY,

  THURSDAY,

  FRIDAY,

  SATURDAY,

  SUNDAY

};
```

## THE TYPE VOID

A `void` function is often used to **perform an action** without giving a value back.

$$EXAMPLE$$

void can be used as an interactive button for eg i want a option to choose play and exit. with the void cmd someone clicks play and comes onto the next screen of the game without seeing any output.





## THE DERIVED TYPES

**They include (a) Pointer types, (b) Array types, (c) Structure types, (d) Union types and (e) Function types.**

$$EXAMPLE$$$$1$$
1. **Array** – Stores multiple values of the same data type.

```c
int marks[5] = {10, 20, 30, 40, 50};
```
$$EXAMPLE$$
$$2$$
2. **Pointer** – Stores the memory address of another variable.

```c
int age = 19;
int *ptr = &age;
```
$$EXAMPLE$$
$$3$$
3. **Structure (`struct`)** – Groups different data types into one variable.

```c
struct Student {
    char name[20];
    int age;
};
```

---
$$EXAMPLE$$
$$4$$
4. **Union (`union`)** – Similar to a structure, but all members share the same memory.

```c
union Data {
    int number;
    float decimal;
};
```

---
$$EXAMPLE$$
$$5$$
5. **Function** – A reusable block of code that performs a task.

```c
void greet() {
    printf("Hello!\n");
}
```


# THE REST OF THE CONTENT INCLUDES 

## Integer Data Types in C
## Floating-Point Data Types in C
## User-defined Data Types in C
## The void Data Type in C
## Arrays Data Type in C
## Pointers Data Type in C

# ALL OF THIS CAN BE FOUND IN THIS LINK
https://www.tutorialspoint.com/cprogramming/c_data_types.htm

## ***The next Step is [[03_Literals]]***

