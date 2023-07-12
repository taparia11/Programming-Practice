// Problem Link => https://www.codechef.com/problems/FINDK3

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a * b) % c == 0)
            cout << a * b << " " << c;
        else if ((a * c) % b == 0)
            cout << a * c << " " << b;
        else if ((c * b) % a == 0)
            cout << c * b << " " << a;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}
