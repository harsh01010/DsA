/*
  PROBLEMS WITH ARRAYS

  ->size is fixed and pre allocated ,
  worst case insertion at the end is theeta(n).

  ->insertion at middle is costly.

  ->deletion at middle is costly.

  ->implementation of data structures like queue 
  and deque is complex with with array 
  */


 /*

     [10 | ]->[20 | ]->[30 | ]->NULL
    head       nodes.....

    * linked list drops the contiguous memoryrequirements so that
    insertion,deletions can be efficient.
     
     *No need to pre allocate the space.

    *nodes are not at contiguous memory location.

*/