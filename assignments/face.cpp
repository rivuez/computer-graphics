#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	// face outline
	circle(250, 200, 100);

	//eyes
	circle(220,170,10); //left eye
	circle(280,170,10); //right eye

	//mouth v-shape
	line(220,230,250,250);
	line(250, 250, 280, 230);

	getch();
	closegraph();
	return(0);
}