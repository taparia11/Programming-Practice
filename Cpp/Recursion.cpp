#include <iostream>
using namespace std;
int Sum(int);
int main()
{
    int n;
    cin >> n;
    cout << Sum(n);
    return 0;
}

int Sum(int n)
{
    if (n == 0)
        return 0;
    return n + Sum(n - 1);
}