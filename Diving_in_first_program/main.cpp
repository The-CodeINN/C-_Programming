// This is the iostream header file
#include <iostream>
// using G++ to compile c++20 program
// g++ -o main main.cpp -std=c++20 

/* int main(){
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
*/
int main(){

    // This allow all artifacts in the std namespace to be used
    // using namespace std;

    // This only allows the cout and endl
    using std::cout;
    using std::endl;

    cout << "Hello World" << endl;

    return 0;
}

