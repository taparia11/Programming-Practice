#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int left = 0, right = 0, max_gifts = 0;
    while (right < n) {
        if (a[right] - a[left] < m) {
            right++;
        } else {
            left++;
        }
        max_gifts = max(max_gifts, right - left);
    }
    cout << max_gifts << endl;
    return 0;
}
