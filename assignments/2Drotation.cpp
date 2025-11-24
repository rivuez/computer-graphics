#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    float angle, rad;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("enter coordinates of triangle:\n");
    printf("(x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("(x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("(x3, y3): ");
    scanf("%d %d", &x3, &y3);

    printf("enter rotation angle in degrees: ");
    scanf("%f", &angle);

    // converting degrees to radians
    rad = angle * 3.14159 / 180.0;

    cleardevice();
    setbkcolor(WHITE);
    setcolor(DARKGRAY);
    outtextxy(100, 50, "triangle before rotation");

    // drawing original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();

    // rotation across origin
    int x1r = x1 * cos(rad) - y1 * sin(rad);
    int y1r = x1 * sin(rad) + y1 * cos(rad);

    int x2r = x2 * cos(rad) - y2 * sin(rad);
    int y2r = x2 * sin(rad) + y2 * cos(rad);

    int x3r = x3 * cos(rad) - y3 * sin(rad);
    int y3r = x3 * sin(rad) + y3 * cos(rad);

    cleardevice();
    outtextxy(100, 50, "triangle after rotation");

    // drawing rotated triangle
    line(x1r, y1r, x2r, y2r);
    line(x2r, y2r, x3r, y3r);
    line(x3r, y3r, x1r, y1r);

    getch();
    closegraph();
    return 0;
}