// 1068 - Balanço de Parênteses. 24/04/2018
#include <iostream>

using namespace std;

int main()
{
	string seq;
	while(cin >> seq)
	{
		int abre = 0, fecha = 0;
		for(int i = 0; i < seq.length(); i++)
		{
			if(seq[i] == '(')
				abre++;
			else if(seq[i] == ')')
			{
				fecha++;
				if(abre > 0)
				{
					abre--;
					fecha--;
				}
			}
		}
		if(abre == 0 && fecha == 0)
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;
	}
	return 0;
}
