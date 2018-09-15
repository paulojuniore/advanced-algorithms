// 2590 - Sete. 07/05/2018
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int nums[] = {1, 7, 9, 3};
	for(int i = 0; i < n; i++)
	{
		long long int exp;
		cin.tie(NULL);
		cin >> exp;

		cout.sync_with_stdio(false);
		cout << nums[exp % 4] << "\n";
	}
	return 0;
}
