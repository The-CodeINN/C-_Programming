// This is the iostream header file
#include <iostream>

int main(){
    //using comments
    // Print the string "Hello World" to the console
    std::cout << "Hello world!" << std::endl;

    // compile time error
    // std::cout << "Hello world!" << std::endl

    // runtime error
    int value = 7 / 0;
    std::cout << "value : " << value << std::endl;
    return 0;
}

