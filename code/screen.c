#include<windows.h>
#include<stdio.h>

#include "screen.h"

void XoaManHinh()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

void Nocursortype()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

void mainScreen(int f)
{
	char c; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	printf("\t \t \t \t   1. Start\n");
	printf("\t \t \t \t 2. How to play\n");
	printf("\t \t \t \t  3. Options\n");
	printf(" \n \n \n \n \t \t  Press any key to start the game immediately");
	c = getch();
	system("cls");
	
	if (c == '2') // Providing Rules and Control
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
		printf("\t \t \t \t------ CONTROL ------\n \n");
		printf("\t \t \t \tUse UP, RIGHT, LEFT, DOWN button to control Pacman\n \n \n");
		printf("\t \t \t \t------ GAMEPLAY ------\n");
		printf("\t \t \t \tThere are 2 modes:\n");
		printf("\t \t \t \t1. Eat all the point on the map and unlock the BONUS STAGE\n");
		printf("\t \t \t \t2. Eat all the ghost in  and unlock the BONUS STAGE\n \n \n");
		printf("\t \t \t \t------ SCORE ------\n");
		printf("\t \t \t \tFor each point, you will get 50 points\n");
		printf("\t \t \t \tFor each ghost, you will get 200 points\n");
		printf("\t \t \t \tFor each point in the word 'BONUS', you will get 500 points\n \n \n");
		printf("\t \t \t \t------ BONUS STAGE ------\n");
		printf("\t \t \t \tAfter reached the max score of the first map, the door at the end of the map\n");
		printf("\t \t \t \tYou have 30s to eat the point of the BONUS STAGE\n \n");
		printf("\t \t \t \tPress E to return to main screen\n \n");
		printf("\t \t \t \tPress any button to start the game\n \n");
	
		c = getch();
		if(c == 'e') // back to mainscreen
		{
			system("cls");
			mainScreen(f);
		}
	}
	if (c == '3')    // Setting Level
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
		printf("\t \t \t \tThe default Level is 5\n");
		printf("\t \t \t \tWARNING !!! THE LOWER THE LEVEL, THE HARDER THE STAGE !!! \n");
		printf("\t \t \t \tChoose Level ( 1 => 5)\n");
		scanf("%d", &f);
		printf("\t \t \t \tPress E to return to main screen\n \n");
		printf("\t \t \t \tPress any button to start the game\n \n");
	
		c = getch();
		
		if(c == 'e')
		{
			system("cls"); // back to mainscreen
			mainScreen(f);
		}
		system("cls");
	}
	/*if (c == '1')                                       // Choose the mode
	{
		printf("\t \t \t \t Choose the mode")
		printf("\t \t \t \t 1. Ghost Escaping\n");
		printf("\t \t \t \t 2. Chasing Ghost\n");
	
	}*/
}


void drawBoard(char map[][sizex], int score)		//ve bang
{
	int x , y;
	for ( y = 0; y < sizey; y++)  
    {
    	for( x = 0; x < sizex; x++)
    	{
        	printf("%c", map[y][x]);
		}
		printf("\n");
	}
	
	printf("Score = %d", score); // Presented Score
	doorOpen();
}


