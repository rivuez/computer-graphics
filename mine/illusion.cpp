#include <stdio.h>
#include <conio.h>
#include <graphics.h>

main() {
	int gd=DETECT, gm, i;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	setbkcolor(BLUE);
	setcolor(YELLOW);
	for(i=0; i<=getmaxx(); i+=5)
	{
		line(0+i, 0, getmaxx()-i, getmaxy());
	}
	getch();
	closegraph();
	return(0);
}