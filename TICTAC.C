//enter a number from 1-9 as a location.
//don't enter same location more than one time.
#include<conio.h>
#include<stdio.h>
void main(){
 char d,a[]={'m','n','p','q','r','s','t','u','v'};
 int f,i,y=6;
 clrscr();
 printf(" | | \n | | \n | | \n");
 printf("enter 'o' or ''x:");
 scanf("%c",&d);
  for(f=1;f<=9;f++){
  gotoxy(1,y);
  y++;
  printf("enter a location:");
  scanf("%d",&i);
  if(d=='o'||d=='x'){
  if(i==1){ gotoxy(1,1); printf("%c",d); a[0]=d;}
  if(i==2){ gotoxy(3,1); printf("%c",d); a[1]=d;}
  if(i==3){ gotoxy(5,1); printf("%c",d); a[2]=d;}
  if(i==4){ gotoxy(1,2); printf("%c",d); a[3]=d;}
  if(i==5){ gotoxy(3,2); printf("%c",d); a[4]=d;}
  if(i==6){ gotoxy(5,2); printf("%c",d); a[5]=d;}
  if(i==7){ gotoxy(1,3); printf("%c",d); a[6]=d;}
  if(i==8){ gotoxy(3,3); printf("%c",d); a[7]=d;}
  if(i==9){ gotoxy(5,3); printf("%c",d); a[8]=d;}
  if(d=='x')
  d='o';
  else
  d='x';
  }
   if(a[0]==a[1]&&a[1]==a[2]||a[0]==a[4]&&a[4]==a[8]||a[0]==a[3]&&a[3]==a[6]||a[1]==a[4]&&a[4]==a[7]||a[2]==a[5]&&a[5]==a[8]||a[3]==a[4]&&a[4]==a[5]||a[6]==a[7]&&a[7]==a[8]||a[2]==a[4]&&a[4]==a[6])
   goto g;
   if(f==9){
   gotoxy(1,y);
   printf("the match is draw.");
   goto h;
   }
 }
 g:
 gotoxy(1,y);
 if(d=='x')
 printf("the winner is 'o'.");
 else
 printf("the winner is 'x'.");
 h:
 getch();
}