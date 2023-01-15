#include <multiply/multiply.h>
#include <iostream>

using namespace std;

int main()
{
    const auto expected = 1;
    const auto actual = multiply(1, 1);
    if (expected == actual)
    {
        cout << "Success!" << '\n';
    }
    else
    {
        cout << "Failure!" << '\n';
    }
    return 0;
}