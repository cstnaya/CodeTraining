#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	
	// �Ya,b ���@�_�Ƥ@���� �@�����ƭӶ� ���ƭӼƬ�(b-a)/2
	// �Ya,b ���G�_��  �����_�ƭӶ� �_�Ƥ񰸼Ʀh�@�� ���ƭӼƬ� (b-a)/2
	// �Ya,b ���G����  �����_�ƭӶ� ���Ƥ�_�Ʀh�@�� ���ƭӼƬ� (b-a)/2 + 1 

	while (cin >> a >> b)
	 (a%2==0) && (b%2==0) ? cout << (b-a)/2 + 1 : cout << (b-a)/2 << endl;  

	return 0;
}
