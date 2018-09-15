// 1025 - Onde está o Mármore. 25/04/2018
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n_marmores, n_consultas;
	int cont = 1;

	while(cin >> n_marmores >> n_consultas)
	{
		if(n_marmores == 0)
			break;

		vector<int> marmores(n_marmores);
		for(int i = 0; i < n_marmores; i++)
			cin >> marmores[i];

		sort(marmores.begin(), marmores.end());

		cout << "CASE# " << cont++ << ":" << endl;
		for(int i = 0; i < n_consultas; i++)
		{	
			int num;
			cin >> num;

			if(!binary_search(marmores.begin(), marmores.end(), num))
				cout << num << " not found" << endl;
			else
			{
				for(int i = 0; i < n_marmores; i++)
				{
					if(marmores[i] == num)
					{
						cout << num << " found at " << i + 1 << endl;
						break;
					}
				}	
			}
		}
	}
	return 0;
}
