#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b ;
	
	while (cin >>a >>b){
		int year=0; b++;
		while(b-->a){
			if (b%400 == 0) year++;
			else if (b%100 == 0) ;
			else if (b%4 == 0) year++; 
		}
		cout << year << endl;
	}
	
	return 0;
}
