#include<iostream>
using namespace std ;
int main(){
	
	#define int long long
	
	int n ;
	
	cin >> n ;
	
	cout << n + (n > 50) *(-1) << endl ;
	
	return 0;
	
}
