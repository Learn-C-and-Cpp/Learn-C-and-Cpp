//print 1 - 20 using a while loop only five integers per line

#include<stdio.h>
int main()
{
	unsigned int x = 1;

	while( x <= 20 )
	{
		//printf("%d", x);
	
		if(x % 5 == 0)
		{
			//puts(" ");
			printf("%u\n", x);
		}
		else
		{
			printf("%u\t", x);
		
		}
	
	
	 ++x;
	}

	return 0;
}
