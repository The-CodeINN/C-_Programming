#include <iostream>
#include <string>
using namespace std;

// Declaring a function

/* int DemoConsoleOutput();

int main() {
    DemoConsoleOutput();

    return 0;
}

int DemoConsoleOutput(){
    cout << "Learning functions" << endl;
    cout << "The sum of four and six is " << 4 + 6 << endl;

    return 0;
} */

/* int DemoConsoleOutput() {
    cout << "The mass of the body is " << 10 * 9.8 << "g" << endl;

    return 0;
}

int main(){
    return DemoConsoleOutput();
}
*/

// Getting info from the user
int main()
{

    int inputAge;
    cout << "Enter your age: ";

    // store the age into inputAge
    cin >> inputAge;

    string inputName;

    cout << "What is your name: ";

    // store the name into inputName
    cin >> inputName;

    // Print the final output
    cout << "Hello " << inputName << "!"
         << " You are " << inputAge << " years old";

    return 0;
}