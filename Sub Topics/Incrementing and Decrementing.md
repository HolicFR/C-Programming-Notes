

# Incrementing and decrementing are very common in programming, especially when working with counters, loops, and arrays (which you will learn more about in later chapters).

The `++` operator increases a value by 1, while the `--` operator decreases a value by 1:


### Example

```c
int x = 5;

++x; // Increment x by 1
printf("%d\n", x); // 6
```

### Example

```c
int x = 5;

--x; // Decrement x by 1
printf("%d\n", x); // 4
```


# NOTE : 
### Sometimes, you might both increment and decrement the same variable. Remember that if you increase a value and later decrease it, it will go up by one and then back down by one - ending up where it started:

### Example

```c
int x = 5;

++x; // Increment x by 1 (x becomes 6)
--x; // Decrement x by 1 (x becomes 5 again)

printf("%d\n", x); // 5
```

# Real Life Example: Counting People

Imagine you are building a program to count how many people enter and leave a room. You can use `++` to increase the counter when someone enters, and `--` to decrease it when someone leaves:
### Example

```c
int peopleInRoom = 0;

// 3 people enter
peopleInRoom++;
peopleInRoom++;
peopleInRoom++;

printf("%d\n", peopleInRoom); // 3

// 1 person leaves
peopleInRoom--;

printf("%d\n", peopleInRoom); // 2
```