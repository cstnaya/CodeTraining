#include<iostream>
using namespace std ;
int main (){
	int x, y, z ;
	
	cin >> x >> y >> z ;
	
	if (z > y)
		y = z ;
	if (y > x)
		x = y ;
	
	cout << x ;
	
	return 0;
}
