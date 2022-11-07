#include <iostream>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    for(long long int a0 = 0; a0 < t; a0++){
        long long int n,a=1,b=2,c,sum=0;
        cin >> n;
        for (long long int j=2; j<n; j++) {
            c=a+b;
            a=b;
            b=c;
            if (c>n) {
            break;
            }
            if (c%2==0) {
                sum+=c;
            }
        }
        cout<<sum+2<<endl;
    }
    return 0;
}
