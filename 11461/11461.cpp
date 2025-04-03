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
			
		t = sqrt(b) - ceil(sqrt(a)) + 1;
		
		cout << t << endl;
	} 

	return 0;
}
