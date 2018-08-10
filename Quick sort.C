#include<stdio.h>
#include<conio.h>
int partition(int a[], int ,int );
void quicksort(int a[],int ,int );
int q,i;
void main(){
 int a[20],n;
 clrscr();
 printf("enter no of elements:");
 scanf("%d",&n);
 printf("enter elements:");
 for(i=1;i<=n;i++)
 scanf("%d",&a[i]);
 quicksort(a,1,n);
 for(i=1;i<=n;i++)
 printf("  %d\n",a[i]);
 getch();
}
void quicksort(int a[],int p,int r){
 if(p<r){
   q=partition(a,p,r);
   quicksort(a,p,q-1);
   quicksort(a,q+1,r);
  }
 }
int  partition(int a[], int p, int r){
  int j,x,temp;
  x=a[r];
  i=p-1;
  for(j=p;j<=r-1;j++){
   if(a[j]<=x){
    i++;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
  temp=a[i+1];
  a[i+1]=a[r];
  a[r]=temp;
  return(i+1);
}