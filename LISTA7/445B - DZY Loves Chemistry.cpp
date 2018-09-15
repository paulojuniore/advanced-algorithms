// 445B - DZY Loves Chemistry. 21/06/2018
#include <iostream>
#include <vector>

using namespace std;

int main(){
	long n, m;
	cin >> n >> m;
	vector<long> conectados(n+1, 0);
	for(long i = 1; i <= n; i++)
		conectados[i] = i;
	
	long long saida = 1;
	while(m--){
		long a, b;
		cin >> a >> b;
		while(conectados[a] != a || b != conectados[b]){
			a = conectados[a];
			b = conectados[b];
		}
		if(a != b)
			saida *= 2;
		conectados[a] = conectados[b] = (a < b)? a : b;
	}
	cout << saida << endl;
	
	return 0;
}
