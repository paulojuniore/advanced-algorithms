// 518B - Tanya and Podcast.
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long yay = 0, whoops = 0;
	
	map<char, long> contador;
	map<char, long> contador2;
	string str1;
	string str2;
	
	getline(cin, str1);
	getline(cin, str2);
	
	// percorre a string1 e verifica se o caractere é um elemento do contador1
	// se for incrementa em 1, senão adiciona ao mapa
	for(int i = 0; i < str1.length(); i++)
	{
		if (contador.count(str1[i]) > 0)
			++contador[str1[i]];
		else
			contador.insert(pair<char, int>(str1[i], 1));
	}
	
	// percorre a string2 e verifica se o caractere é um elemento do contador1
	// se for incrementa em 1, senão adiciona ao mapa
	for (int j = 0; j < str2.length(); j++)
	{
		char ch = str2[j];
		if (contador.count(ch) && contador[ch] > 0)
		{
			++yay;
			--contador[ch];
			continue;
		}
		if (contador2.count(ch) > 0)
			++contador2[ch];
		else
			contador2.insert(pair<char, int>(ch, 1));
	}
	
	// TESTES
	/*map<char, long>:: iterator it;
	for (it = contador.begin(); it != contador.end(); it++)
	{
		cout << it->first << " - " << it->second << endl;
	}
	
	for (it = contador2.begin(); it != contador2.end(); it++)
	{
		cout << it->first << " - " << it->second << endl;
	}*/
	
	// percorre o alfabeto(maiúsculas e minúsculas) e verifica se as letras pertencem aos dicionários, se sim incrementa os contadores
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		char cap = ch + 'A' - 'a';
		
		long cont1 = 0;
		long cont2 = 0;
		
		if (contador.count(ch) > 0)
			cont1 += contador[ch];
		if (contador.count(cap) > 0)
			cont1 += contador[cap];
		
		if (contador2.count(ch) > 0)
			cont2 += contador2[ch];
		if (contador2.count(cap) > 0)
			cont2 += contador2[cap];
			
		// se o contador1 for menor que o contador2, então quer dizer que 
		if (cont1 <= cont2)
			whoops += cont1;
		else
			whoops += cont2; 
	}
	
	cout << yay << " " << whoops << endl;

	return 0;
}
