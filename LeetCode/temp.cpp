#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int nails;
        cin>>nails;
        int count=0;
        int arr[nails][2];
        for(int i=0;i<nails;i++){
            cin>>arr[i][0]>>arr[i][1];
            if(arr[i][0]>arr[i][1])
                count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}