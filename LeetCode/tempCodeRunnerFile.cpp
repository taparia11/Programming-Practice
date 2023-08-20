#include<bits/stdc++.h>
#include<vector>
using namespace std;

string xback(string s){
    if(s.length()==0)
        return "";

    string ns = xback(s.substr(1));

    if(s[0] == 'x')
        return ns+'x';
    return s[0] + ns;

} 
int main(){
    cout<<xback("abxxfb");
    return 0;
}