#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[1000];
	int len;
	
	while (cin.getline(str, 1000)) {
		
		char *token = strtok(str, " ");
		
		while (token != NULL) {
			len = strlen(token);
			
			for (int i=len-1;i>=0;i--)
				cout << token[i];
			
			token = strtok(NULL, " ");
			
			if (token != NULL)
				cout << " ";
		}
		
		cout << endl;
	}

	return 0;
}
