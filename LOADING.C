#include<stdio.h>
#include<conio.h>
void main()
{
int c=30,r=10;
clrscr();
gotoxy(c,r);
textcolor(BLUE+BLINK);
cprintf("LOADING.............%c",2);
_setcursortype(_NOCURSOR);
r=19;
textcolor(GREEN);
for(c=15;c<=75;c++)
{
gotoxy(c,r);
cprintf("\xcd");
}
r=21;
for(c=15;c<=75;c++)
{
gotoxy(c,r);
cprintf("\xcd");
}
gotoxy(15,19);
cprintf("\xc9");
gotoxy(15,21);
cprintf("\xc8");
gotoxy(75,19);
cprintf("\xbb");
gotoxy(75,21);
cprintf("\xbc");
gotoxy(15,20);
cprintf("%c",186);
gotoxy(75,20);
cprintf("%c",186);
textcolor(RED);
r=20;
for(c=16;c<=74;c++)
{
gotoxy(c,r);
cprintf("\xdb");
delay(100);
}
getch();
}