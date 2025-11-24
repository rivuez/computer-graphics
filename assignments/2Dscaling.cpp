#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    int sx, sy;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("enter coordinates of triangle:\n");
    printf("(x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("(x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("(x3, y3): ");
    scanf("%d %d", &x3, &y3);

    printf("enter scaling factor in x-direction (sx): ");
    scanf("%d", &sx);
    printf("enter sacling factor in y-direction (sy): ");
    scanf("%d", &sy);

    cleardevice();
    setbkcolor(WHITE);
    setcolor(DARKGRAY);
    outtextxy(100,50, "triangle before scaling");

    // drawing original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();

    // scaling
    int x1s = x1 * sx;
    int y1s = y1 * sy;

    int x2s = x2 * sx;
    int y2s = y2 * sy;

    int x3s = x3 * sx;
    int y3s = y3 * sy;

    cleardevice();
    outtextxy(100, 50, "triangle after scaling");

    // drawing scaled triangle
    line(x1s, y1s, x2s, y2s);
    line(x2s, y2s, x3s, y3s);
    line(x3s, y3s, x1s, y1s);

    getch();
    closegraph();
    return (0);
}