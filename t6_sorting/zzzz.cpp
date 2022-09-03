long long int conquer(long long  arr[],long long  lo,long long  mid,long long  hi)
    {
          long long  n1 = mid-lo+1;
          long long  n2 = hi-mid;
          long long  a[n1],b[n2]; for(long long  i=0;i<n1;i++) a[i] = arr[lo+i]; for(long long  i=0;i<n2;i++) b[i] = arr[mid+1+i];
          
          long long  p=0,q=0,k=lo;long long int inv=0;
          while(p<n1 and q<n2)
          {
                 if(a[p]<=b[q]) arr[k++] = a[p++];
                 else
                 {
                       inv+=(n1-p);
                       arr[k++] = b[q++];
                 }
                 
          }
          while(p<n1) arr[k++] = a[p++];
          while(q<n2) arr[k++] = b[q++];
          return inv;
    }
    
    long long int divideNconquer(long long arr[],long long  lo,long long  hi)
    {   long long ans = 0;
           if(lo<hi)
           {
                 long long  mid = lo + (hi-lo)/2;
                 ans+=divideNconquer(arr,lo,mid);
                 ans+=divideNconquer(arr,mid+1,hi);
                 ans+=conquer(arr,lo,mid,hi);
           }
           return ans;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        return divideNconquer(arr,0,N-1);
        // Your Code Here
    }
