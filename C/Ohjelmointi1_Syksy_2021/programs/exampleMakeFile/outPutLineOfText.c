// out put a line of text
#include<stdio.h>

//function main begins program execution
int main()
{
	unsigned int count = 1;// initilize count
	while( count <= 10)
	{
		puts(count % 2 ?"****" : "+++++++");
		++count;// increment count
	}// end while

	// pre vs post decrement
	int x = 5;
	
	printf("x = %d\n", x);
	
	printf("++x = %d\n", ++x);
	printf("x = %d\n", x);
	
	printf("x = %d\n", x);
	printf("x++ = %d\n", x++);
	printf("x = %d\n", x);

	return 0;
}// end function main
