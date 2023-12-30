  #include<bits/stdc++.h>
  typedef long long int ll;
  using namespace std;
  
// taking fixed sizes
 void print(int arr[2][2],int m,int n)
 {
       for(int i=0;i<m;i++)
       {
            for(int j=0;j<n;j++)
              cout<<arr[i][j]<<" ";
       }
 }
void printt(int arr[][2],int m,int n)
{
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
      }
}

const int p = 2 , q=2;
void printtt(int arr[p][q])
{
      for(int i=0;i<p;i++)
      {
          for(int j=0;j<q;j++)
          {
             cout<<arr[i][j]<<" ";
          }
      }
}
  

// variable sizes
//1. using double pointer
void printttt(int **arr,int m,int n)
{
     for(int i=0;i<m;i++)
     {
          for(int j=0;j<n;j++)
           cout<<arr[i][j]<<" ";
     }
}  

//2.using array of pointer
void printtttt(int *arr[],int m,int n)
{
     for(int i=0;i<m;i++)
     {
          for(int  j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
     }
}

//3.using array of vectors
void printttttt(vector<int>arr[],int m)
{
        for(int i=0;i<m;i++)
        {
              for(int j=0;j<arr[i].size();j++)
              {
                    cout<<arr[i].at(j)<<" ";
              }
        }
}

void printtttttt(vector<vector<int>>arr)
{
          for(int i=0;i<arr.size();i++)
          {
               for(int j=0;j<arr[i].size();j++)
                cout<<arr[i][j]<<" ";
          }
}
  int main()
  {  

    //using two ptr
    int **arr;
    int m = 3 , n=3;
    arr = new int*[m];
    for(int i=0;i<m;i++)
    {
           arr[i] = new int[n];
           for(int j=0;j<n;j++)
              cin>>arr[i][j];
    }
    
    // using array of pointer
     m=3 , n=2;
    int* brr[m];
    for(int i=0;i<m;i++)
    {
          arr[i] = new int[n];
          for(int j=0;j<n;j++)
          {
              cin>>brr[i][j];
          }
    }

    //using array of vector
     m = 3;
     vector<int>crr[3];
       for(int i=0;i<m;i++)
       {
              for(int j=0;j<3;j++)
              {
                    int ele; cin>>ele;
                     crr[i].push_back(ele);
              }
       }
   //using vector of vector
    m = 3,n=3;

    vector<vector<int>>drr;
     for(int i=0;i<m;i++)
     {
         vector<int>tp;
         for(int j=0;j<n;j++)
         {
                int x; cin>>x; tp.push_back(x);
         }
         drr.push_back(tp);
     }
  
  
  
  return 0;
  }