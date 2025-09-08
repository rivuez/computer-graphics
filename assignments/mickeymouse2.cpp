#include <graphics.h>
#include <conio.h>

main() {
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	//head
	circle(250,250,100); //main face

	//ears
	circle(150, 150, 60); //left ear
	circle(350, 150, 60); //right ear

	//eyes
	circle(220, 230, 20); //left eye(outer)
	circle(280, 230, 20); //right eye(outer)
	circle(220, 230,8); //left pupil
	circle(280, 230, 8); //right pupil

	//nose
	circle(250, 270, 15);

	//mouth (curved smile using lines)
	line(200, 300, 220, 320); //left curve
	line(220, 320, 280, 320); //bottom curve
	line(280, 320, 300, 300); //right curve

	//cheeks
	circle(200, 280, 10); //left cheek
	circle(300, 280, 10); //right cheek

	getch();
	closegraph();
	return(0);
}