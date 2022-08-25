 #include<iostream>
 #define ll long long
 #define REP(a,n)  for(long long int i=a;i<n;i++)
 using namespace std;
 
   int gcd(int a,int b){
       return b==0?a:(a%b?gcd(b,a%b):b);
   }
 
 int gcd1(int a ,int b){
      if(a==0) return b; 
      if(b==0) return a;
     while(a!=b){
         if(a>b)  a = a-b; 
         else b = b-a;
     }
     return a;
 }
 int main()
 {  int t;
   cin>>t;
    while(t--){
     int a, b; 
       cin>>a>>b; 
          cout<<gcd(a,b)<<endl;
          cout<<gcd1(a,b)<<endl;
 
    }
 
 return 0;
 }