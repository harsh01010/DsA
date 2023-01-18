
//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	vector<string>ans;
	//ans.push_back("1");
	
	queue<string>q; 
	q.push("1");
	 while(N--)
	 {
	      string x = q.front();
	      q.pop();
	      ans.push_back(x);
	      q.push(x+"0");
	      q.push(x+"1");
	 }
	 return ans;
}