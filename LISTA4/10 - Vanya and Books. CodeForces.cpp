// 552B - Vanya and Books. 08/05/2018
#include <iostream>

using namespace std;

int main()
{
	int n_pags;
	cin >> n_pags;
	
	long long int digitos = 0;
	int cont = 9;
	while(n_pags > 0)
	{
		digitos += n_pags;
		n_pags -= cont;
		cont *= 10;
	}
	
	cout << digitos << endl;
	
	return 0;
}
