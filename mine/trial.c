#include <graphics.h>
#include <conio.h>


main() {
	int gd=DETECT, gm, i, steps;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	for(steps=0; steps < 5; steps++) {
		cleardevice();

		for(i=0; i < getmaxx(); i += 5) {
			line(getmaxx()/2, getmaxy()/2, i, 0);
			line(getmaxx()/2, getmaxy()/2, getmaxx(), i);
			line(getmaxx()/2, getmaxy()/2, i, getmaxy());
			line(getmaxx()/2, getmaxy()/2, 0, i);

			delay(5);
		}
	}

	getch();
	closegraph();
	return(0);
}