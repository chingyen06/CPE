#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	int n, m;
	
	cin >> n >> m;
	
	int map[n+2][m+2]={};
	int x, y, d, nx, ny, lost;
	char dir;
	string c;
	char moved[4]={'N','E','S','W'};
	int move[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	
	while (cin >> x >> y >> dir >> c) {
		
		lost = 0;
		
		for (i=0;i<4;i++)
			if (dir == moved[i])
				d = i;
				
		for (i=0;i<c.size();i++) {
			if (c[i] == 'F') {
				nx = x + move[d][0];
				ny = y + move[d][1];
				
				if ((nx < 0 || nx > n || ny < 0 || ny > m) && map[x][y] != 1) {
					cout << x << " " << y << " " << moved[d] << " LOST" << endl;
					map[x][y] = 1;
					lost = 1;
					break;
				}
				else if (nx >= 0 && nx <= n && ny >= 0 && ny <= m) {
					x = nx;
					y = ny;
				}
			}
			else if (c[i] == 'R')
				d = (d + 1) % 4;
			else {
				d--;
				if (d == -1)
					d = 3;
			}
		}
		
		if (lost == 0)
			cout << x << " " << y << " " << moved[d] << endl;
	}

	return 0;
}
