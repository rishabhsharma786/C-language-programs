#include<stdio.h>
#include<conio.h>
void toh(int ,char , char, char);
void main(){
 int n;
 clrscr();
 scanf("%d",&n);
 toh(n,'b','a','e');
 getch();
}
void toh(int n,char b,char a,char e){
  if(n>0){
   toh(n-1,b,e,a);
   printf("%c-%c\n",b,e);
   toh(n-1,a,b,e);
  }
}