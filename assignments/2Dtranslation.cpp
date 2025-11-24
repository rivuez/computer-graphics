#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    int tx, ty;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("enter coordinates of triangle:\n");
    printf("(x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("(x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("(x3, y3): ");
    scanf("%d %d", &x3, &y3);

    printf("enter translation in x-direction (tx): ");
    scanf("%d", &tx);
    printf("enter translation in y-direction (ty): ");
    scanf("%d", &ty);

    cleardevice();
    setbkcolor(WHITE);
    setcolor(DARKGRAY);
    outtextxy(100,50, "triangle before translation");

    // drawing original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();

    // translating
    int x1t = x1 + tx;
    int y1t = y1 + ty;

    int x2t = x2 + tx;
    int y2t = y2 + ty;

    int x3t = x3 + tx;
    int y3t = y3 + ty;

    cleardevice();
    outtextxy(100, 50, "triangle after translation");

    // drawing translated triangle
    line(x1t, y1t, x2t, y2t);
    line(x2t, y2t, x3t, y3t);
    line(x3t, y3t, x1t, y1t);

    getch();
    closegraph();
    return (0);
}