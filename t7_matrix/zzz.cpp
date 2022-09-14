#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


  void pat1(void)
  {
      for(int i=1;i<=4;i++)
      {   int p = i;
           for(int j=1;j<=i;j++)
           {
              cout<<p++<<" ";
           }
           cout<<"\n";
      }
  }

void pat2(void)
{  int x = 0;
    for(int i=1;i<=4;i++)
    {    int p = i;

          for(int j=1;j<=7;j++)
          {
                if(j>=(5-i) and j<=(3+i))
                {
                      if(i%2 == j%2) cout<<" ";
                      else cout<<p++<<" ";
                }
                else cout<<" ";
          }
          cout<<"\n";
          
          
    }
}
void pat3(void)
{
     for(char i = 'A';i<='C';i++)
     {
           for( char j = 'A';j<=i;j++)
           {
              cout<<i<<" ";
           }
           cout<<"\n";
     }
     
}
void pat4(void)
{
      for(char i = 'A';i<='D';i++)
      {   char t = i;

          for(char j = 'A';j<=i;j++)
          {
             cout<<t++<<" ";
          }
          cout<<"\n";
      }
}
void pat5(void)
{
      char ul = 'E';
     for(int i=1;i<=5;i++)
      {    char p = ul;
          for(int j=1;j<=i;j++)
          {
                cout<<p++<<" ";
          }
          ul--;
          cout<<"\n";
      }
   
}
void pat6(void)
{
     for(int i=1;i<=4;i++)
     {   int t = i;
         bool flag = false;
          for(int j=1;j<=7;j++)
          { 
              if(j>=(5-i) and j<=(3+i))
              {
                  if(j<=4)
                     cout<<t++<<"";
                     else{ if(!flag){t--;flag=true;}cout<<--t<<"";}
              }
              else cout<<" ";
             
          }
          cout<<"\n";
     }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

       
//    pat1(); cout<<"\n";
//    pat2(); cout<<"\n";
//    pat3(); cout<<"\n";
//    pat4(); cout<<"\n";
//    pat5(); cout<<"\n";
//    pat6(); cout<<"\n";


return 0;
}