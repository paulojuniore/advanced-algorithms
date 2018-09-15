#include <iostream>
#include <map>
#include <queue>

using namespace std;

inline long long op(long long num, int id)
{
	switch(id)
	{
		case 1:
			return (num << 1);
		case 2:
			return num * 3;
		case 3:
			return (num >> 1);
		case 4:
			return (num / 3);
		case 5:
			return num + 7;
		case 6:
			return num - 7;
	}	
	return 0;
}

void bfs(int s, int t)
{
	map<int, long long> dist;
	
	priority_queue<pair<long long, int> , vector<pair<long long, int> >, greater<pair<long long, int> > > q;
	q.push(make_pair(0, s));
	
	while(!q.empty())
	{
		pair<long long, long long> u = q.top();
		q.pop();
		if(u.second == t)
		{
			cout << u.first << endl;
			return;	
		}	
		long long v = u.second;
		long long mpv = dist[v];
		for(int i = 1; i <= 6; i++)
		{
			long long vertice = op(v, i);
			long long ret = dist[vertice];
			if((ret == 0) || (ret > mpv + 1))
			{
				ret = mpv + 1;
				q.push(make_pair(ret, vertice));
			}
		}
	}
}

int main()
{
	long long n, m;
	cin >> n >> m;
	bfs(n, m);
	
	return 0;
}
