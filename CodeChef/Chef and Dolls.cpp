// Problem Link => https://www.codechef.com/problems/MISSP

#include <iostream>
using namespace std;

int findMissingDoll(int N) {
    const int MAX_TYPES = 100000;
    int count[MAX_TYPES + 1] = {0};
    
    for (int i = 0; i < N; i++) {
        int type;
        cin >> type;
        count[type]++;
    }
    
    for (int i = 0; i <= MAX_TYPES; i++) {
        if (count[i] % 2 != 0) {
            return i;
        }
    }
    
    return -1;  // No missing doll found
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int missingDoll = findMissingDoll(N);
        
        cout << missingDoll << "\n";
    }
    
    return 0;
}