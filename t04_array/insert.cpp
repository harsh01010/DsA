#include<bits/stdc++.h>
#define ll long long
using namespace std;
void insert(int *arr ,int size , int ins , int pos){

 for(int i=size-1 ; i>=pos-1 ;i--){
     arr[i+1] = arr[i];
 }
 arr[pos-1] = ins;
cout<<"inserted"<<endl;
}

int main()
{

     // we cannot insert in a fixed size array if it is already full.
     int arr[50];
      int tot;
        cout<<"enter the total number of the elements in the array(<50)"<<endl;
         cin>>tot;
          cout<<"enter the elements of the array"<<endl;
           for(int i=0;i<tot;i++)
             cin>>arr[i];

             cout<<"enter the element to be inserted"<<endl;
             int ins;
              cin>>ins;
              int pos;
              cout<<"enter the position(<50) at which you want to inset "<<ins<<endl;
              cin>>pos;

              insert(arr , tot , ins , pos);
   cout<<"the  array after insertion is "<<endl;

   for(int i=0;i<tot+1;i++){
       cout<<arr[i]<<" ";
   }



return 0;
}