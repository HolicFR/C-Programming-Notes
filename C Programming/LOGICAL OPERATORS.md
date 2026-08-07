## Logical operators in C evaluate to either True or False. Logical operators are typically used with Boolean operands.

## The logical AND operator (**&&**) and the logical OR operator (**||**) are both binary in nature (require two operands). The logical NOT operator (**!**) is a unary operator.

## Since C treats "0" as False and any non-zero number as True, any operand to a logical operand is converted to a Boolean data.

# Here is a table showing the logical operators in C −

| Operator | Description                                                                                                                                                | Example  |
| -------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------- | -------- |
| &&       | Called Logical AND operator. If both the operands are non-zero, then the condition becomes true.                                                           | (A && B) |
| \|       | Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true.                                                       | (A \| B) |
| !        | Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false. | !(A)     |
## The result of a logical operator follows the principle of Boolean algebra. The logical operators follow the following truth tables.

#  Logical AND (&&) Operator

## The && operator in C acts as the logical AND operator. It has the following truth table −

| a     | b     | a&&b  |
| ----- | ----- | ----- |
| true  | true  | True  |
| true  | false | False |
| false | true  | False |
| false | false | False |
The above truth table shows that the result of && is True only if both the operands are True.

## Logical OR (||) Operator

# C uses the double pipe symbol (||) as the logical OR operator. It has the following truth table −

|a|b|a\|b|
|---|---|---|
|true|true|True|
|true|false|True|
|false|true|true|
|false|false|false|

The above truth table shows that the result of **||** operator is True when either of the operands is True, and False if both operands are false.

## Logical NOT (!) Operator

# The logical NOT **!** operator negates the value of a Boolean operand. True becomes False, and False becomes True. Here is its truth table −

|A|!a|
|---|---|
|True|False|
|False|True|

Unlike the other two logical operators **&&** and **||**, the logical NOT operator **!** is a unary operator.


TL:DR 

# There are 3 logical operators :

[[Logical AND (&&) Operator]]
[[Logical OR (II) Operator]]
[[Logical NOT (!) Operator]]
[[EXAMPLES]]
