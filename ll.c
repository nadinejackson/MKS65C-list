#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct node
{
  char name[16];
  struct node * next;
};

void print_list(struct node * link)
{
  while (link){
    printf("%s is my name, CS is my game", link->name);
    link = link->next;
  }
}

int main()
{
  
  return 0;
}
