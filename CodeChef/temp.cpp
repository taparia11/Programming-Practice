#include <bits/stdc++.h>
using namespace std;

int main()
{
	string subject
		= "v=spf1 ip4:40.113.200.201 ip6:2001:db8:85a3:8d3:1319:8a2e:370:7348 include:thirdpartydomain.com ~all";

	// Regex for IPV4
	regex pattern(
		"(\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3})");

	for (regex_iterator<string::iterator> it(
			subject.begin(), subject.end(), pattern);
		it != regex_iterator<string::iterator>(); ++it) {
		cout << it->str() << endl;
	}

	regex pattern1(
		"((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");

	for (regex_iterator<string::iterator> it(
			subject.begin(), subject.end(), pattern1);
		it != regex_iterator<string::iterator>(); ++it) {
		cout << it->str() << endl;
	}
 
	return 0;
}
