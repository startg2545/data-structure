#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()

{

char sec,i;

clrscr();

printf("Program Timer\n");

printf("Enter Time[Sec] = ");

scanf("%d",&sec);

for (i=0;i<=sec ; i++)

{

gotoxy(35,13);

printf("Counter = [%.2d]",i);

delay(500);

}

gotoxy(37,15;

printf("Gat UP! \a\a\a");

getch();

}
