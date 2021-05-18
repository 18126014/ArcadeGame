#include <conio.h>

#include "keyboard.h"

int KeyPress()
{
	return kbhit();
}

int getKey()
{
	int code = getch();
	switch(code)//score
	{
		case 0x4b: return KEY_LEFT;
		case 0x4d: return KEY_RIGHT;
		case 0x50: return KEY_DOWN;
		case 0x48: return KEY_UP;
	}
	
	return 0;
}

int isnormchar(int key)
{
	return 0 < key && key < 256;
}

