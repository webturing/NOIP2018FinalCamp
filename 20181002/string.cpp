#include<bits/stdc++.h>
using namespace std;
int main()
{
 
	string str;
	getline(cin,str);
	int a,b;
	istringstream iss(str);//"1123 123"
	iss>>a>>b;
	cout<<a<<" "<<b<<endl; 
//	cin>>str; //��ʽ����ȡ�������ո���ַ���
getline(cin,str);//�ж�ȡ 
	cout<<str; 
	return 0;
 } 
