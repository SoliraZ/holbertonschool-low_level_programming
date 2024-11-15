# Structure, Typedef

This project involves defining and working with a `struct dog` in C. Below are the tasks and their descriptions:

## Tasks

### 1. Define a new type `struct dog`
Define a new type `struct dog` with the following elements:
- `name`, type: `char *`
- `age`, type: `float`
- `owner`, type: `char *`

### 2. Initialize a variable of type `struct dog`
Write a function that initializes a variable of type `struct dog`.

**Prototype:**
```c
void init_dog(struct dog *d, char *name, float age, char *owner);
```

### 3. Print a `struct dog`
Write a function that prints a `struct dog`.

**Prototype:**
```c
void print_dog(struct dog *d);
```

### 4. Define a new type `dog_t`
Define a new type `dog_t` as a new name for the type `struct dog`.

### 5. Create a new dog
Write a function that creates a new dog.

**Prototype:**
```c
dog_t *new_dog(char *name, float age, char *owner);
```

### 6. Free dogs
Write a function that frees dogs.

**Prototype:**
```c
void free_dog(dog_t *d);
```

## Usage
To use these functions, include the corresponding header file in your C program and compile with the implementation files.
