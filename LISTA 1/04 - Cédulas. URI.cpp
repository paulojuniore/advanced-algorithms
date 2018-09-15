// 1018 - Cédulas.
#include <iostream>

using namespace std;

int main()
{
	int valor;
	cin >> valor;
	int aux = valor;
	
	int n_cem = valor / 100;
	valor -= n_cem * 100;
	int n_cinquenta = valor / 50;
	valor -= n_cinquenta * 50;
	int n_vinte = valor / 20;
	valor -= n_vinte * 20;
	int n_dez = valor / 10;
	valor -= n_dez * 10;
	int n_cinco = valor / 5;
	valor -= n_cinco * 5;
	int n_dois = valor / 2;
	valor -= n_dois * 2;
	int n_um = valor / 1;
	
	cout << aux << endl;
	cout << n_cem << " nota(s) de R$ 100,00" << endl;
	cout << n_cinquenta << " nota(s) de R$ 50,00" << endl;
	cout << n_vinte << " nota(s) de R$ 20,00" << endl;
	cout << n_dez << " nota(s) de R$ 10,00" << endl;
	cout << n_cinco << " nota(s) de R$ 5,00" << endl;
	cout << n_dois << " nota(s) de R$ 2,00" << endl;
	cout << n_um << " nota(s) de R$ 1,00" << endl;
	
	return 0;
}
