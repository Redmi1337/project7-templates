#include <iostream>
using namespace std;

template <typename T, typename T1>
void Foo(T a, T1 b)
{
    cout << "sum = " << a + b << endl
         << "difference = " << a - b << endl
         << "multiplication = " << a * b << endl
         << "division = " << (float)a / b << endl;
}

int main()
{
    Foo(3.1415, 54);
    return 0;
}