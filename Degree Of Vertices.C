//enter vertices in characters ex:"a" enter button "b" enter button etc
//enter edges in groups ex:"ab" enter button "cd" enter button etc
#include<stdio.h>
#include<conio.h>
void main(){
 int i,j,n,m,f=0,g=0,x[20];
 char v[20],e[20][2];
 clrscr();
 printf("enter the no. of vertices:");
 scanf("%d",&n);
 printf("enter %d vertices:",n);
 for(i=1;i<=n;i++){
 flushall();
 scanf("%c",&v[i]);
 flushall();
 }
 printf("enter no. of edges:");
 scanf("%d",&m);
 printf("enter the edges:"); //dont press enter during a edge
 for(i=1;i<=m;i++){
  flushall();
  scanf("%c%c",&e[i][1],&e[i][2]);
  flushall();
 }
 printf("The set of edges is:");
 printf("{");
 for(i=1;i<=m;i++)
 printf("(%c,%c),",e[i][1],e[i][2]);
 printf("\b}");
 for(i=1;i<=m;i++){
 for(j=1;j<=n;j++){
   if(e[i][1]==v[j])
   f++;
   if(e[i][2]==v[j])
   g++;
  } //for loop of j
  if(f==0||g==0){
   printf("\nYou entered wrong edges.");
   getch();
   exit(0);
  }
  f=0;
  g=0;
 }  //for loop of i
 f=0;g=0;
 for(i=1;i<=n;i++){
 for(j=1;j<=m;j++){
  if(v[i]==e[j][1])
  f++;
  if(v[i]==e[j][2])
  f++;
  }
  x[i]=f;
  f=0;
 }
 for(i=1;i<=n;i++)
 printf("\nDegree of %c is %d",v[i],x[i]);
 getch();
}