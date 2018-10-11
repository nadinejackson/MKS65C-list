#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
  char name[16];
  struct node * next;
};

void print_list(struct node * link)
{
  while (link)
  {
    printf("%s->", link->name);
    link = link->next;
  }
  printf("NULL\n");
}
struct node * insert_front(struct node * link, char * new_name)
{
  struct node * ptr = malloc(sizeof(struct node));
  strcpy(ptr->name, new_name);
  ptr->next = link;
  return ptr;
}
struct node * free_list(struct node * front)
{
  if (front->next)
  {
    free_list(front->next);
    free(front);
  }
  else
  {
    free(front);
  }
  return front;
}
