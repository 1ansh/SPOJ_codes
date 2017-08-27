#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		cin>>m>>n;
		bool flag;
		while(m<=n)
		{
			if(m==1)
			{
				m++;
				continue;
			}
			flag=0;
			for(i=2;i<=int(sqrt(m));i++)
			{
				if(m%i ==0)
				{
					flag=1;
					break;
				}
			}
			if(!flag)
			{
				cout<<m<<endl;
			}
			m++;
		}
	}
}
