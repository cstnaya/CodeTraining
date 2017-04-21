#include<bits/stdc++.h>
using namespace std;
int prime(int n){
	for (int i=2; i*i<=n; i++){
		if (n%i == 0)	return 0;
	}
	return 1;
}
int main(){
	#define int long long
	int sum=0;
	for (int i=2; i<=2000000; i++){
		if ( prime(i) ) sum+=i;	
	}

/*
	int SUM=2;
	for (int i=3; i<=2000000; i+=2){
		if ( prime(i) ) SUM+=i;	
	}
*/
	cout << sum << endl;
	
} 
