#include <iostream>
#include <algorithm>

using namespace std;

#define MAXN 1010
#define INFINITO 999999999

int n, m; // numero de vértices e arestas
int cidade_noic; // cidade onde está o Noic
int cidade_succa; // cidade onde está o Succa
int distancia[MAXN]; // o array de distâncias à fonte
int processado[MAXN]; // o array que guarda se um vértice foi processado
int mapa[MAXN][MAXN]; // nossa matriz de adjacência

void Dijkstra(int S)
{
	for(int i = 1; i <= n; i++)
		distancia[i] = mapa[S][i];
	distancia[S] = 0;
	processado[S] = true;

	while(true) // rodar "infinitamente"
	{
		int davez = -1;
		int menor = INFINITO;

		// selecionamos o vértice mais próximo
		for(int i = 1; i <= n; i++)
		{
			if(!processado[i] && distancia[i] < menor)
			{
				davez = i;
				menor = distancia[i];
			}
		}

		if(davez == -1) // se não achou ninguém, é o fim do algoritmo
			break;

		processado[davez] = true; // marcamos para não voltar para este vértice.

		// agora, tentamos atualizar as distâncias
		for(int i = 1; i <= n; i++)
			distancia[i] = min(distancia[i], distancia[davez] + distancia[davez][i])
	}
}

int main()
{
	cin >> n >> m;
	cin >> cidade_succa >> cidade_noic;

	// inicializaremos a matriz para infinito em todas as casas
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			mapa[i][j] = INFINITO;
	}

	for(int i = 1; i <= m; i++)
	{
		int x, y, tempo;
		cin >> x >> y >> tempo;

		// colocamos como recebendo esse valor minimo para o caso
		// dois voos entre as mesmas cidades
		mapa[x][y] = min(mapa[x][y], tempo);
		mapa[y][x] = min(mapa[x][y], tempo);
	}

	Dijkstra(cidade_succa); // rodamos o Dijkstra
	cout << distancia[cidade_noic] << endl; // imprimimos a resposta

	return 0;
}

