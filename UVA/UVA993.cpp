#include<bits/stdc++.h>
using namespace std;
string output;
int fac(int n){
	//cout << n << endl;
	if (n==1) return 0;
	int i=0;
	for(i=9; i>=2; i--){
		if (n%i==0){
			output+=(char)('0'+i); 
			 return fac(n/i);
		}
	}
	return (-1);
}
int main(){
	#define int long long 
	int n;
	while(cin >> n){
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
			int ans=fac(arr[i]);
			if (ans) cout << ans;
			else if (arr[i]==1) cout << 1;
			else {
				reverse(output.begin(),output.end());
				cout << output;
			}
			cout << endl;
			output.clear();
		}
		
	}
	return 0;
}
