// 1310 - Lucro. 19/07/2018
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int custo, dias;
	int dia[55];
	
	while(cin >> dias)
	{
		cin >> custo;
		for (int i = 0 ; i < dias ; i++)
		{
			cin >> dia[i];
			
			dia[i] -= custo;
		}
		
		int endh = 0, endm = 0;
		for (int i = 0 ; i < dias ; i++)
		{
			endh = max(0, endh + dia[i]);
			endm = max(endm, endh);
		}
		
		cout << endm << endl;		
	}
}
