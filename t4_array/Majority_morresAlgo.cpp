#include<bits/stdc++.h>
#define ll long long
using namespace std;

  // MORRE'S VOTING ALGORITHM

 class solution{

  private:
     int n;
       vector<int>arr;
  public:
     void takeinput(void);
     int solve(void);
       void print(int i){
         cout<<arr.at(i);
       }
 };
 void solution:: takeinput(void){
    cout<<"Enter the total number of elements in the array\n";
      cin>>n;
      cout<<"Enter the elements of the array\n";
       for(int i=0;i<n;i++) {int ele; cin>>ele; arr.push_back(ele);}
 }
  int solution:: solve(void){
      // finding major
      int res = 0;
       int cnt = 1;
      for(int i=1;i<n;i++){
          if(arr[res] == arr[i])
           cnt++;
           else{ cnt--;cout<<cnt<<"\n";}
         if(cnt==0){
              res = i;
                cnt = 1;
                 cout<<arr[i]<<"\n";
         }
      }
         //checking total Ln/2 count.
          int ocrr=0;
            for(int i=0;i<n;i++)
             {if(arr[i] == arr[res]) ocrr++;
              }
             //  cout<<ocrr<<" "<<n<<"\n";
              if(ocrr>n/2) return res;
              else return -1;
          
  }
int main()
{
   solution problem;
    problem.takeinput();
  
    int ans = problem.solve();
    if(ans!= -1)
    {cout<<"the majority element is : "; problem.print(ans);}
     else cout<<"NO majority elements found\n";
return 0;
}                                          
                                          /*

            E.G
                 8 , 8 , 6 , 6 , 6 , 4 , 6
                 ^   +1  -1  -1  +1  -1  +1
                              ^       ^   ^
                 1    2    1  0   1   0    1
                            nomajor nomajor  
                                             
                                            */