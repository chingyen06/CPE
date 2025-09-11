#include <bits/stdc++.h>
using namespace std;

int table[1000001]={}; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long int i, j, n, a, b;
	
	for (i=0;i<=1000000;i++)  //假設全部都是質數
		table[i] = 1;
	table[0] = 0;  //0 不是質數 
	table[1] = 0;  //1 不是質數 
	
	//建立質數表 
	for (i=2;i<=1000000;i++) {
		if (table[i] == 1) {  //如果 i 是質數 
			for (j=i*i;j<=1000000;j=j+i)  //把 i 的倍數都設為不是質數
				table[j] = 0; 
		}
	}
	
	while (cin >> n && n != 0) {
		for (i=2;i<n;i++) {
			if (table[i] == 1 && table[n-i] == 1) {  // i (a) 與 n - i (b) 為質數 
				a = i;
				b = n - i;
				
				break;  //最先找到的就是 a 跟 b 間距最大的 
			} 
		} 
		
		cout << n << " = " << a << " + " << b << endl;
	}

	return 0;
}
