#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	int capacity, target_T, n, q, solove = 0;
	
	cin >> q;
	
	while (solove < q) {
		solove++;
		
		cin >> capacity >> target_T >> n;
	
		int jar[n][2], min_start, min_end;
		float half_c, volume, volume_temperature, temperature, gap, min = 10;
		
		half_c = capacity / 2.0;  //一半的容量 
		
		cin >> jar[0][0] >> jar[0][1];
		
		for (i=1;i<n;i++)
			cin >> jar[i][0] >> jar[i][1];
		
		for (i=0;i<n;i++) {
			volume_temperature = 0;  //體積 * 溫度預設為 0 
			volume = 0;  //體積預設為 0 
			
			for (j=i;j<n;j++) {
				volume_temperature += jar[j][0] * jar[j][1];  //體積 * 溫度 
				volume += jar[j][0];  //體積 
				temperature = volume_temperature / volume;  //當前溫度 
				gap = abs(temperature-target_T);  //當前溫度與目標溫度的距離 
				
				if (gap <= 5 && gap < min && volume >= half_c && volume <= capacity) {
					min = gap;  //更新最小差距 
					
					//更新最小容量始末位置 
					min_start = i;
					min_end = j;
				}
			}
		}
		
		if (min == 10)
			cout << "Not possible" << endl;
		else
			cout << min_start << " " << min_end << endl;
	}

	return 0;
}
