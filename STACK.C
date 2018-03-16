		  //insertion and traversing in stack
		  //to create a node enter 'y' otherwise 'n'
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
 struct node *ptr;
 int info;
};
struct node *top=NULL;
void main(){
  char ch;
  struct node *n;
  clrscr();
  while(1){
  printf("wants to create any node:");
  ch=getch();
  if(ch=='y'){
  n=(struct node*)malloc(sizeof(struct node));
  printf("enter any no:");
  scanf("%d",&n->info);
  if(top==NULL){
  top=n;
  top->ptr=NULL;
  }
  else{
   n->ptr=top;
   top=n;
   }
  }
  else{
  printf("\nYour stack elements is:");
  goto x;
  }}
  x:
  while(top!=NULL){
  printf("%d ",top->info);
  top=top->ptr;
  }
  getch();
}