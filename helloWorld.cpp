#include <iostream>
#include <cmath>



int main() {
   

    // Pointers 
    // Simple pointers

    // Pointers are ways to reference to the variable in memory.

    int a = 50;
    int* ptr = &a;
    std::cout << "Address of a is :" << ptr << "and the value of ptr is: " << *ptr <<  std::endl;
    *ptr = 52;
    std::cout << "Address of a is :" << ptr << "and the value of ptr is: " << *ptr << std::endl;
    



}