# Fundamentals

## C++ Pointers

A pointer is a special variable that holds the memory address of another variable. Pointers allow programs to access and manipulate data in memory efficiently, making them a key feature for system-level programming and dynamic memory management.

A pointer can be declared in the same way as any other variable but with an **asterisk symbol (\*)**. The **\* symbol** is also called **dereference operator** and **&** is **address-of** operator.

```cpp
data_type * name    // create pointer

int* ptr;   // can be int *ptr also

int value = 15;
int* ptr = &value; // Here, pointer ptr store the address of variable value using address-of operator (&).
```

## Linear Search Algorithm

In Linear Search, we iterate over all the elements of the array and check if it the current element is equal to the target element. (like array.find or array.findIndex() in JavaScript)
