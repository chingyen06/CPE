#include <bits/stdc++.h>
using namespace std;

int n, times;
map<int, int> uv, visit, done; 

int dfs(int node)
{
	visit[node] = 1;  //已訪問此節點 
	done[node] = 1;  //此節點已完成 (若在其他節點中，則必比該節點少，亦算完成) 
	
	times++;
	
	if (visit[uv[node]] == 0)
		dfs(uv[node]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j, t, u, v;
	int max, max_index;
	
	cin >> t;
	
	for (i=0;i<t;i++) {
		cin >> n;
		
		uv.clear();
		done.clear();
		
		for (j=0;j<n;j++) {
			cin >> u >> v;
			uv[u] = v;
		}
		
		max = 0;
		max_index = 0;
		
		for (j=1;j<=n;j++) {
			if (done[j] == 0) {
				visit.clear();
				visit[j] = 1;
				
				times = 1;
				dfs(j);
				
				if (times > max) {
				//不需要判斷是不是小於 max_index，因為我是從小到大去找 
					max = times;
					max_index = j;
				}
			}
		}
		
		cout << "Case " << i + 1 << ": " << max_index << endl; 
	}

	return 0;
}
