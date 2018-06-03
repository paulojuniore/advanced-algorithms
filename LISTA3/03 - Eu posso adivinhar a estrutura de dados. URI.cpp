// 1340 - Eu posso adivinhar a estrutura de dados. 25/04/2018
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int op, num;
		
		stack<int> pilha;
		priority_queue<int> fila_prio;
		queue<int> fila;
		
		bool ehPilha = true, ehFila = true, ehFila_prio = true;
		for(int i = 0; i < n; i++)
		{
			cin >> op >> num;
			if(op == 1)
			{
				pilha.push(num);			
				fila_prio.push(num);
				fila.push(num);
			}
			else
			{
				if(pilha.top() != num)
					ehPilha = false;
				else
					pilha.pop();
				
				if(fila.front() != num)
					ehFila = false;
				else
					fila.pop();
				
				if(fila_prio.top() != num)
					ehFila_prio = false;
				else
					fila_prio.pop();
			}
		}
		
		if(!ehFila && !ehPilha && !ehFila_prio)
			cout << "impossible" << endl;
		else if(ehPilha && ehFila_prio || ehFila_prio && ehFila || ehPilha && ehFila)
			cout << "not sure" << endl;
		else if(ehPilha)
			cout << "stack" << endl;
		else if(ehFila)
			cout << "queue" << endl;
		else if(ehFila_prio)
			cout << "priority queue" << endl;
	}
	
	return 0;
}
