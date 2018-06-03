// 2562 - Analógimon Types. 22/05/2018
#include <iostream>
#include <vector>

using namespace std;

bool visited[1001];
int quant;

void dfs(int v, vector<vector<int> > &matriz) {
	quant++;
	visited[v-1] = true;
	for (int vizinho : matriz[v-1])
	{
		if (!visited[vizinho-1])
			dfs(vizinho, matriz);
	}
}

int main()
{
	int n, m, a, b, e;
	while(cin >> n >> m)
	{
		vector<vector<int> > matriz(n);

		// Zerando o vetor de visitados e a quantidade de analógimons semelhantes.
		for (int i = 0; i < n; i++)
			visited[i]= false;
		quant = 0;

		for(int i = 0; i < m; i++)
		{
			cin >> a >> b;
			matriz[a-1].push_back(b);
			matriz[b-1].push_back(a);
		}

		cin >> e;
		dfs(e, matriz);
		cout << quant << endl;
	}

	return 0;
}
