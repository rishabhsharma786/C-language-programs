#include<stdio.h>
#include<conio.h>
void main(){
 int s[20],r[20][2],i,j,k,n,m,f=0,g=0,x,y,z=99;
 clrscr();
 printf("enter the no. of elements in a set:");
 scanf("%d",&n);
 printf("enter the elements of set:");
 for(i=1;i<=n;i++)
 scanf("%d",&s[i]);
 printf("enter the no. of relation set:");
 scanf("%d",&m);
 printf("enter the pairs of relation set:");
 for(i=1;i<=m;i++)
 scanf("%d%d",&r[i][1],&r[i][2]);
 printf("The entered relation is:");
 printf("{");
 for(i=1;i<=m;i++)
 printf("(%d,%d),",r[i][1],r[i][2]);
 printf("\b}");
 //to check currect relation set elements look below
 for(i=1;i<=m;i++){     //m is no of relation elemets
 for(j=1;j<=n;j++){     //n is no of set elemets
   if(r[i][1]==s[j])
   f++;
   if(r[i][2]==s[j])  // r[80][2]  is metrix to store relation set elements
   g++;
  } //end of for loop of j
  if(f==0||g==0){
   printf("\nYou entered wrong relation set.");
   getch();
   exit(0);
  }
  f=0;
  g=0;
 }  //end of for loop of i
 //intially f=0 and g=0;

 //to check either it is refelexive or not
 f=0;
 for(i=1;i<=m;i++){
  if(r[i][1]==r[i][2])
  f++;
 }
 if(f==n)
 printf("\nThe enter set relation is refelexive.");
 //to check either it is symmetric or not
 f=0;g=0;
 for(i=1;i<=m;i++){
  x=r[i][1];
  y=r[i][2];
  g++;
  for(j=1;j<=m;j++){
   if(x==r[j][2]&&y==r[j][1])
   f++;
  }
  if(f==0)
   goto d;
  f=0;
 }
 if(g==m)
 printf("\nThe relation is symmetric.");
 //to check either it is transitive or not
 d:
 f=0;g=0;
 for(i=1;i<=m;i++){
  for(j=1;j<=m;j++){
   for(k=1;k<=m;k++){
   x=r[i][1];y=r[i][2];
   if(y==r[j][1])
   z=r[j][2];
   if(x==r[k][1]&&z==r[k][2])
    f++;
 }}
 if(f==0)
 goto h;
 f=0;
}
 printf("\nThe relation is transitive.");
 h:
 getch();
}