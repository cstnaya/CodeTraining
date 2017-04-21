#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	while(cin >> a >> b){
		int num=0;
		for(int i=a; i<=b; i++)
			num+= ((i%2)==0) ;
		cout << num <<endl;
	}
	return 0;
}
