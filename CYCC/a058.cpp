#include<iostream>
using namespace std;
int main(){
	int n, mod_1=0 , mod_2=0 , mod_0=0 , num ;
	
	cin >> n;
	
	while (n--){
		
		cin >> num ;
		
		if (num % 3 == 0)
			mod_0++ ;
		else if (num % 3 == 1)
			mod_1++ ;
		else
			mod_2++ ;
		 
	}
	
	cout << mod_0 << " " << mod_1 << " " << mod_2 << endl ;
	
	/*
	
	int mod[3]={0};
	while(n--){
		cin >> num ;
		mod( num%3 ) ++ ;
	}
	
	*/

	return 0;
}
