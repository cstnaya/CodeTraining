#include<bits/stdc++.h>
using namespace std;
int main(){
	#define int long long
	int a, b, sum=0;
	while (cin >>a >>b){
		a--;
		while ((a++) && (a<=b)){
			if (a%2 == 0) sum+=a;
		}
		cout << sum << endl ;
	}
	return 0;
}
