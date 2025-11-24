#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    int max;
    int y1, y2, y3;
    int x1, x2, x3;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setbkcolor(WHITE);
    cleardevice();

    max = getmaxy();

    y1 = max - 50;
    y2 = max - 100;
    y3 = max - 150;

    x1 = 150;
    x2 = 300;
    x3 = 450;

    while (!kbhit()) {       // animation will run until user presses any key
        cleardevice();

        // red balloon
        setcolor(RED);
        circle(x1, y1, 25);
        line(x1, y1 + 25, x1, y1 + 80);

        // blue balloon
        setcolor(BLUE);
        circle(x2, y2, 25);
        line(x2, y2 + 25, x2, y2 + 80);

        // green balloon
        setcolor(GREEN);
        circle(x3, y3, 25);
        line(x3, y3 + 25, x3, y3 + 80);

        // flying balloons upward
        y1 -= 2;
        y2 -= 2;
        y3 -= 2;

        if (y1 < -50) y1 = max;
        if (y2 < -50) y2 = max;
        if (y3 < -50) y3 = max;

        delay(50);
    }

    getch();
    closegraph();
    return 0;
}
