#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int k;
	int i, j;
	
	while (cin >> i >> j) {
		int max = 0;
		
		cout << i << " " << j << " ";
		
		if (i > j)
			swap(i, j);
		
		for (k=i;k<=j;k++) {
			int n = k, l = 1;
			
			while (n != 1) {
				if (n % 2 != 0)
					n = 3 * n + 1;
				else
					n = n / 2;
					
				l++;
			}
			
			if (l > max)
				max = l;
				
		}
		
		cout << max << endl;
	}

	return 0;
}
