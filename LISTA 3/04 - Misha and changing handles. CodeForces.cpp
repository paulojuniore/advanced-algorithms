// 501B - Misha and Changing Handles. 30/04/2018
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string atual, nova;
	
	cin >> n;
	
	map<string, string> registros;
	set<string> nomes;
	for(int i = 0; i < n; i++)
	{
		cin >> atual >> nova;
		if(registros.count(nova))
			continue;
		
		nomes.insert(atual);
		nomes.insert(nova);
			
		if(registros.count(atual))
		{
			string antiga = registros[atual];
			registros.erase(atual);
			registros.insert(pair<string, string>(nova, antiga));
		}
		else
			registros.insert(pair<string, string>(nova, atual));
	}
	
	cout << registros.size() << endl;
	map<string, string>::iterator it;
	for(it = registros.begin(); it != registros.end(); it++)
		cout << it->second << " " << it->first << endl;
		
	return 0;
}
