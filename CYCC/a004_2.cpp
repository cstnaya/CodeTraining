#include<iostream>
using namespace std;
int main(){
	int year;
	
	cin>> year;
	
	if (year % 4 == 0){
		
		if (year % 400 == 0)
			cout << "�|�~" ;
		else if (year % 100 == 0)
			cout << "���~" ;
		else 
			cout << "�|�~" ;
			 
	}
	
	else
		cout << "���~" ;
		
	cout << endl ;
	
	return 0;
}
