// 276B - CodeForces
#include <iostream>
#include <map>

using namespace std;

int main()
{
	string word;
	map<char, int> dic;
	
	cin >> word;
	
	for(int i = 0; i < word.length(); i++)
	{
		if (dic.count(word[i]) > 0)
			++dic[word[i]];
		else
			dic.insert(pair<char, int>(word[i], 1));
	}
	
	int cont = 0;
	map<char, int>::iterator it;
	for(it = dic.begin(); it != dic.end(); it++)
	{
		if (it->second % 2 != 0)
			cont++;
	}
	
	if (cont == 1 || cont == 0)
		cout << "First" << endl;
	else if (cont % 2 == 0)
		cout << "Second" << endl;
	else
		cout << "First" << endl;
	
	return 0;
}
