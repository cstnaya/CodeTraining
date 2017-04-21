#include<bits/stdc++.h>
using namespace std;
int main(){
	int x, y;
	
	cin >> x;
	int num=x;
	int arr[x] ;
	while ( x-- ){
		cin >> arr[x] ;
	}	

	cin >> y;
	int num_2=y;
	int arr_2[y];
	while ( y-- ){
		cin >> arr_2[y] ;
	}
	
	for(int i=1; i<=num; i++)	cout << i << " " ;
	cout << endl ;
	
	for(int i=1; i<=num_2; i++)	cout << i << " " ;
	cout << endl ;
	
	return 0;
}
