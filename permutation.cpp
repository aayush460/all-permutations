#include<bits/stdc++.h>
using namespace std;

void per(string s,int a,int b)
{
	if(a==b)
	{
		cout<<s<<endl;
	}
	else
	{
		for(int  i=a;i<=b;i++)
		{
			swap(s[a],s[i]);
			per(s,a+1,b);
			swap(s[a],s[i]);
		}
	}
}

int main()
{
	string s;cin>>s;
	
	per(s,0,s.length()-1);
	}	
