#include<iostream>
#include<iomanip> // 计 
using namespace std ;
int main(){
	
	double F ;
	
	while (cin >> F)
	
		cout << fixed << setprecision(3) << ( (F+40) / 1.8 - 40 ) << endl ;  
	
	// setprecision() ---> 计 ( 俱计籔计场だぃ计翴セō )				
	
	// fixed ---> эΘ皐癸计翴计
	
	cout.unsetf( ios::fixed ) ;

	//计北 
	
	//ノ setfill() ㎝ setw() 

	return 0;
}
