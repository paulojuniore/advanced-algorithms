// 230B - T-Primes. 07/05/2018
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
            
int main()
{
	vector<int> ehprimo(1000001, 1);
	ehprimo[0] = 0;
	ehprimo[1] = 0;
	
	for(int i = 2; i < 1000001; i++)
	{
		if(ehprimo[i])
		{
			for(int j = 2; i*j < 1000001; j++)
				ehprimo[i*j] = 0;
		}
	}
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		long long int num;
		cin >> num;
		
		int raiz = (int) sqrt(num);
		if(raiz - sqrt(num) == 0)
		{
			if(ehprimo[raiz])
				cout << "YES" << endl;
			else	
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}
	
	return 0;
}
