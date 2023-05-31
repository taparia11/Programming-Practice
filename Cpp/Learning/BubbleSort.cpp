#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
 int count =1;
    while(count<n)
    {
        for (int j = 0; j < n-count; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int t = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
            
        }
        count++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}