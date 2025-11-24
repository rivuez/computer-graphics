#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void axes(int ox, int oy, int maxx, int maxy) {
    setcolor(DARKGRAY);
    line(0, oy, maxx, oy); // x-axis
    line(ox, 0, ox, maxy); // y-axis
    outtextxy(ox + 5, 5, "y");
    outtextxy(maxx - 20, oy + 5, "x");
}

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    int option;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // calculating center of the screen
    int ox = getmaxx() / 2;
    int oy = getmaxy() / 2;

    printf("enter coordinates of triangle:\n");
    printf("(x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("(x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("(x3, y3): ");
    scanf("%d %d", &x3, &y3);

    printf("\nreflection options:\n");
    printf("1. reflect about x-axis\n");
    printf("2. reflect about y-axis\n");
    printf("3. reflect about origin\n");
    printf("enter your choice [1 or 2 or 3]: ");
    scanf("%d", &option);

    cleardevice();
    setbkcolor(WHITE);

    // drawing axes so that origin is visible
    axes(ox, oy, getmaxx(), getmaxy());

    // drawing original triangle
    line(ox + x1, oy - y1, ox + x2, oy - y2);
    line(ox + x2, oy - y2, ox + x3, oy - y3);
    line(ox + x3, oy - y3, ox + x1, oy - y1);
    outtextxy(10, 10, "triangle before reflection");

    getch();

    // reflection
    int x1r, y1r, x2r, y2r, x3r, y3r;

    if (option == 1) {            // reflect across x-axis,, so (x, y) becomes (x, -y)
	x1r = x1;    y1r = -y1;
	x2r = x2;    y2r = -y2;
	x3r = x3;    y3r = -y3;
    }

    else if (option == 2) {       // reflect across y-axis,, so (x, y) becomes (-x, y)
	x1r = -x1;   y1r = y1;
	x2r = -x2;   y2r = y2;
	x3r = -x3;   y3r = y3;
    }

    else if (option == 3) {       // reflect across origin,, so (x, y) becomes (-x, -y)
	x1r = -x1;   y1r = -y1;
	x2r = -x2;   y2r = -y2;
	x3r = -x3;   y3r = -y3;
    }

    else {
	outtextxy(10, 30, "invalid option. kindly enter again.");
	getch();
	closegraph();
	return 0;
    }

    setbkcolor(WHITE);
    cleardevice();
    axes(ox, oy, getmaxx(), getmaxy());
    outtextxy(10, 10, "triangle after reflection");

    // drawing the original traingle
    line(ox + x1, oy - y1, ox + x2, oy - y2);
    line(ox + x2, oy - y2, ox + x3, oy - y3);
    line(ox + x3, oy - y3, ox + x1, oy - y1);

    // drawing the reflected triangle
    setcolor(RED);
    line(ox + x1r, oy - y1r, ox + x2r, oy - y2r);
    line(ox + x2r, oy - y2r, ox + x3r, oy - y3r);
    line(ox + x3r, oy - y3r, ox + x1r, oy - y1r);

    getch();
    closegraph();
    return 0;
}
