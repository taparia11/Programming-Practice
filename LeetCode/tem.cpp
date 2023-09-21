// C++ program to find the length of the longest substring
// without repeating characters
#include <bits/stdc++.h>
using namespace std;

// This function returns true if all characters in str[i..j]
// are distinct, otherwise returns false
bool areDistinct(string str, int i, int j)
{

    // Note : Default values in visited are false
    vector<bool> visited(256);

    for (int k = i; k <= j; k++) {
        if (visited[str[k]] == true)
            return false;
        visited[str[k]] = true;
    }
    return true;
}

// Returns length of the longest substring
// with all distinct characters.
int longestUniqueSubsttr(string str)
{
    int n = str.size();
    int res = 0; // result
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (areDistinct(str, i, j))
                res = max(res, j - i + 1);
    return res;
}

// Driver code
int main()
{
    char str[100];
    scanf("%s",str);
    int len = longestUniqueSubsttr(str);
    cout<<len;
    return 0;
}
