#include<iostream>
using namespace std;
int main(){
	
	#define int long long 
	
	int a ;
	
	cin >> a ;
	
	cout << (a > 5) * 590 + (a > 11) * (790 - 590) + (a > 17) * (890-790) + (a > 59) * (399-890) << endl ;
	
	return 0;
}
