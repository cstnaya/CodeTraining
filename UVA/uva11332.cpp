#include<bits/stdc++.h>
using namespace std;
int SUM(int num){
	int sum=0;

	while(num){
		sum += (num%10);
		num/=10;
			//cout << num <<endl ;
	}
	return (sum < 10) ? sum : SUM(sum) ;
	
}
int main(){
	#define int long long
	int n;
	
	while(cin >> n &&  n!=0){
		cout << SUM(n) << endl;
	}
	
	return 0;
}

