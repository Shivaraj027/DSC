/*Objective:To write a program that perform insertion deletion into/from a singly linked list 
  Name: Shivaraj s 
  USN: 18BBTCS120
  DATE: 15/10/19
  FUNCTIONS:CREATE(),DISPLAY(),INSERT_BEGIN(),INSERT_END(),INSERT_POS(),INSERT_POS(),INSERT_BEGIN(),DELETE_BEGIN(),DELETE_END(),DELETE_POS()
  OUTPUT:*** single Linked List Operation:****

   MENU  

 1.create 

 2.Display  

 3.Insert at the beginning  

 4.Insert at the end  

 5.Insert at the specified postion  

 6.Delete from beginning  

 7.Delete from the end  

 8.Delete from specified position   

 9.Exit  

 ----------------------------  

 Enter your choice:	2

 List is empty:

*** single Linked List Operation:****

   MENU  

 1.create 

 2.Display  

 3.Insert at the beginning  

 4.Insert at the end  

 5.Insert at the specified postion  

 6.Delete from beginning  

 7.Delete from the end  

 8.Delete from specified position   

 9.Exit  

 ----------------------------  

 Enter your choice:	3

 Enter the data value for the node:	3

*** single Linked List Operation:****

   MENU  

 1.create 

 2.Display  

 3.Insert at the beginning  

 4.Insert at the end  

 5.Insert at the specified postion  

 6.Delete from beginning  

 7.Delete from the end  

 8.Delete from specified position   

 9.Exit  

 ----------------------------  

 Enter your choice:	4

 Enter the data value for the node:	4

*** single Linked List Operation:****

   MENU  

 1.create 

 2.Display  

 3.Insert at the beginning  

 4.Insert at the end  

 5.Insert at the specified postion  

 6.Delete from beginning  

 7.Delete from the end  

 8.Delete from specified position   

 9.Exit  

 ----------------------------  

 Enter your choice:	5

 Enter the position for the new node to be inserted:	4

 Enter the data value of the node:	5

 Position not fount:[Handle with care]

*** single Linked List Operation:****

   MENU  

 1.create 

 2.Display  

 3.Insert at the beginning  

 4.Insert at the end  

 5.Insert at the specified postion  

 6.Delete from beginning  

 7.Delete from the end  

 8.Delete from specified position   

 9.Exit  

 ----------------------------  

 Enter your choice:	2

 The list elements are:
3	4	
*** single Linked List Operation:****

   MENU  

 1.create 

 2.Display  

 3.Insert at the beginning  

 4.Insert at the end  

 5.Insert at the specified postion  

 6.Delete from beginning  

 7.Delete from the end  

 8.Delete from specified position   

 9.Exit  

 ----------------------------  

 Enter your choice: */
         





#include<stdio.h>
#include<stdlib.h>
void create();    // function prototype
void display();
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
 while(1)    //while true
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
  switch(choice)
   {
    case 1:
           create();
           break;
    case 2:
           display();
           break;
    case 3:
           insert_begin();
           break;
    case 4:
           insert_end();
           break;
    case 5:
           insert_pos();
            break;
    case 6:
           delete_begin();
           break;
    case 7:
           delete_end();
           break;
    case 8:
           delete_pos();
           break;
    case 9:
           exit(0);
           break;
    default:
            printf("\n Wrong choice:\n");
            break;
    }// end of switch

 } 
 return 0;
}
void create()     // function declaration
{
 struct node*temp,*ptr;
 temp=(struct node*)malloc(sizeof(struct node));
 if(temp==NULL)
 {
  printf("\n Out of Memory space:\n");
  exit(0);
 }
 printf("\n Enter the data value for the node:\t");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(first==NULL)
 {
  first=temp;
 }
 else
 {
  ptr=first;
  while(ptr->next!=NULL)
  {
   ptr=ptr->next;
  }
  ptr->next=temp;
 }
}
void display()
{
 struct node*ptr;
 if(first==NULL)
 {
  printf("\n List is empty:\n");
  return;
 }
 else
 {
  ptr=first;
  printf("\n The list elements are:\n");
  while(ptr!=NULL)
  {
   printf("%d\t",ptr->data);
   ptr=ptr->next;
  }
 }
}
void insert_begin()
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
 {
  printf("\n Out of Memory Space:\n");
  return;
 }
 printf("\n Enter the data value for the node:\t");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(first==NULL)
 {
  first=temp;
 }
 else
 {
  temp->next=first;
  first=temp;
 }
}
void insert_end()
{
 struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
 {
  printf("\n Out of Memory Space:\n");
  return;
 }
 printf("\n Enter the data value for the node:\t");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(first==NULL)
 {
  first=temp;
 }
 else
 {
  ptr=first;
  while(ptr->next!=NULL)
  {
   ptr=ptr->next;
  }
  ptr->next=temp;
 }
}
void insert_pos()
{ 
 struct node*temp,*ptr;
 int i,pos;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
 {
  printf("\n Out of Memory Space:\n");
  return;
 }
 printf("\n Enter the position for the new node to be inserted:\t");
 scanf("%d",&pos);
 printf("\n Enter the data value of the node:\t");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(pos==0)
 {
  temp->next=first;
  first=temp;
 }
 else
 {
  for(i=0,ptr=first;i<pos-1;i++)
  {
   ptr=ptr->next;
   if(ptr==NULL)
   {
    printf("\n Position not fount:[Handle with care]\n");
    return;
   }
  }
 temp->next=ptr->next;
 ptr->next=temp;
 }
}
void delete_begin()
{
 struct node*ptr;
 if(ptr==NULL)
 {
  printf("\n List is Empty:\n");
  return;
 }
 else
 {
  ptr=first;
  first=first->next;
  printf("\n The deleted element is:%d\t",ptr->data);
  free(ptr);
 }
}
void delete_end()
{
 struct node*temp,*ptr;
 if(first==NULL)
 {
  printf("\n List is Empty");
  exit(0);
 }
 else if(first->next==NULL)
 {
  ptr=first;
  first=NULL;
  printf("\n The Deleted element is:%d\t",ptr->data);
  free(ptr);
 }
 else
 {
  ptr=first;
  while(ptr->next!=NULL)
   {
    temp=ptr;
    ptr=ptr->next;
   }
  temp->next=NULL;
  printf("\n The deleted element is:%d\t",ptr->data);
  free(ptr);
 }
}
void delete_pos()
{
 int i,pos;
 struct node*temp,*ptr;
 if(first==NULL)
 {
  printf("\n The list is Empty:\n");
  exit(0);
 }
 else
 {
  printf("\n Enter the position of the node to be deleted:\t");
  scanf("%d",&pos);
  if(pos==0)
  {
   ptr=first;
   first=first->next;
   printf("\n The deleted element is:%d\t",ptr->data);
  }
 else
  {
   ptr=first;
   for(i=0;i<pos;i++)
   {
    temp=ptr;
    ptr=ptr->next;
    if(ptr==NULL)
    {
     printf("\n Position not Found:\n");
     return;
    }
   }
  temp->next=ptr->next;
  printf("\n The deleted element is:%d\t",ptr->data);
  }
 }
}
 

         
          
