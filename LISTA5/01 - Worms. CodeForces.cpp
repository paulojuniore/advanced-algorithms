// 474B - Worms. 12/05/2018
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int pilhas;
	cin >> pilhas;
	int acumulador[pilhas];
	int n_biscoitos;
	for(int i = 0; i < pilhas; i++){
		cin >> n_biscoitos;
		if(i == 0)
			acumulador[0] = n_biscoitos;
		else
			acumulador[i] = acumulador[i-1] + n_biscoitos;
	}
	
	int consultas, id_biscoito;
	cin >> consultas;
	for(int i = 0; i < consultas; i++){
		cin >> id_biscoito;
		
		int ans = lower_bound(acumulador, acumulador + pilhas, id_biscoito) - acumulador;
		cout << ans + 1 << endl;
	}
		
	return 0;
}
