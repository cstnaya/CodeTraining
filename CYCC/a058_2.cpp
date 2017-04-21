#include<iostream>
using namespace std; 
int main(){
	
	int n, score=0 ;
	
	cin >> n ;
	
	if (n >= 40){
		score += 100 ;	n -= n ;
		//cout << n << endl ;
	}
		
	if (n >= 10){
		score += 60 ;	n -= 10 ;
	}
	else{
		score += n*6 ;	n-=n ;
	}
	
	if (n >= 10){
		score += 20 ; 	n-=10 ;
	}
	else{
		score += n*2 ;	 n-=n;
	}
	
	score += n ; n-=n;
		
	cout << score << endl ;
	
	return 0;
}
