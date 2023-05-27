#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    string first,second;
    cin>>t;
    cin>>first>>second;
    for (int i = 0; i < t; i++)
    {

        cout<<second.at(i);

        if(second.at(i) == 0)
        {
            cout<<"hi";
        }
        else if(((first.at(i) == 'l') && (second.at(i) !=1)) || ((first.at(i) == 1) && (second.at(i) =='l'))){
            int j;
        }
        else if(first.at(i)!=second.at(i)){
            // cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    
    return 0;
}