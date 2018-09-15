// 2068 - Setting up a Date. 30/07/2018
#include <bits/stdc++.h>
#define INF 0x3F3F3F3F

using namespace std;

const int N = 101;

int n, m;
int graph[N][N];

void floyd_warshall ()
{
 	for (int k = 0; k < n; ++k)
 		for (int i = 0; i < n; ++i)
 			for (int j = 0; j < n; ++j)
 				graph[i][j] = min(graph[i][j], max(graph[i][k],graph[k][j]));
}

int main(){
	for(int k = 1; ; k++)
	{
		cin >> n >> m;
		if(n + m == 0) 
			break;
			
		int a, b, c; 
		memset(graph, INF, sizeof graph);
		for(int i = 0; i  < n; ++i)
			graph[i][i] = 0;
		for(int i = 0; i < m; ++i)
		{
			cin >> a >> b >> c;
			a--, b--;
			graph[a][b] = c;
			graph[b][a] = c;
		}
		int querys;
		cin >> querys;
		floyd_warshall();
		for(int i = 1; i <= querys; ++i)
		{
			cin >> a >> b;
			if(a==b) 
				cout << 0 << endl;
			else
				cout << graph[a-1][b-1] << endl;
		}
	}
	return 0;
}
