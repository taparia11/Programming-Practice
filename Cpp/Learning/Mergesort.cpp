#include<bits/stdc++.h>
#include<vector>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    // size of left side
    int size1 = mid - l + 1;
    // size of right side
    int size2 = r - mid;
    // left array
    int a[size1];
    // right array
    int b[size2];
    // storing left array from main array
    for (int i = 0; i < size1; i++)
    {
        a[i] = arr[l+i];
    }
    
    // storing right array from main array
    for (int i = 0; i < size2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i=0, j=0, k=l;
    
    while (i<size1 && j<size2)
    {
        //rearranging in small to large
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
    // remainning elements in left array
    while (i<size1)
    {
            arr[k] = a[i];
            k++;
            i++; 
    }
    
    // remainning elements in right array
    while (j<size2)
    {
            arr[k] = b[j];
            k++;
            j++; 
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        // taking half of array
        int mid = (l+r)/2;
        // from left to mid
        mergeSort(arr, l, mid);
        // from mid + 1 to right
        mergeSort(arr, mid+1, r);
        // merging array
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