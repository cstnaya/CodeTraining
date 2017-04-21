#include<bits/stdc++.h>
using namespace std ;
int main(){
	
	int n ;
	while(cin >> n){
		int flag=0;
		
		for(int i=2; i*i <=n ;i++){
			if (n%i == 0){
				cout << n <<" is not prime." << endl ;
				flag = 1;
				break;
			}	
		}
		
		if (flag == 0){
			int tmp=n, inv=0 ;
			
			while(tmp){
				(inv *= 10) += (tmp%10) ;
				tmp/=10;
			}
			//cout <<tmp <<"TEST"<<endl;
			
			int flag_2 = 0 ;
			
			for (int i=2; i*i <=inv ;i++){
				if (inv%i == 0){
					cout << n << " is prime." << endl ;
					flag_2=1;
					break;
				}
			}
			if (n==inv) cout << n << " is prime." << endl ;
			else if ((flag_2==0) && (n>10))	cout << n <<" is emirp." << endl ;
		}
		
	}
	
	return 0;
}
