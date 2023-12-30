#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

pair<int,string>bckWard(string s)
{
	int n = s.length();
	char start = s[n-1];
	int cnt = 1;
	string res; res.push_back(s[n-1]);
	pair<int,string>ans;
	ans.first = cnt ; ans.second = res;
	for(int i=n-2;i>=0;i--)
	{
		// cout<<start<<" "<<char(start+1)<<s[i]<<"\n";
		// cout<<(char(start+1) == s[i])<<"\n";
		string t1; t1.push_back(tolower(char(start+1)));
		string t2; t2.push_back(tolower(s[i]));
		if(t1==t2)
		{
			cnt++;
			res.push_back(s[i]);
		}
		else
		{
			cnt=1;
			res.erase();
			res.push_back(s[i]);
		}
		start = s[i];
		if(ans.first <cnt) 
			{
				ans.first = cnt;
				ans.second = res;
			}
	}
	return ans;
}

pair<int,string>forWard(string s)
{
	int n = s.length();
	char start = s[0];
	int cnt = 1;
	string res; res.push_back(s[0]);
	pair<int,string>ans;
	ans.first = cnt ; ans.second = res;
	bool updated = false;
	for(int i=1;i<n;i++)
	{
		// cout<<start<<" "<<char(start+1)<<s[i]<<"\n";
		// cout<<(char(start+1) == s[i])<<"\n";
		string t1; t1.push_back(tolower(char(start+1)));
		string t2; t2.push_back(tolower(s[i]));
		if(t1==t2)
		{
			cnt++;
			res.push_back(s[i]);
		}
		else
		{
			cnt=1;
			res.erase();
			res.push_back(s[i]);
		}
		start = s[i];
		if(ans.first <cnt) 
			{
				ans.first = cnt;
				ans.second = res;
			}
	}
	return ans;
}

int main()
{

	string s; cin>>s;
	pair<int,string>p = bckWard(s);
	pair<int,string>p_ = forWard(s);

	if(p_.first>=p.first)
	{
		cout<<p_.first<<" "<<p_.second<<"\n";
	}
	else 
	{
		cout<<p.first<<" "<<p.second<<"\n";
	}


	



return 0;
}