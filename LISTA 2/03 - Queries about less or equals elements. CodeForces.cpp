// 600B. CodeForces.
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int tamArray1, tamArray2;
	cin >> tamArray1 >> tamArray2;

	int array1[tamArray1];
	pair<int, int> array2[tamArray2];
	for (int i = 0; i < tamArray1; i++)
		cin >> array1[i];
	for (int i = 0; i < tamArray2; i++){
		cin >> array2[i].first;
		array2[i].second = i;
	}

	sort(array1, array1+tamArray1);
	sort(array2, array2+tamArray2);
	
	int resposta[tamArray2];
	int cont = 0, aux = 0;
	for(int i = 0; i < tamArray2; i++){
		for(int j = aux; j < tamArray1; j++){
			if (array2[i].first >= array1[j])
				cont++;
			else{
				aux = j;
				break;
			}
			if (j == tamArray1-1)
			    aux = j + 1;
		}
		resposta[array2[i].second] = cont;
	}
	
	for(int i = 0; i < tamArray2-1; i++)
	    cout << resposta[i] << " ";
	cout << resposta[tamArray2-1] << endl;

	return 0;
}
