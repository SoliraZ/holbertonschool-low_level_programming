# Variadic Functions

This project contains several functions that demonstrate the use of variadic functions in C.

## Functions

### 1. Sum of All Parameters

**Prototype:**
```c
int sum_them_all(const unsigned int n, ...);
```

**Description:**
- Returns the sum of all its parameters.
- If `n == 0`, returns `0`.

### 2. Print Numbers

**Prototype:**
```c
void print_numbers(const char *separator, const unsigned int n, ...);
```

**Description:**
- Prints numbers, followed by a new line.
- `separator` is the string to be printed between numbers.
- `n` is the number of integers passed to the function.
- If `separator` is `NULL`, it is not printed.
- Prints a new line at the end of the function.

### 3. Print Strings

**Prototype:**
```c
void print_strings(const char *separator, const unsigned int n, ...);
```

**Description:**
- Prints strings, followed by a new line.
- `separator` is the string to be printed between the strings.
- `n` is the number of strings passed to the function.
- If `separator` is `NULL`, it is not printed.
- If one of the strings is `NULL`, prints `(nil)` instead.
- Prints a new line at the end of the function.

### 4. Print Anything

**Prototype:**
```c
void print_all(const char * const format, ...);
```

**Description:**
- Prints anything based on the format provided.
- `format` is a list of types of arguments passed to the function:
    - `c`: char
    - `i`: integer
    - `f`: float
    - `s`: char * (if the string is `NULL`, prints `(nil)` instead)
- Any other character in the format is ignored.
- You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`.
- You can use a maximum of:
    - 2 `while` loops
    - 2 `if` statements
    - 9 variables
- Prints a new line at the end of the function.

## Usage

To use these functions, include the corresponding header file and compile your code with the provided source files.

```c
#include "variadic_functions.h"

int main(void)
{
        // Example usage of the functions
        return 0;
}
```
