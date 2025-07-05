#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nMultiplication Table for " << number << ":\n";
    for (int i = 1; i <= 10; ++i)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}