#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    stack<int> s;
    int i=0,m=0;
    while(i<n ||!s.empty()){
        if (s.empty() || (i<n && a[i]>a[s.top()]))
        {
            s.push(i++);
        }
        else{
            int h=a[s.top()];
            s.pop();
            int a=h*(s.empty()?i:i-s.top()-1);
            m=max(m,a);
        }
        
    }
    cout<<m;
    return 0;
}