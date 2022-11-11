#include <bits/stdc++.h>
#define ll long long
using namespace std;

int kadaneGen(vector<int> arr)
{
	int n = arr.size();
	int ans = arr.at(0);
	vector<int> kadane(n);
	kadane.at(0) = arr[0];
	for (int i = 1; i < n; i++)
	{
		// cout<<arr[i]<<" "<<arr[i]+kadane.at(i-1)<<"  ";
		kadane.at(i) = max(arr[i], arr[i] + kadane.at(i - 1));
		ans = max(ans, kadane.at(i));
		// cout<<kadane.at(i)<<"  ";
	}
	return ans;
}
int main()
{

	int n;
	cout << "enter the total number of elements in the array\n";
	cin >> n;

	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int ele;
		cin >> ele;
		arr.push_back(ele);
	}
	// for(int i=0;i<arr.size();i++) cout<<arr[i]<<"  ";
	int linAns = kadaneGen(arr);
	int arrsum = 0;
	for (int i = 0; i < n; i++)
		arrsum += arr[i];

	for (int i = 0; i < n; i++)
		arr[i] *= -1;

	int cirAns = kadaneGen(arr) + arrsum;       // find the minimum subarray sum and subtract it from the total sum.

	int ans = max(linAns, cirAns);

	cout << linAns << cirAns << " " << ans << "\n";

	return 0;
}