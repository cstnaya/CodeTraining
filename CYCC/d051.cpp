#include<iostream>
#include<iomanip> // ������ 
using namespace std ;
int main(){
	
	double F ;
	
	while (cin >> F)
	
		cout << fixed << setprecision(3) << ( (F+40) / 1.8 - 40 ) << endl ;  
	
	// setprecision() ---> ������ ( �]�t��ƻP�p�Ƴ����A���]�t�p���I���� )				
	
	// fixed ---> �令�w���p���I����
	
	cout.unsetf( ios::fixed ) ;

	//������Ʊ��� 
	
	//�i�� setfill() �M setw() 

	return 0;
}
