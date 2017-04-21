#include<bits/stdc++.h>
using namespace std;
int pow(int a, int n){
	if (n<=1) return a;
	return a * pow(a,n-1) ; 
}

int main(){
	#define int long long
	// 精度問題 
	int a, n;
	while (cin >>a >> n)
		cout << pow (a, n) << endl ;
	return 0;
}
