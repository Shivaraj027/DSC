#include<stdio.h>
#include<stdlib.h>
void create;
void display;
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
 int data;
 struct node*next;
};
struct node*first=NULL;
int main()
{
 int choice;
 while(1)
 {
  printf("\n*** single Linked List Operation:****\n");
  printf("\n   MENU  \n");
  printf("\n 1.create \n");
  printf("\n 2.Display  \n");
  printf("\n 3.Insert at the beginning  \n"); 
  printf("\n 4.Insert at the end  \n"); 
  printf("\n 5.Insert at the specified postion  \n");
  printf("\n 6.Delete from beginning  \n");
  printf("\n 7.Delete from the end  \n");
  printf("\n 8.Delete from specified position   \n");
  printf("\n 9.Exit  \n");
  printf("\n ----------------------------  \n");
  printf("\n Enter your choice:\t");
  scanf("%d",&choice);
  switch(choice
