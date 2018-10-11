#include "ll.c"
#include <stdio.h>
#include <stdlib.h>
 //yes, 2d arrays still work
char letras[26][3] = {"aa", "bb", "cc", "dd", "ee",
"ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn",
"oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww",
"xx", "yy", "zz"}; //to test that the code can add things without being repetitive
int main()
{
  int i;
  struct node * ptr = 0; //because the end of a linked list
  //points to the null address
  for (int i = 0; i < 26; i++) //each letter of the alphabet
  {
    ptr = insert_front(ptr, letras[i]); //point to the new front once data added
    print_list(ptr); //print the list we have
  }
  free_list(ptr); //discard of the heap storage
  return 0;
}
