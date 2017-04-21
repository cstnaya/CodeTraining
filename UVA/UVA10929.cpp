#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	while(cin >> n && !( n=="0" )){
		int num=0;
		for(int i=0; i<n.size(); i++){
			if (i%2 == 0)
				num += n[i]-'0';
			else
				num -= n[i]-'0';
		}
		if ( abs(num)%11 != 0)
			cout << n << " is not a multiple of 11." << endl;
		else
			cout << n << " is a multiple of 11." << endl;
	}
	return 0;
}
