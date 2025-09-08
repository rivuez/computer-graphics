#include <graphics.h>
#include <conio.h>

int main() {
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	//head
	circle(250,250,100); //main face

	//ears
	circle(160, 160, 50); //left ear
	circle(340, 160, 50); //right ear

	//eyes
	circle(220, 230, 15); //left eye
	circle(280, 230, 15); //right eye
	circle(220, 230, 5) //left pupil
	circle(280, 230, 5); //right pupil

	//nose
	circle(250, 270, 12); //small circle for nose

	//mouth
	line(220, 300, 280, 300); //horizontal base of mouth
	line(220, 300, 250, 320); //left curve
	line(250, 320, 280, 300); //right curve

	getch();
	closegraph();
	return(0);
}