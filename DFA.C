#include<stdio.h>
#include<conio.h>
void main(){
 int str[20],temp,len,x=0,y=1,z=2,i,j,n,m,a[20];
 char s[20],o[20][20],fs;
 clrscr();
 printf("enter no. of state:");
 scanf("%d",&n);
 printf("enter state name:");
 for(i=0;i<n;i++){
 flushall();
 scanf("%c",&s[i]);
 }
 printf("enter no. of inputs:");
 scanf("%d",&m);
 for(i=0;i<m;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++){
 for(j=0;j<m;j++){
  printf("(%c , %d)-",s[i],a[j]);
  flushall();
  scanf("%c",&o[i][j]);
  }
 }
 printf("enter length of a string: ");
 scanf("%d",&len);
 for(i=0;i<len;i++)
 scanf("%d",&str[i]);
 temp=0;
 for(i=0;i<len;i++){
  if(o[temp][str[i]]=='x'){temp=0;continue;}
  if(o[temp][str[i]]=='y'){temp=1;continue;}
  if(o[temp][str[i]]=='z'){temp=2;continue;}
 }
 if(temp==z)
 printf("the string is valid.");
 else
 printf("the string is invalid.");
 getch();
}