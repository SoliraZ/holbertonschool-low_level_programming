# Function Pointers in C

This repository contains several C programs that demonstrate the use of function pointers. Below are the descriptions of each program and their prototypes.

## 1. Print a Name

This function prints a name using a function pointer.

**Prototype:**
```c
void print_name(char *name, void (*f)(char *));
```

## 2. Array Iterator

This function executes a function given as a parameter on each element of an array.

**Prototype:**
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```
- `size` is the size of the array.
- `action` is a pointer to the function you need to use.

## 3. Integer Search

This function searches for an integer in an array.

**Prototype:**
```c
int int_index(int *array, int size, int (*cmp)(int));
```
- `size` is the number of elements in the array.
- `cmp` is a pointer to the function to be used to compare values.
- `int_index` returns the index of the first element for which the `cmp` function does not return 0.
- If no element matches, return -1.
- If `size <= 0`, return -1.

## 4. Simple Calculator

This program performs simple operations.

**Usage:**
```
calc num1 operator num2
```
- You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`.
- `operator` is one of the following:
    - `+`: addition
    - `-`: subtraction
    - `*`: multiplication
    - `/`: division
    - `%`: modulo

**Program Behavior:**
- The program prints the result of the operation, followed by a new line.
- If the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`.
- If the operator is none of the above, print `Error`, followed by a new line, and exit with the status `99`.
- If the user tries to divide (`/` or `%`) by 0, print `Error`, followed by a new line, and exit with the status `100`.

This task requires that you create four different files.
