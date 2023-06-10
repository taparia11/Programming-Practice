#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    int arr[10]={0};
    str = to_string(n) + to_string(n*2) + to_string(n*3); 
    for (int i = 0; i < str.length(); i++)
    {
        arr[str[i]] = arr[str[i]] +1 ;

        
    }

    for(int i=0;i<s.length();i++){
         for (int j = i; j < s.length(); j++)
         {
            /* code */
            if(s[i]==s[j])
                return s[i];
         }
            
        }
    
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]>1){
            cout<<"false";
            return 0;
            }
    }
    

    cout<<"true";
    return 0;
}