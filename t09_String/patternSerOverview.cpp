

//Pattern searching

/*
 give a string and a pattern string we have to 
  return starting index of pattern in the given string
  if it is present in the given string

 uses:
  work on a file , programming file , ms word file
  google search
  dna matching
  regular expressinon search
  e.t.c.
*/
/*
  algortithms:
   n = strig length , m = pattern length
  1. naive:
   O((n-m+1)*m)

   naive when all       : O(n)
   charactors are distinct

 2.Rabin karp:  uses rolling hash
  O((n-m+1)*m) but better than naive

3. KMP algorithm: O(n) 

4. suffix tree: (not an algorithm , it is a datastructure)
  O(m)

*/

   