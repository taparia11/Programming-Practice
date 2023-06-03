#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector< string> arr;
	int idx, mina = INT16_MAX, t, age;
	string name;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> name >> age;
		arr.push_back(name);
		if (mina > age)
		{
			mina = age;
			idx = i;
		}
	}
	for (int i = idx; i < t; i++)
	{
		cout << arr[i]<<endl;
	}
	for (int i = 0; i < idx; i++)
	{
		cout << arr[i]<<endl;
	}
	return 0;
}
