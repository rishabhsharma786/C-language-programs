#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int i,m,n,o=1,p=1,fn=0,arr[80][2];
void randomno();
void main(){
 int q,z,speed;
 char c,ch;
 clrscr();
 arr[1][1]=16;arr[1][2]=8;
 _setcursortype(_NOCURSOR);
   printf("a. slow\nb. normal\nc. fast\nd. super fast\nx. to exit during game");
   ch=getch();
   if(ch=='a') speed=500;
   if(ch=='b') speed=200;
   if(ch=='c') speed=90;
   if(ch=='d') speed=30;
   clrscr();
   gotoxy(20,20);
   printf("points=",fn-1);
   gotoxy(arr[1][1],arr[1][2]);
   printf("%c",2);                   //head first
   gotoxy(10,4);                          //body start first
   for(i=10;i<=52;i++) printf("%c",196);
   for(i=5;i<=16;i++){
   gotoxy(10,i); printf("%c",179);
   gotoxy(52,i); printf("%c",179);
   }
   gotoxy(10,16);
   for(i=10;i<=52;i++) printf("%c",196);
 c=getch();
 if(c=='w') goto w;
 if(c=='s') goto s;
 if(c=='d') goto d;
 if(c=='a') goto a;
 d:                                          //right
 z=1;
 while(z){
  z--;
  if(!kbhit()){
   clrscr();
   if(o==1){        //food start
   if(p==1){
   fn++;
   p=0;
   randomno();
   }
   gotoxy(m,n);
   printf("%c",3);
   }                            //food end
   gotoxy(10,4);                          //body start
   for(i=10;i<=52;i++) printf("%c",196);
   for(i=5;i<=16;i++){
   gotoxy(10,i); printf("%c",179);
   gotoxy(52,i); printf("%c",179);
   }
   gotoxy(10,16);
   for(i=10;i<=52;i++) printf("%c",196); //body       end
   for(i=1;i<=fn-1;i++)
  {
   gotoxy(arr[i][1],arr[i][2]);
   printf("%c",254);
  }
  if(arr[1][1]==50)
  {
   gotoxy(12,arr[1][2]);
   printf("%c",2);		  //master
  }
  else
  {
   gotoxy(arr[1][1]+2,arr[1][2]);
   printf("%c",2);		  //master
  }
  for(i=fn;i>=2;i--)
  {
   arr[i][1]=arr[i-1][1];
   arr[i][2]=arr[i-1][2];
  }
  if(arr[1][1]==50)
   arr[1][1]=12;
  else
   arr[1][1]=arr[1][1]+2;
  gotoxy(20,20);
  printf("points=%d",fn-1);
  if(fn==51){gotoxy(20,21); textcolor(2+BLINK); cprintf("HURREY! You won."); sleep(2); exit(0);}
   delay(speed);
   if(arr[1][1]==m&&arr[1][2]==n)
   p=1;
   if(arr[1][1]>=52) arr[1][1]=12;
   z++;
   for(i=2;i<=fn;i++){
    if(arr[1][1]==arr[i][1]&&arr[1][2]==arr[i][2]){
    gotoxy(10,18);
    textcolor(7+BLINK);
    cprintf("ohhhh! The snake bite ownself.");
    sleep(2);
    exit(0);
    }
   }
  }   //end of kbhit()
 }      //end of while()
 c=getch();
 if(c=='w') goto w;
 if(c=='s') goto s;
 if(c=='a') goto d;
 if(c=='p') getch();
 if(c=='x') exit(0);
 else goto d;
 s:                                              //downward
 z=1;
 while(z){
   z--;
  if(!kbhit()){
   clrscr();
   if(o==1){        //food start
   if(p==1){
   fn++;
   p=0;
   randomno();
   }
   gotoxy(m,n);
   printf("%c",3);
   }                  //food end
   gotoxy(10,4);                //body start
   for(i=10;i<=52;i++) printf("%c",196);
   for(i=5;i<=16;i++){
   gotoxy(10,i); printf("%c",179);
   gotoxy(52,i); printf("%c",179);
   }
   gotoxy(10,16);
   for(i=10;i<=52;i++) printf("%c",196);//body
   for(i=1;i<=fn-1;i++)
  {
   gotoxy(arr[i][1],arr[i][2]);
   printf("%c",254);
  }
  if(arr[1][2]==15)
  {
   gotoxy(arr[1][1],5);
   printf("%c",2);
  }
  else
  {
   gotoxy(arr[1][1],arr[1][2]+1);
   printf("%c",2);
  }
  for(i=fn;i>=2;i--)
  {
   arr[i][1]=arr[i-1][1];
   arr[i][2]=arr[i-1][2];
  }
  if(arr[1][2]==15)
   arr[1][2]=5;
  else
   arr[1][2]=arr[1][2]+1;
  gotoxy(20,20);
  printf("points=%d",fn-1);
   if(fn==51){gotoxy(20,21); textcolor(2+BLINK); cprintf("HURREY! You won."); sleep(2); exit(0);}
   delay(speed);
   if(arr[1][1]==m&&arr[1][2]==n)
   p=1;
   if(arr[1][2]>=16) arr[1][2]=5;
   z++;
   for(i=2;i<=fn;i++){
    if(arr[1][1]==arr[i][1]&&arr[1][2]==arr[i][2]){
    gotoxy(10,18);
    textcolor(7+BLINK);
    cprintf("ohhhh! The snake bite ourself.");
    sleep(2);
    exit(0);
    }
   }
  }          //end of kbhit
 }          //end of while
 c=getch();
 if(c=='d') goto d;
 if(c=='a') goto a;
 if(c=='w') goto s;
 if(c=='p') getch();
 if(c=='x') exit(0);
 else goto s;
 w:                                                  //upward
 z=1;
 while(z){
  z--;
  if(!kbhit()){
   clrscr();
   if(o==1){            //food start
   if(p==1){
   fn++;
   p=0;
   randomno();
   }
   gotoxy(m,n);
   printf("%c ",3);
   }
   gotoxy(10,4);                     //body start
   for(i=10;i<=52;i++) printf("%c",196);
   for(i=5;i<=16;i++){
   gotoxy(10,i); printf("%c",179);
   gotoxy(52,i); printf("%c",179);
   }
   gotoxy(10,16);
   for(i=10;i<=52;i++) printf("%c",196);//body
   for(i=1;i<=fn-1;i++)
  {
   gotoxy(arr[i][1],arr[i][2]);
   printf("%c",254);
  }
  if(arr[1][2]==5)
  {
   gotoxy(arr[1][1],15);
   printf("%c",2);		  //master
  }
  else
  {
   gotoxy(arr[1][1],arr[1][2]-1);
   printf("%c",2);		  //master
  }
  for(i=fn;i>=2;i--)
  {
   arr[i][1]=arr[i-1][1];
   arr[i][2]=arr[i-1][2];
  }
  if(arr[1][2]==5)
   arr[1][2]=15;
  else
   arr[1][2]=arr[1][2]-1;
   gotoxy(20,20);
   printf("points=%d",fn-1);
   if(fn==51){gotoxy(20,21); textcolor(2+BLINK); cprintf("HURREY! You won."); sleep(2); exit(0);}
   delay(speed);
   if(arr[1][2]==n&&arr[1][1]==m)
   p=1;
   if(arr[1][2]<=4) arr[1][2]=15;
   z++;
   for(i=2;i<=fn;i++){
    if(arr[1][1]==arr[i][1]&&arr[1][2]==arr[i][2]){
    gotoxy(10,18);
    textcolor(7+BLINK);
    cprintf("ohhhh! The snake bite ourself.");
    sleep(2);
    exit(0);
    }
   }
  }          //end of kbhit
 }              //end of while
 c=getch();
 if(c=='a') goto a;
 if(c=='d') goto d;
 if(c=='s') goto w;
 if(c=='p') getch();
 if(c=='x') exit(0);
 else goto w;
 a:                                                //left
 z=1;
 while(z){
  z--;
  if(!kbhit()){
   clrscr();
   if(o==1){                      //food start
   if(p==1){
   fn++;
   p=0;
   randomno();
   }
   gotoxy(m,n);
   printf("%c",3);
   }
   gotoxy(10,4);      //body start
   for(i=10;i<=52;i++) printf("%c",196);
   for(i=5;i<=16;i++){
   gotoxy(10,i); printf("%c",179);
   gotoxy(52,i); printf("%c",179);
   }
   gotoxy(10,16);
   for(i=10;i<=52;i++) printf("%c",196);  //body
  for(i=1;i<=fn-1;i++)
  {
   gotoxy(arr[i][1],arr[i][2]);
   printf("%c",254);
  }
  if(arr[1][1]==12)
  {
   gotoxy(50,arr[1][2]);
   printf("%c",2);		  //master
  }
  else
  {
   gotoxy(arr[1][1]-2,arr[1][2]);
   printf("%c",2);		  //master
  }
  for(i=fn;i>=2;i--)
  {
   arr[i][1]=arr[i-1][1];
   arr[i][2]=arr[i-1][2];
  }
  if(arr[1][1]==12)
   arr[1][1]=50;
  else
   arr[1][1]=arr[1][1]-2;
   gotoxy(20,20);
   printf("points=%d",fn-1);
   if(fn==51){gotoxy(20,21); textcolor(2+BLINK); cprintf("HURREY! You won."); sleep(2); exit(0);}
   delay(speed);
   if(arr[1][1]==m&&arr[1][2]==n)
   p=1;
   if(arr[1][1]<=10) arr[1][1]=50;
   z++;
   for(i=2;i<=fn;i++){
    if(arr[1][1]==arr[i][1]&&arr[1][2]==arr[i][2]){
    gotoxy(10,18);
    textcolor(7+BLINK);
    cprintf("ohhhh! The snake bite ourself.");
    sleep(2);
    exit(0);
    }
   }
  }         //end of kbhit
 }           //end of while
 c=getch();
 if(c=='w') goto w;
 if(c=='s') goto s;
 if(c=='d') goto a;
 if(c=='p') getch();
 if(c=='x') exit(0);
 else goto a;
 getch();
}
void randomno(){
 srand(time(NULL));
 m=rand()%50;
 if(m<11)
 m=m+11;
 if(m%2==0)
 m;
 else
 m++;
 n=rand()%16;
 if(n<=4)
 n=n+5;
 while(1){
 for(i=1;i<=fn;i++)
 if(arr[i][1]==m&&arr[i][2]==n)
 randomno();
 else
 goto g;
 }
 g:
}