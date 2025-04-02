#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, a, b, t;
	
	while (cin >> a >> b) {
		if (a == 0 && b == 0)
			break;
			
		t = 0;
			
		for (i=sqrt(a);i<=sqrt(b);i++)
			if (i * i >= a)
				t++;
		
		cout << t << endl;
	} 

	return 0;
}
