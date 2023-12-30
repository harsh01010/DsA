#include<bits/stdc++.h>
#define ll long long
using namespace std;
void del(int *arr ,int size , int det , int pos){

 for(int i=pos ; i<size ; i++){
     arr[i]= arr[i+1];
 }
 cout<<"deleted \n";
}


int ser(int arr[] , int siz , int tobe ){
    for(int i=0;i<siz;i++){
        if(arr[i] == tobe)
         return i;
    }
    return -1;
} 
int main()
{

    
      int tot;
        cout<<"enter the total number of the elements in the array(<50)"<<endl;
         cin>>tot;
         int arr[tot];
          cout<<"enter the elements of the array"<<endl;
           for(int i=0;i<tot;i++)
             cin>>arr[i];

             cout<<"enter the element to be deleted"<<endl;
             int det;
              cin>>det;
              int pos;
          int ind = ser(arr, tot , det);
          if(ind!= -1){
            del(arr , tot , det , ind);
   cout<<"the  array after deletion is "<<endl;

   for(int i=0;i<tot-1;i++){
       cout<<arr[i]<<" ";
   }
          }
          else  cout<<"error"<<endl;



return 0;
}