#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j, n, m, temp;
	
	while (cin >> n) {
		int a[n];
		m = 0;
		
		for (i=0;i<n;i++)
			cin >> a[i];
			
		for (i=0;i<n-1;i++) {
			for (j=0;j<n-i-1;j++) {
				if (a[j] > a[j+1]) {
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
					
					m++;
				}
			}
		}
		
		cout << "Minimum exchange operations : " << m << endl;
	}

	return 0;
}
