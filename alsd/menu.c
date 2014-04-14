# include <stdio.h>
# include "alsd.h"

void setup()
{
  printf("LIGHTNING STRIKE DETECTOR\n");
  printf("RUN                  MENU\n");
}

void getkey(char key)
{
	switch (key)
	{
	case 's': printf("UP\n") ;break;
	case 'd': printf("DOWN\n");break;
	case 'a': printf("LEFT\n");break;
	case 'f': printf("RIGTH\n");break;
	default: break;
	}
}

void menu

int main()
{
	setup();
	while (1)
	{
		menu(getc(stdin));
	}
}



