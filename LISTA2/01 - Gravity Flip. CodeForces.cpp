// Problema 405A. CodeForces 18/04/2018

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, num;
	cin >> n;
	int vetor[n];
	for (int i = 0; i < n; i++)
	    cin >> vetor[i];
	
	int j = 1;
	while (j < n)
	{
	    if (vetor[j] < vetor[j-1]){
	       int aux = vetor[j];
	       vetor[j] = vetor[j-1];
	       vetor[j-1] = aux;
	       j = 1;
	    }
	    else
	        j++;
	}
	
	for (int i = 0; i < n-1; i++)
	    cout << vetor[i] << " ";
	cout << vetor[n-1] << endl;
	
	return 0;
}
