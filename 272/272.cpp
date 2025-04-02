#include <iostream>
using namespace std;

int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int check = 1;
	char text;
	
	while (cin.get(text)) {
		if (text == '"') {
			if (check == 1)
				cout << "``";
			else
				cout << "''";
			
			check = (check + 1) % 2;
		}
		else
			cout << text;
	}

	return 0;
}
