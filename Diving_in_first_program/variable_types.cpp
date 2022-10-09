#include <iostream>
using namespace std;

constexpr double Div_Expr(double a, double b)
{
    return a / b;
}

void AreaOfCircle()
{
    // const double pi = 22.0 / 7;

    constexpr double pi = Div_Expr(22, 7);

    typedef unsigned int Strictly_Positive_Integer;
    Strictly_Positive_Integer numEggsInBasket = 80;

    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    cout << "The area of the circle is " << pi * r * r << " cm2" << endl;
}

void AutoKeyword()
{
    auto coinFlippedHeads = true;
    auto largeNum = 250'000'000'000'000;

    cout << "coinFlippedHeads = " << coinFlippedHeads << endl;
    cout << "largeNum = " << largeNum << ",";
    cout << "sizeof(largeNum) = " << sizeof(largeNum) << endl;
}

int main()
{
    unsigned short uShortValue = 65535;
    cout << "unsigned short 65535 + 1 = ";
    cout << ++uShortValue << endl;

    short signedShort = 32767;
    cout << "signed short 32767 + 1 = ";
    cout << ++signedShort << endl;
    cout << sizeof(long int) << endl;

    // AutoKeyword();
    AreaOfCircle();

    return 0;
}
