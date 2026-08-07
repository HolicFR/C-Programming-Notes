


## Fixed-Width Integers

In C, the size of `int`, `short`, and `long` types can vary depending on your computer and system. For example, an `int` might take up 2 bytes on one system, and 4 bytes on another.

To make programs behave the same everywhere, C provides **fixed-width integer types** in the `<stdint.h>` header. These types always have the same size (number of bits), no matter which computer you are on.

The most common fixed-width types are:


![[Pasted image 20260802215328.png]]


The letter `u` stands for **unsigned**, which means the type can only store **non-negative values** (0 and up). This doubles the maximum positive value compared to the signed version, but you lose the ability to store negative numbers.




## Using Fixed-Width Integers

$$EXAMPLE$$
```c
#include <stdio.h>
#include <stdint.h>  // needed for fixed-width integers

int main() {
  int8_t a = 100;        // 8-bit integer
  int16_t b = 30000;     // 16-bit integer
  int32_t c = 2000000;   // 32-bit integer
  int64_t d = 9000000000; // 64-bit integer

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%lld\n", d); // use %lld for 64-bit
  return 0;
}
```


## When to Use Fixed-Width Integers?

For most everyday programs, you don't need these types - a normal `int` is usually fine.

But fixed-width integers are **essential** when:

- You are writing **embedded systems** (programs for small devices, like microcontrollers).
- You are working with **file formats** where exact sizes matter.
- You are sending data across **networks** and need consistent results on different machines


## Real Life Example

Imagine you are building a program that shows the battery level of a device. Since the battery percentage will always be between 0 and 100, you don't need a large type like `int`. Instead, you can use `uint8_t`, which is exactly 1 byte (8 bits) and can store values from 0 to 255:

$$EXAMPLE$$
```c
#include <stdio.h>
#include <stdint.h>

int main() {
  uint8_t battery = 87; // battery level percentage

  printf("Battery level is %u out of 100\n", battery);

  return 0;
}
```

