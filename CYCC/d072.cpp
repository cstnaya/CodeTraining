#include<iostream>
using namespace std;
int main(){
	
	int n, year, x=1 ;
	
	cin >> n; 
	
	while (n--){
		
		//cout << n << endl ;
		cin >> year ;
		
		if (year % 4 == 0){
			
			if (year % 400 == 0)
				cout << "case " << x << ": a leap year" ;
			else if (year % 100 == 0)
				cout << "case " << x << ": a normal year" ;
			else
				cout << "case " << x << ": a leap year" ;
				
		}
		
		else
			cout << "case " << x << ": a normal year" ;
		
		cout << endl ;
		
		x++;
		
	}
	
	return 0;
}
