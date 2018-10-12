#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
  char name[16]; //name is a pointer with space for 16 chars
  struct node * next; //pointer to next node
};

void print_list(struct node * link)
{
  while (link) //while the pointer points somewhere
  {
    printf("%s->", link->name); //print it + arrow
    link = link->next; //go to the next val
  }
  printf("NULL\n"); //indicates end of list
}
struct node * insert_front(struct node * link, char * new_name)
{
  struct node * ptr = malloc(sizeof(struct node));
  //allocate memory for a new struct
  strcpy(ptr->name, new_name); //put the name in its place
  ptr->next = link; //put the pointer to the next node in its place
  return ptr; //return new front
}
struct node * free_list(struct node * front)
{
  if (front->next) //if this isn't the last node
    free_list(front->next); //free the next one
  free(front); //then free itself
  return NULL; //i don't think I used this properly/at all
}
