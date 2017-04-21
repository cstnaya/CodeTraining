#include<iostream>
using namespace std;
int main(){
	int H ,M;
	
	cin >> H >> M ;
	
	if  ( ( H*60 + M ) >= 7*60+30 && ( H*60 + M ) < 17*60 )
		cout<< "At School" ;
	else
		cout << "Off School" ;
	
	cout << endl;
	
	return 0;
}
