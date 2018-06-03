// TROIA13 - Famílias de Tróia. SPOJ 29/05/2018
#include <iostream>
#include <vector>

using namespace std;

#define MAX 50050
int n, m;
int visited[MAX];
vector<int> lista[MAX];

void dfs(int x){
	// percorremos todos os vizinhos da lista de adjacências.
	for(int i = 0; i < (int) lista[x].size(); i++){
		int v = lista[x][i];
		// verificamos se v ainda não foi visitado, e marcamos como visitado.
		if(visited[v] == 0){
			visited[v] = visited[x];
			dfs(v);
		}
	}
}

int main(){
	cin >> n >> m;
	
	// inicialização de todos elementos do vetor de visitados com 0.
	for(int i = 1; i <= n; i++)
		visited[i] = 0;
	
	// adicionando as arestas incidentes a lista, grafo não direcionado.	
	for(int i = 1; i <= m; i++){
		int a, b;
		cin >> a >> b;
		lista[a].push_back(b);
		lista[b].push_back(a);
	}
	
	int numero_componentes = 0;
	for(int i = 1; i <= n; i++){
		// se i anda não foi visitado.
		if(visited[i] == 0){
			// inicio uma dfs a partir de i
			numero_componentes++;
			visited[i] = numero_componentes;
			dfs(i);
		}
	}
	
	cout << numero_componentes << endl;
	
	return 0; 
}
