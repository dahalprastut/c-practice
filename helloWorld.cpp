#include <iostream>
#include <cmath>

void pointerFnc(char *a) {
    std::cout << "addres of a is: " << a << "and its value is: " << *a << std::endl;
};

char changePointerVal (char *a) {
    *a = 'd';
    return *a;
};


void voidPointerFn(void* variab, char c) {
    if(c == 'i') {
        std::cout << "the address of variable is: " << ((int*)variab) << "and the value is " << *((int*)variab) << std::endl;
    } else if(c == 'c') {
        std::cout << "the address of variable is: " << ((char*)variab) << "and the value is " << *((char*)variab) << std::endl;
    }
};


int main() {
   

    //    complex pointers

    // change the pointers using function
    // int pointers cannot be used for string variables and vice versal.
    char a = 12;
    // pointerFnc(&a);
    // a = changePointerVal(&a);
    // std::cout << "addres of a is: " << &a << "and its value is: " << a << std::endl; 
    voidPointerFn(&a, 'i');


}