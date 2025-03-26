#include <iostream>

using namespace std;

int main()
{
    int a, b, s = 0, p = 1;
    cin >> a;
    while (a != 0)
    {
        b = a % 10;
        s = s + b;
        p = p * b;
        a = a / 10;
    }
    cout << s << " " << p << endl;
}