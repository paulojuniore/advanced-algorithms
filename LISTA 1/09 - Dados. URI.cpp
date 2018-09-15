// 1342 - Dados.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n_players, n_casas, trap1, trap2, trap3;
	int n_jogadas, dado1, dado2;
	
	while(true)
	{
		// número de jogadores e número de casas
		cin >> n_players >> n_casas;
		if (n_players == 0 && n_casas == 0)
			break;
		
		// vector's
		vector<int> player(n_players, 0);
		vector<int> block(n_players, 0);
		
		// Armadilhas
		cin >> trap1 >> trap2 >> trap3;
		
		// Número de rolagem dos dados
		cin >> n_jogadas;
		
		int i = 0, j = 0;
		while(i < n_jogadas)
		{
			if (block[j] == 1)
				block[j] = 0;
			else{
				cin >> dado1 >> dado2;
				player[j] += dado1 + dado2;
				i += 1;
				
				if (player[j] == trap1 || player[j] == trap2 || player[j] == trap3)
					block[j] = 1;
					
				if (player[j] > n_casas)
				{
					cout << j+1 << endl;
					break;
				}
			}
						
			j++;
			if (j == player.size())
				j = 0;
		}
	}
}

