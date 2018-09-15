// 400A - Inna and Choose Options. 17/07/2018
#include <bits/stdc++.h>

using namespace std;

int main(){

    int N = 12;
    int divisores[] = {1, 2, 3, 4, 6, 12};
    int L = 6;

    int t = 0;
	cin >> t;
	
	cin.ignore();
    while(t--){

        string cards = ""; 
		getline(cin, cards);
        vector<int> divs;
        
        for(int k = 0; k < L; k++){

            int nColunas = divisores[k];
            bool estado[nColunas]; 
            
            for(int u = 0; u < nColunas; u++){
				estado[u] = 1;
			}
            for(int m = 0; m < N; m++){
				if(cards[m] == 'O')
					estado[m % nColunas] = 0;
			}
            for(int u = 0; u < nColunas; u++){
				if(estado[u] == 1){
					divs.push_back(nColunas); 
					break;
				}
			}
        }

        cout << divs.size() << " ";
        for(int k = divs.size() - 1; k >= 0; k--)
        	cout << N / divs[k] << "x" << divs[k] << " ";
        cout << endl;
    }

    return 0;
}
