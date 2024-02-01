#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> ans;
	long long Sn1=(n*(n+1))/2,S1=0;
	long long Sn2=(n*(n+1)*(2*n+1))/6,S2=0;
	for(int i=0;i<n;i++)
	{
		S1+=(long long)arr[i];
		S2+=(long long)arr[i]*(long long)arr[i];
	}
	long long x,y;
	long long a = Sn1-S1;
	long long b= (Sn2-S2)/a;
	//x-y=Sn1-S1 = a
	//x+y=Sn2-S2/(x-y)=b
	//2x=a+b -> x=a+b/2
	x=(a+b)/2;
	y=(x-a);
	ans=make_pair((int)x,(int)y);
	return ans;
}

