#include<bits/stdc++.h>
using namespace std;
int main(){
	int put[3], score=0, x=5;
	while(x-->0){
		cin >> put[0] >> put[1] >> put[2];
		sort(put, put+3);
		if ((put[0] + put[1]) > put[2])
			score++;
	}
	cout << score << endl;
	return 0;
}
