#include <bits/stdc++.h>
using namespace std;

int main()
{
	string subject;
    getline(cin,subject);

	// Regex for IPV4
	regex pattern(
		"(\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3})");

	for (regex_iterator<string::iterator> it(
			subject.begin(), subject.end(), pattern);
		it != regex_iterator<string::iterator>(); ++it) {
		cout << it->str() << endl;
	}

	

	return 0;
}
