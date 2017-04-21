#include<bits/stdc++.h>
using namespace std;
int main(){
	#define int long long
	int n;
	while (cin >> n && n!=0){
		int tmp=n,sum;
		do {
			sum=0;
			while(tmp){
				sum += tmp%10; 
				tmp/=10;
			}
			tmp=sum;
		}	while(sum>9) ;
		cout << sum << endl ;
	}
	return 0;
}
