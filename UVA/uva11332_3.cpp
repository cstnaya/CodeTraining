#include<iostream>
using namespace std ;
int main() {
	#define int long long 	
	int n ;
	
	while(cin >> n) 
	{
		if (n == 0)	break;
		else 
		{
			int sum = 0 ;
	
			while ( n != 0 ){
				sum += (n % 10) ;
				n /= 10 ;
			}
	
			while ( sum >= 10 ){
				int tem = sum ;
				sum = 0 ;

				while ( tem != 0 ){			
					sum += (tem % 10) ;
					tem /= 10 ;
				}
			} 
			
			cout << sum << endl ;
		
		}
	}	
	return 0;
}
