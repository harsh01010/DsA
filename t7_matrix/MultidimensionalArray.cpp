#include <bits/stdc++.h>

using namespace std;

int main() {
  // multidimensional array  in c++
  /*
   2d array :- arr[2][2] = {{1 ,2},
                             {4,5}};
3d array :- arr[][3][3] = { {{1,2},{3,4}} , {{5,6},{7,8}} };

-> row major order and calumn major order

arr[3][2] = {{2,3}
            ,{4,5},
              {7,8}};

 row wise allocation -> row major order => _ _ | _ _ | _ _
   calumn wise allocation -> calumn major order => _ _ _ | _ _ _

  arr[m][n]
  in row wise allocation -> address of arr[i][j] = base address + (i*n
+j)*sizeOfDataType in clumn wise allocation -> address of arr[i][j] = base
address + (j*m +i)*sizeOfDataType

*/

  /*  WAYS TO CREATE A 2D ARRAY
     1. int arr[2][3];

     2. int **arr;
      arr = new int*[n];
        for(int i=0;i<m;i++)
          arr[i] = new int[m];

    3. int *arr[m];
        for(int i=0;i<n;i++)
          arr[i] = new int[n];

    4. vector<int>arr[n];   array of vector

    5. vector<vector<int>>arr;
         for(int i=0;i<m;i++){
             vector<int>pb;
              for(int j=0;j<n;j++)
                {
                    int n; cin>>n;
                  pb.push_back(n);
                }
           arr.push_back(pb);
         }

    */
  return 0;
}