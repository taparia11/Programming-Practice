#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> tickets(n);
    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            string s = tickets[i] + tickets[j];
            int len = s.length();
            if (len % 2 == 0) {
                int sum1 = 0, sum2 = 0;
                for (int k = 0; k < len/2; k++) {
                    sum1 += s[k] - '0';
                    sum2 += s[k+len/2] - '0';
                }
                if (sum1 == sum2) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
