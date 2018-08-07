#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
class yearly{
 public:
 int p,r,t;
 float ci;
 yearly(){
  cout<<"enter p,r,t";
  cin>>p>>r>>t;
 }
 void cal(){
  ci=p*(pow((1+r/100.0),t)-1);
  cout<<"compound interest="<<ci;
 }
};
class hy:public yearly{
 public:
 hy(){
  t=t*2;
  r=r/2.0;
  cal();
 }
};
class qy:public yearly{
 public:
 qy(){
  t=t*4;
  r=r/4.0;
  cal();
 }
};
void main(){
 int n;
 while(1){
  clrscr();
  printf("enter 1,2, or 3:");
  scanf("%d",&n);
 switch(n){
 case 1:
   yearly y;
   y.cal();
   getch();
   break;
 case 2:
   hy h;
   getch();
   break;
 case 3:
   qy q;
   getch();
   break;
 case 4:
   exit(0);
 dafault:
   cout<<"enter right value;";
   getch();
   break;
  }
 }
}