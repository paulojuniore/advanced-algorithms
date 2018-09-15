// 489B - BerSU Ball. CodeForces. 03/06/2018
#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, m, nivelDanca;
	priority_queue<int> meninos, meninas;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> nivelDanca;
		meninos.push(nivelDanca);
	}
	
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> nivelDanca;
		meninas.push(nivelDanca);
	}
	
	int pares = 0;
	while(!meninos.empty() && !meninas.empty()){
		int nivelMenina = meninas.top();
		int nivelMenino = meninos.top();
		
		if(nivelMenino <= nivelMenina+1 && nivelMenino >= nivelMenina-1){
			meninas.pop();
			meninos.pop();
			pares++;
		}
		else{
			if(nivelMenino > nivelMenina)
				meninos.pop();
			else
				meninas.pop();
		}
	}
	cout << pares << endl;
	
	return 0;
}
