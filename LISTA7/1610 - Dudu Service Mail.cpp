// 1610 - Criador de Serviços. 08/06/2018
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > lista;
vector<int> visitado;
bool ciclo;

// Chama a DFS em um vértice especificado.
void dfs(int v)
{
	visitado[v] = 1;
	if(ciclo)
		return;
	for(int i = 0; i < lista[v].size(); i++)
	{
		if(visitado[lista[v][i]] == 1)
		{
			ciclo = true;
			return;
		}	
		else if(visitado[lista[v][i]] == 0)
			dfs(lista[v][i]);
	}
	visitado[v] = 2;
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		lista.assign(n, vector<int>());
		visitado.assign(n, 0);
		
		// Adiciona as arestas de um grafo direcionado.
		int a, b;
		for(int i = 0; i < m; i++)
		{
			cin >> a >> b;	
			lista[a-1].push_back(b-1);
		}
		
		// Para cada vértice do grafo, verifica se o mesmo ainda não foi visitado, caso não tenha sido visitado, chama a DFS nesse vértice..
		// Caso contrário, ocorre um ciclo no grafo pois o vértice já foi visitado, e o loop é encerrado.
		ciclo = false;
		for(int i = 0; i < n; i++)
		{
			if(!visitado[i])
				dfs(i);
			if(ciclo)
				break;	
		}
		
		/*
		// Impressão da lista de adjacências.
		for(int i = 0; i < n; i++){
			cout << "Vizinhos do vertice " << i+1 << ": ";
			for(int j = 0; j < lista[i].size(); j++){
				cout << lista[i][j] + 1 << " ";
			}
			cout << endl;
		}
		*/
		
		if(ciclo)
			cout << "SIM" << endl;
		else
			cout << "NAO" << endl;
		
		lista.clear();
		visitado.clear();
	}
	return 0;
}
