#include<stdio.h>
#include<conio.h>
void main(){
 int i,j,k,n,temp=0,flag=0,hit=0,buffer[20],page[20],x;
 clrscr();
 printf("enter total no. of pages:");
 scanf("%d",&n);
 printf("enter page reference no.\n");
 for(i=1;i<=n;i++)
 scanf("%d",&page[i]);
 printf("enter buffer size:");
 scanf("%d",&x);
 for(i=1;i<=x;i++)
 buffer[i]=666;
 for(i=1;i<=n;i++){
  flag=0;
  temp=0;
  for(j=1;j<=x;j++)
  if(page[i]==buffer[j]){
   flag=1;
  }
  if(flag==1){
   hit++;
   temp=1;
  }
  if(temp==0){
   for(k=1;k<=(x-1);k++)
   buffer[k]=buffer[k+1];
   buffer[k]=page[i];
  }
 }
 printf("Total no. of hits:%d",hit);
 getch();
}