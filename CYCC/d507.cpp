#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int num[3], tmp ;
	
	cin >> num[0] >> num[1] >> num[2] ;
	
	for (int i=0 ; i<2 ; i++){
		
		for (int j=i+1 ; j<3 ; j++){
		
			if ( num[i] > num[j] ){
				tmp = num[i] ;
				num[i] = num [j] ;
				num [j] = tmp ;
			}			
		}
	}
	
	if ( num[0]*num[0] + num[1]*num[1] > num[2]*num[2] )
		cout << "acute triangle" << endl ;
	
	else if ( num[0]*num[0] + num[1]*num[1] == num[2]*num[2] )
		cout << "right triangle" << endl ;
	
	else
		cout << "obtuse triangle" << endl ;
		
	return 0;
}
