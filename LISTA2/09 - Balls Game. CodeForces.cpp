// 430B- Balls Game
// Paulo Júnior
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k, x;
	cin >> n >> k >> x;
	
	vector<int> balls(n, 0);
	vector<pair<int,int> > locations;
	
	int inicio = -1, fim = -1;
	for(int i = 0; i < n; i++)
	{
		cin >> balls[i];
		if(balls[i] == x)
		{
			if(inicio < 0)
				inicio = i;
			else
				fim = i;
		}
		else
		{
			if(inicio > 0 && fim > inicio)
				locations.push_back(pair<int, int>(inicio, fim));
			inicio = -1;
			fim = -1;
		}
	}
	
	int destruidas = 0;
	for(int i = 0; i < locations.size(); i++)
	{
		int esquerda = locations[i].first;
		int direita = locations[i].second;
		
		if(esquerda > 0 && direita < n - 1)
		{
			bool acao;
			do
			{
				acao = 0;
				int col = balls[esquerda - 1];
				if(balls[direita + 1] == col && ((esquerda > 1 && balls[esquerda - 2] == col) || (direita < n - 1 && balls[direita + 2] == col)))
				{
					acao = 1;
					while(esquerda > 0 && balls[esquerda - 1] == col)
						--esquerda;
					while(direita < n - 1 && balls[direita + 1] == col)
						++direita;	
				}	
			}while(acao);
		}
		
		if(direita - esquerda + 1 > destruidas)
			destruidas = direita - esquerda  + 1;
	}
	
	cout << destruidas << endl;
	
	return 0;
}
