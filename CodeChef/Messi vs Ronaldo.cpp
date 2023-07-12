// Problem Link => https://www.codechef.com/problems/MVR

#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    a = a * 2 + b;
    x = x * 2 + y;
    if (a > x)
        cout << "Messi";
    else if (a < x)
        cout << "Ronaldo";
    else
        cout << "Equal";
    return 0;
}
