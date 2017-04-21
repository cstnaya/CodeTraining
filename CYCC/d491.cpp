#include<bits/stdc++.h>
using namespace std;
int main(){
	#define int long long
	int a, b;
	while (cin >>a >>b){
		int sum=0; 
		if (a > b) swap(a,b);
		a--;
		while ((a++) && (a<=b)){
			if (a%2 == 0) sum+=a;
		}
		cout << sum << endl ;
	}
	return 0;
}
