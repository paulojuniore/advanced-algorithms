// 445A - DZY Loves ChessBoard. 19/05/2018
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n = 0, m = 0;
	cin >> n >> m;
	
	vector<string> tabuleiro(n);
	
	cin.ignore();
	for(int linha = 0; linha < n; linha++)
		getline(cin, tabuleiro[linha]);
		
	for(int linha = 0; linha < n; linha++){
		for(int coluna = 0; coluna < m; coluna++){
			if(tabuleiro[linha][coluna] == '.')
			{
				if((linha + coluna) % 2)
					tabuleiro[linha][coluna] = 'W';
				else
					tabuleiro[linha][coluna] = 'B';
			}
			cout << tabuleiro[linha][coluna];
		}
		cout << endl;
	}
	
	return 0;
}
