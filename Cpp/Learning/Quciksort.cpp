#include<bits/stdc++.h>
#include<vector>
using namespace std;

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for (int j = l; j < r; j++)
    {
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[r]);
    return i+1;
    
}

void  quick(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr, l ,r);
        quick(arr, l, pi-1);
        quick(arr, pi+1, r);
    }
}

int main(){
    int arr[] = {2, 6, 1, 3, 4, 5};
    quick(arr, 0, 6);
    for (int  i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}