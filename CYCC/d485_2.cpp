#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	
	// 璝a,b 计案计 Τ案计兜 案计计(b-a)/2
	// 璝a,b 计  ゲΤ计兜 计ゑ案计兜 案计计 (b-a)/2
	// 璝a,b 案计  ゲΤ计兜 案计ゑ计 案计计 (b-a)/2 + 1 

	while (cin >> a >> b)
	 (a%2==0) && (b%2==0) ? cout << (b-a)/2 + 1 : cout << (b-a)/2 << endl;  

	return 0;
}
