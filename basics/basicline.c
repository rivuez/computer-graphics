
// draws a diagonal red line from right to left

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(WHITE);
    for (i=1; i<100; i++)
    {
        putpixel(250+i, 250-i, RED);
    }
    getch();
    closegraph();
    return 0;
}

/*
explanation: loop runs from i=1 to 99.
each iteration plots a pixel at (250+i,250-i) in red color ie.
when i=1 then pixel at (251, 249) is plotted.
when i=2 then pixel at (252, 248) is plotted.
when i=3 then pixel at (253, 247) is plotted.
and so on since x increases and y decreases
therefore, a diagonal red line is made of pixels starting near at (251, 249) and ending near (349, 151)
the slope of the line will be -1, which is perfectly diagonal.
*/
