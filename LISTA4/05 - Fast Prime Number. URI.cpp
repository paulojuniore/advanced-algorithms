// 1221 - Primo Rápido. 04/04/2018
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		long long int num;
		cin >> num;
		if(num == 2)
		{
		    cout << "Prime" << endl;
		    continue;
		}
		
		int cont = 0;
		for(int j = 1; j < sqrt(num)+1; j++)
		{
			if(num % j == 0)
				cont++;
			if(cont > 1)
				break;
		}
		if(cont > 1)
			cout << "Not Prime" << endl;
		else
			cout << "Prime" << endl;
	}
	return 0;
}
