// 1861 - O Hall dos Assassinados. 24/04/2018
#include <iostream>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	string assassino, assassinado;
	map<string, int> hall;
	set<string> assassinados;
	while(cin >> assassino >> assassinado)
	{
	    assassinados.insert(assassinado);
		if(hall.count(assassino) && assassinados.count(assassino) == 0)
			hall[assassino]++;
		else if(assassinados.count(assassino) == 0)
			hall[assassino] = 1;
		if(hall.count(assassinado))
			hall.erase(assassinado);
	}

	cout << "HALL OF MURDERERS" << endl;
	map<string, int>::iterator it;
	for(it = hall.begin(); it != hall.end(); it++)
		cout << it->first << " " << it->second << endl;

	return 0;
}
