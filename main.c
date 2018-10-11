#include "ll.c"
#include <stdio.h>
#include <stdlib.h>

char letras[26][3] = {"aa", "bb", "cc", "dd", "ee",
"ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn",
"oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww",
"xx", "yy", "zz"};
int main()
{
  int i;
  struct node * ptr = 0;
  for (int i = 0; i < 26; i++)
  {
    ptr = insert_front(ptr, letras[i]);
    print_list(ptr);
  }
  free_list(ptr);
  return 0;
}
