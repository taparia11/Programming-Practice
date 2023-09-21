// C++ program to merge two sorted arrays/
#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1,
                            int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    // traverse the arr1 and insert its element in arr3
    while(i < n1){
    arr3[k++] = arr1[i++];
    }
        
    // now traverse arr2 and insert in arr3
    while(j < n2){
    arr3[k++] = arr2[j++];
    }
        
    // sort the whole array arr3
    sort(arr3, arr3+n1+n2);
}

// Driver code
int main()
{
    int size1,size2;

    cin>>size1;
    int arr[size1];
    for (int i = 0; i < size1; i++)
    {
        cin>>arr[i];
    }
    cin>>size2;
    int arr1[size2];
    for (int i = 0; i < size2; i++)
    {
        cin>>arr1[i];
    }

    int arr2[size1+size2];
    mergeArrays(arr, arr1, size1, size2, arr2);

    // cout << "Array after merging" <<endl;
    // for (int i=0; i < size1+size2; i++)
        cout << arr2[(size1+size2)/2] << " ";

    return 0;
}
