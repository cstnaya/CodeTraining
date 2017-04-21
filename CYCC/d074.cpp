#include<iostream>
using namespace std;
int main(){
	
	int n, num ;
	
	while (cin >> n){
		
		int output=0 ;
		
		for(int  i=0 ; i<n ; i++ ){
	
			cin >> num ;	
		
			if ( num > output )
				output = num ;
		}
	
		cout << output << endl ;
	
	} 
		
		
	return 0;
}
