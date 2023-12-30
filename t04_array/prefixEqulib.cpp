 // equlibrium point 
   // a point where sum of elements before it is equal to sum of elements after it

    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    

     int equlibrium(int arr[] , int n){
              for(int i=1;i<n-1;i++){
                   if(arr[i-1] == arr[i+1]-arr[i])
                     return i;
              }
              
                   if(arr[n-1]-arr[0]  == 0) return 0;
                   else if(arr[n-2] == 0) return n-1; 
                
               return -1;
     }

     int equlib(int arr[] , int n , int sum){
        
                int leftsum = 0;
              int rightsum;
             for(int i=1;i<n-1;i++){
           leftsum+=arr[i-1];
                rightsum =  sum - leftsum - arr[i];
                  if(leftsum==rightsum)
                    return i;

             }

             if(sum - arr[0] == 0) return 0;
             if(sum - arr[n-1] ==0) return n-1;

             return -1;


     }


    int main()
    {
          int n;
            cout<<"enter the number of elements in the array\n";
              cin>>n;
                cout<<"enter the elements of the array\n";
                int arr[n];
                 int arrsum = 0;
                 for(int i = 0;i<n;i++){
                    cin>>arr[i];
                     arrsum+=arr[i];
                 }
                                   /*                                  
                 int prefix_arr[n];
                   prefix_arr[0] = arr[0];
                    for(int i=1;i<n;i++) prefix_arr[i] = arr[i] + prefix_arr[i-1];   
                      //takes O(n) space
                int ans = equlibrium(prefix_arr , n);
                              if(ans!=-1)
                 cout<<arr[ans]<<"\n";
                 else cout<<ans<<endl;

                                                          */
                             // O(1) extra space
                  //we can simply calculate total sum and compute left sum right sum wil be total cum - left sum.

                  int ans = equlib(arr , n , arrsum);

                  cout<<ans<<endl;

    
    return 0;
    }