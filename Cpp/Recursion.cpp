#include <iostream>
using namespace std;
int Sum(int);
int Power(int, int);
int factorial(int);
int main()
{
    int n, p;
    // cin >> n ;
    // cin >> n >> p;
    cin >> n;
    // cout << Sum(n);
    // cout << Power(n, p);
    cout << factorial(n);
    return 0;
}

int Sum(int n)
{
    if (n == 0)
        return 0;
    return n + Sum(n - 1);
}

int Power(int n, int p)
{
    if (p == 0)
        return 1;
    return n * Power(n, p - 1);
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}