#include<bits/stdc++.h>
using namespace std;
int main(){
	#define int long long
	int n;
	while(cin >> n){
		int arr[n];
		
		for (int i=0; i<n; i++){
			cin >> arr[i];
			
			int ans[100]={0}, k=-1, j=0;
			if (arr[i]==1)	cout << 1 << endl;
			while(arr[i] != 1){
				//cout << "*********" << endl;
				for(j=9; j>=2; j--){
					if (arr[i]%j == 0){
						ans[++k]=j;
						arr[i]/=j;
						break;
					} 
				}
				if (j==1){
					cout << -1 << endl;
					break;
				}
			}
			
			if (j!=1 && j!=0){
				for (int i=k; i>=0; i--)
					cout << ans[i];
				cout << endl;
			}
		}
	}
	return 0;
}
