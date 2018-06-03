#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		
		cout << "0x" << hex << uppercase << num << endl;
	}
	return 0;
}
