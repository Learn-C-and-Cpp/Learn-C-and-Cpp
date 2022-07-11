#include <stdio.h>
#include <stdlib.h>

typedef struct Point 
{
    double x;
    double y;
}Point;

//typedef struct Point Point;

// Forward function declaration
void Point_print(const Point* self);
Point add(Point p1, Point p2);
int main(void)
{ 
    // Declare a struct Point variable
    Point a = {1.0, 2.0};
    Point b = {3.0, 4.0};
   
    // add values
    Point c = add(a, b);
    printf("%f %f %f", a.x, b.x, c.x);
   // aPoint.x = 1.0;
   // aPoint.y = 2.0;

    //print it values
    puts("");
    Point *aPoint;
    aPoint =&a;
    aPoint->x = 5;
    
    Point_print(&a);
    return 0;
}

// add points
Point add(Point p1, Point p2)
{
    p1.x += p2.x; // 4
    p1.y += p2.y; // 6
    return p1;
}

void Point_print(const Point * self)
{
    //printf("(%f, %f)\n", (*self).x, (*self).y);
    
    printf("(%f, %f)\n", self->x, self->y);
}