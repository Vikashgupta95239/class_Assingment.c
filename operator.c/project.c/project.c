#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>

/*************Variables**************/
struct members
{
	char id[10];
	char name[10];
	char mdate[10];
	char d[10];
	char dob[10];
	char bid[10];
	char bname[10];
	int qt;
	float fee;
};
/*************Functions()******************/
void screen();
void Main_Menu(void);
void password(void);
void Member(void);
void Display(void);
void Stock(void);
void BDisplay(void);
void BIssue(void);
void BReturn(void);
void BScrape(void);
void Memberone(void);
void Bookone(void);
void Remove(void);
void BISummary(void);
void RSummary(void);















//CODES OF SCREEN LAYAOUT FUNCTION:
void screen(void)
{
	int i;
	for(i=3;i<=75;i+=2)
	{
		gotoxy(i,1);
		textcolor(YELLOW);
		cprintf("@");
		gotoxy(i,25);
		cprintf("@");
	}
	for(i=1;i<=25;i++)
	{
		gotoxy(3,i);
		textcolor(YELLOW);
		cprintf("@");
		gotoxy(75,i);
		cprintf("@");
	}

	 for(i=6;i<=71;i+=2)
	{
		gotoxy(i,2);
		textcolor(CYAN);
		cprintf("*");
		gotoxy(i,24);
		cprintf("*");
		gotoxy(i,5);
		textcolor(BLUE);
		cprintf("=");
	}
	for(i=2;i<=24;i++)
	{
		gotoxy(6,i);
		textcolor(BROWN);
		cprintf("*");
		gotoxy(72,i);
		cprintf("*");
	 }
	gotoxy(27,3);
	textcolor(RED);
	cprintf("LIBRARY MANAGEMENT SYSTEM");
	gotoxy(29.5,4);
	textcolor(GREEN);
	cprintf("Sinha Library Chapra");
}










