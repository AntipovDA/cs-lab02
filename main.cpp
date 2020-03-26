#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';

    if (a > b)
    {
        cout << "max = " << a << endl;
    }
    else
    {
        cout << "max = " << b << endl;
    }


        if (a < b)
    {
        cout << "min = " << a;
    }
    else
    {
        cout << "min = " << b;
    }

}
