#include <stdio.h>
#include <conio.h>
#include <graphics.h>

main() {
	int gd=DETECT, gm, i;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	setbkcolor(LIGHTBLUE);
	setcolor(YELLOW);
	for(i=0; i<=30; i+=10)
	{
		line(100+i, 100+i, 300-i, 100+i);
		line(100+i, 200-i, 300-i, 200-i);
		line(100+i, 100+i, 100+i, 200-i);
		line(300-i, 100+i, 300-i, 200-i);
	}
	getch();
	closegraph();
	return(0);
}