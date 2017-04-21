#include<bits/stdc++.h>
using namespace std;
int main(){
	int r, c;
	cin >> r >>c ;
	int mat[r][c];
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >>  mat[i][j] ;
		}
	}
	
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			cout << mat[j][i] ;
			if (j != r-1)	cout << " ";
		}
		cout << endl;
	}
	return 0;
}
