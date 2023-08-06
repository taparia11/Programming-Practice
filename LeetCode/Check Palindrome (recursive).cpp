// Problem Link => https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool check(string str, int i){
    if(i >= str.size()/2)
        return true;
    if(str[i] != str[str.size() - 1 - i])
        return false;
    return check(str, i + 1);
}

bool isPalindrome(string& s) {
    string str;
    for(auto c:s)
        if(isalpha(c) || isdigit(c))
            str += tolower(c);
    return check(str, 0);
}
