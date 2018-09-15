// 1069 - Diamantes e Areia. 11/02/2018
#include <iostream>

using namespace std;

int main() {
  int n;
  string seq;
  cin >> n;
  for(int i=0; i < n; i++){
    cin >> seq;
    int direita = 0, esquerda = 0;
    for(int j=0; j < seq.length(); j++){
      if(seq[j] == '<')
        esquerda++;
      else if(seq[j] == '>')
        if(esquerda > 0){
          direita++;
          esquerda--;
        }
    }
    cout << direita << endl;  
  }
  return 0;
}
