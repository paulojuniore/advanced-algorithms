// 1451 - Teclado Quebrado. 25/04/2018
#include <iostream>
#include <list>

using namespace std;

int main() 
{
	int i;
	string frase;
	list<char> restos;
	list<char>::iterator it;
	
	while(cin >> frase)
	{
		restos.clear();
		it = restos.begin();
		
		for(i = 0; i < frase.length(); i++)
		{
			if(frase[i] == ']')
				it = restos.end();
			else if(frase[i] == '[')
				it = restos.begin();	
				
			if(frase[i] != '[' && frase[i] != ']')
				restos.insert(it, frase[i]);
		}
		
		for(it = restos.begin(); it != restos.end(); it++)
			cout << *it;
		cout << endl;
	}    
	    
    return 0;
}
