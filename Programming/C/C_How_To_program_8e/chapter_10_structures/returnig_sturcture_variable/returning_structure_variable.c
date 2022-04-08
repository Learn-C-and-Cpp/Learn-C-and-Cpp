// returning a structure

#include <stdio.h>

// define structure point
struct point // type struct point
{
        int x;
        int y;
};
// prototype

struct point edit(struct point p); // type struct
void print(struct point p);

int main(void)
{
        struct point p1 = {23, 45};
        struct point p2 = {56, 90};
        
        // passing
        p1 = edit(p1);
        p2 = edit(p2);
        
        // printing
        print(p1);
        print(p2);

        return 0;
}

// returning struct point 
struct point edit(struct point p)
{
        (p.x)++;
        p.y += 5;
        return p;
}

void print(struct point p)
{
        printf("%d %d\n", p.x, p.y);
}

