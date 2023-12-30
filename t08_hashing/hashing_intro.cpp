 /*

  hashing -> improvement over direct accessstable
        by a hash function.

        best for search,insert ,delelte -> O(1) on average

        not useful for -> finding closet value , sorted date prefix searching

        it is 2nd most used datastructure(after array).

        * Hashing is an improvement over Direct Access Table.
         The idea is to use a hash function that converts a given phone number or any other key to a smaller number and uses
          the small number as an index in a table called a hash table

    application of hashing:-
      dictionaries
      database indexing
      cryptography
      chaes
      symbol tables in compilers/interpreters
      routers
      getting data from databases
      -many more

*/
 /*
   **************HASH FUNCTION************

     Large key -> HASH FUN ->  small value
      
      .maps a large key to some small value
      .should generate values from 0 to m-1
      .should be fast , o(1) for integers and o(len) for strings
      .should uniformly distribute large keys into hash table slots.

      e.g:
      .Hash(large_key) = large_key%m -> collision handling required , m is always taken large prime number
      .for strigns , weighted sum
        str[] = "abcd"
        (str[0]*x^0 + str[1]*x^1 + str[2]*x^2......)%m

       .universal hashing


*/


/*

   *************COLLISIION HADLING*********************

    Birthday paradox:
    it states that , if there are 23 people in a room then there is probablity of 1/2 of two people
    to have same birthday.
    if there are 70 people then probablity bcomes 99.9%

-> if we know the keys in advanced then we can handle collision , using perfect hashing(advanced hashing technique ,insures no collisions).

-> if we do not the keys in advanced then collisions are bound to happen,
  to handle collision,
   1. chaining

   2.open  addressing 
     a. linear probing
     b. quadratic probing
     3. double probing

*/

