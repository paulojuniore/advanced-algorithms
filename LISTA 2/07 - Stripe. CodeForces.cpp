// 18C - CodeForces
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> nums(n, 0);
	int total = 0, somaEsq = 0, caminhos = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> nums[i];
		total += nums[i];
	}
	
	for(int j = 0; j < n - 1; j++)
	{
		somaEsq += nums[j];
		if (2 * somaEsq == total)
			caminhos++;
	}
	
	cout << caminhos << endl;
	
	return 0;
}

