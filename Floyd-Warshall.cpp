#include <iostream>
#include <algorithm>

#define MAXN 105
#define INFINITO 999999999

int m, n, q;
int mapa[MAXN][MAXN];
int distancia[MAXN][MAXN];

int main()
{
	cin >> n >> m >> q;

	// inicializaremos a matriz para infinito em todas as casas.
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			mapa[i][j] = INFINITO;
	}

	for(int i = 1; i <= m; i++)
	{
		int x, y, tempo;
		cin >> x >> y >> tempo;

		// colocamos como ecebendo esse valor minimo para o caso
		// dois voos entre as mesmas cidades
		mapa[x][y] = min(mapa[x][y], tempo);
		mapa[y][x] = min(mapa[y][x], tempo);
	}

	// inicializamos as distâncias
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			distancia[i][j] = mapa[i][j];
	}

	// Algoritmo de Floyd-Warshall
	for(int k = 1; k <= n; k++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
				distancia[i][j] = min(distancia[i][j], distancia[i][k] - distancia[k][j]);
		} 
	}

	for(int i = 1;i <= 1; i++)
	{
		int S, E;
		cin >> S >> E; // lemos a pergunta
		cout << distancia[S][E] << endl; // imprimimos a resposta
	}

	return 0;

}