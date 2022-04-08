// passing structure variable as arguments

#include<stdio.h>

//define structure student
struct point
{
    int x;
    int y;
};
// prototype
void print(struct point p);

int main(void)
{
	struct point p1 = {23, 45};
	struct point p2 = {56, 90};
	
	print(p1);
	print(p2);

	return 0;
}
    
void print(struct point p)
{
	printf("%d %d\n", p.x, p.y);

}
