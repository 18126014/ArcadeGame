#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <MMSystem.h>

#include "intro.h"

void introPacman()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	PlaySound("pacman_beginning.wav", NULL, SND_ASYNC);
	printf("       ###############          ==          ==  ==          ==  ==  ============  ==========  ==========\n");
	printf("      ##################        ==          ==  ====      ====  ==  ============  ==========  ==       ==\n");
	printf("    #######################     ==          ==  == ==    == ==  ==       ==       ==          ==        ===\n");
	printf("  ##############   ###########  ==          ==  ==  ==  ==  ==  ==       ==       ==          ==         ===\n");
	printf("##############################  ==          ==  ==   ====   ==  ==       ==       ==========  ==          ==\n");
	printf("#######################         ==          ==  ==          ==  ==       ==       ==          ==         ===\n");
	printf("####################            ==          ==  ==          ==  ==       ==       ==          ==        ===\n");
	printf("################                ==========  ==  ==          ==  ==       ==       ==========  ==       ==\n");
	printf("##############                  ==========  ==  ==          ==  ==       ==       ==========  ==========\n");
	printf("############                    \n");
	printf("##########                      ==========  =========      ==  ==========  ==    ========    ===       ==\n");
	printf("##############                  ==========  ==      ==     ==  ==========  ==   ==      ==   ====      ==\n");
	printf("####################            ==          ==       ===   ==      ==      ==  ==        ==  == ==     ==\n");
	printf("########################        ==          ==        ===  ==      ==      ==  ==        ==  ==  ==    ==\n");
	printf("############################    ==========  ==         ==  ==      ==      ==  ==        ==  ==   ==   ==\n");
	printf(" #############################  ==          ==        ===  ==      ==      ==  ==        ==  ==    ==  ==\n");
	printf("    #######################     ==          ==       ===   ==      ==      ==  ==        ==  ==     == ==\n");
	printf("      ####################      ==========  ==      ==     ==      ==      ==   ==      ==   ==      ====\n");
	printf("        ################        ==========  =========      ==      ==      ==    =======     ==       ===\n \n \n");
	printf("\t \t \t \tPress any key to continue");
	getch();
	system("cls");	
}

