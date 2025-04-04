#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, n;
	string s;
	char word[5000];
	set <string> set;
	
	while (getline(cin, s)) {
	    memset(word, ' ', sizeof(word));
		n = 0;
		
		for (i=0;i<s.size();i++) {
			if (isalpha(s[i])) {  //是英文字母 
				word[n] = tolower(s[i]);  //轉小寫字母 
				n++;
			}
			else {  //不是英文字母
			    word[n] = '\0';
				if (n > 0)  //有單詞 
					set.insert(word);  //加入 set 中 
					
				n = 0;
			}
		}
		if (n > 0) {  //結尾可能還有單詞沒加入 set 
		    word[n] = '\0';
			set.insert(word);
		}
	}
	
	for (string key: set)
		cout << key << endl; 

	return 0;
}
