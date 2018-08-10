#include<stdio.h>
#include<conio.h>
void main(){
 int a[20],i,min,n,j,temp;
 clrscr();
 printf("enter the no. of elements:");
 scanf("%d",&n);
 printf("enter elements:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1;i++){
  min=i;
  for(j=i+1;j<n;j++)
  if(a[j]<a[min])
  min=j;
  temp=a[min];
  a[min]=a[i];
  a[i]=temp;
 }
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 getch();
}
