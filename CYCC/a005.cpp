#include<iostream>
using namespace std;
int main(){
	int n, num[5]={0}, r ;
	cin >> n ;
	
	while (n--){
	
		for (int i=0; i<4; i++) 
			cin >> num[i] ;
	
		if ((num[1] - num[0]) == (num[2] - num[1]))
			num[4] = num[3] + (num[1] - num[0]) ; 		// (num[1] - num[0]) = a
			// num[4] = 2 * num[3] - num[2] ;
		
		else
			num[4] = num[3] * (num[1] / num[0]) ;
			// num[4] = num[3] * num[3] / num[2] ; 
		
		for (int i=0; i<5 ; i++)
			cout << num[i] << " " ;
		
		cout << endl ;
	
	}
	
	return 0;
}
