#include<bits/stdc++.h>
using  namespace  std;
void   disp(vector<int> &v1)
{
	for(int i=0;i<v1.size();i++)
	   cout<<v1[i]<<" ";
	cout<<endl;
	return  ;
}
int  main()
{
	vector<int> v;
	int n,x;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
      {
	      scanf("%d",&x);
		  v.push_back(x);
	      disp(v);
	  }
   return  0;
}

