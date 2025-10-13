#include <iostream>

int main()
{
    int age = 21;

    // declare pointer and store address of x
    int *ptr = &age;

    // print value and address
    std::cout << "Address of age: " << &age << std::endl;
    std::cout << "Value stored in pointer ptr: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    return 0;
}

// output =>
// Address of age: 0x61ff08
// Value stored in pointer ptr: 0x61ff08
// Value pointed to by ptr: 21