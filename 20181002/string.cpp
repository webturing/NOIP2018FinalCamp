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
//	cin>>str; //格式化读取不包含空格的字符串
getline(cin,str);//行读取 
	cout<<str; 
	return 0;
 } 
