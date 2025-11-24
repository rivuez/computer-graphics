#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int main() {
    int gd=DETECT, gm, i;
    int color=15;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(WHITE);

    for(i=5; i<=200; i+=5) {
	if (color==0) {
	    color=15;
	}
	else {	setcolor(color--);   }
	circle(getmaxx()/2, getmaxy()/2, i);
	delay(500);
    }
    getch();
    closegraph();
    return(0);
}