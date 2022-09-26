#include <iostream>
using namespace std;

// int main(){
//     cout << "This is a mini calculator***" << endl;

//     cout << "Enter the first number: ";
//     int firstNum = 0;
//     cin >> firstNum;

//     cout << "Enter the second number: ";
//     int secondNum = 0;
//     cin >> secondNum;

//     int multiplyResult = firstNum * secondNum;

//     // display the result
//     cout << firstNum << " X " << secondNum;
//     cout << " = " << multiplyResult << endl;

//     return 0;
// }

// LOCAL VARIABLES
/* void multiplyNums(){
    cout << "Number 1: ";
    int num1 = 0;
    cin >> num1;

    cout << "Number 2: ";
    int num2 = 0;
    cin >> num2;

    // Multiply the numbers
    int result = num1 * num2;

    cout << num1 << " X " << num2;
    cout << " = " << result << endl;
}

int main(){
    cout << "Multiplication calculator***" << endl;

    // call the function
    multiplyNums();

    return 0;
} */

// Global variables
int num1 = 0, num2 = 0, result = 0;

void multiplyNums(){
    cout << "Enter num 1: ";
    cin >> num1;

    cout << "Enter num 2: ";
    cin >> num2;

    result = num1 * num2;

    cout << "This is from multiplyNums " << endl;
    
    cout << "Result is " << result << endl;
    cout << endl;
}

int main(){
    multiplyNums();
    cout << "This is from 'main' function " << endl;
    cout << num1 << " X " << num2 << " = " << result << endl;
    return 0;
}
