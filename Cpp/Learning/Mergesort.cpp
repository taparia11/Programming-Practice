#include<bits/stdc++.h>
#include<vector>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int size1 = mid - l + 1;
    int size2 = r - mid;
    
    int a[size1];
    int b[size2];

    for (int i = 0; i < size1; i++)
    {
        a[i] = arr[l+i];
    }
    
    for (int i = 0; i < size2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i=0, j=0, k=l;

    while (i<size1 && j<size2)
    {
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++;
            i++; 
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i<size1)
    {
            arr[k] = a[i];
            k++;
            i++; 
    }
    
    while (j<size2)
    {
            arr[k] = b[j];
            k++;
            j++; 
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);

    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 4); 
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}