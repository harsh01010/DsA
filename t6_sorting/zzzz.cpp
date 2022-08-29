#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &v, int ele)
{
	int lo = 0;
	int hi = v.size() - 1;
	while (hi - lo > 1)
	{
		int mid = (lo + hi) / 2;
		if (v[mid] <= ele)
		{
			lo = mid + 1;
		}
		else
		{
			hi = mid;
		}
	}
	if (v[lo] > ele)
	{
		return lo;
	}
	if (v[hi] > ele)
	{
		return hi;
	}
	return -1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		vector<int> v;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		v.push_back(arr[0]);
		for (int i = 1; i < n; i++)
		{
			if (arr[i] < v[v.size() - 1])
			{
				int ans = lower_bound(v, arr[i]);
				v[ans] = arr[i];
			}
			else
			{
				v.push_back(arr[i]);
			}
		}
		
		cout << v.size() << " ";
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}