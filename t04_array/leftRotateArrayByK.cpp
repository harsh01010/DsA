#include<bits/stdc++.h>
#define ll long long
using namespace std;

  void reverse(vector<int>&v , int l , int h){
             while(l<h){
               swap(v.at(l) , v.at(h));
               l++;
                h--;
             }
  }

int main()
{

    
//  int n;
//    cin>>n;
//     vector<int>v;
//       for(int i=0;i<n;i++){
//          int ele;
//            cin>>ele;
//             v.push_back(ele);
//       }
//        int k;
//          cin>>k;
//          vector<int>temp;
//           for(int i=0;i<k;i++)
//            temp.push_back(v.at(i));

//            for(int i=k;i<n;i++){
//              v.at(i-k) = v.at(i);
//            } 
           
//            int j=0;
//            for(int i= n-k ;i<n;i++){
//             v.at(i) = temp.at(j);
//              j++;}  


//               for(int i=0;i<n;i++){
//                  cout<<v.at(i)<<" ";
//               }
   

     // efficient method , reversal method;
   int t;
      cout<<"enter the total number of test cases\n";
        cin>>t;
          
       while(t--){
          int n;
            cout<<"enter the total number of elements in the array\n";
              cin>>n;
         vector<int>v;
           cout<<"enter the elements of the array\n";
          for(int i=0;i<n;i++){
            int ele;
              cin>>ele;
                v.push_back(ele);
          }
          int k;
          cout<<"g ";

            cout<<"enter the rotation value \n";
              cin>>k;
               if(k>n)
                  k%=n;
               cout<<"g ";
              //reverse(v, 0 , k-1);
               cout<<"g ";
               //reverse(v, k , n-1);
               cout<<"g ";
               reverse(v,0,n-1);
               cout<<"g ";
               cout<<"the array after shifting is:\n";

               for(int i=0;i<n;i++){
                 cout<<v.at(i)<<" ";
               }
                cout<<"\n";
            


       }
 


return 0;
}



