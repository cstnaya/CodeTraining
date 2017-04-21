#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin >> n){	
		int num = n;
		int arr[n];
		while(n-->0)
			cin >> arr[n];
		sort(arr, arr+num);
		for(int i=0; i<num; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
