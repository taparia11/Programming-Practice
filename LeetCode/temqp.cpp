#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int* arr = new int[M];
    int fire[N];
    for (int i = 0; i < N; i++)
    {
        fire[i] = -1;
    }
    for (int i = 0; i < M; i++)
    {
        cin>>arr[i];
        fire[arr[i]-1] = 0;

    }
    int i=1,j=1;
    while (i!=N)
    {
        if(fire[i-1] == -1){
            fire[i-1] = arr[j-1] - i;
            i++;
        }
        else{
            i++;
            j++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout<<fire[i]<<endl;
    }
    
    


    return 0;
}