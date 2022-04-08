
/**/
#include <stdio.h>

int main()
{
	unsigned int counter  = 1; // initialize control variable

	unsigned int sum = 0;
	for (unsigned int i = 2; i <= 100; i += 2)
	{
		sum += i;
				
	}
	printf("%d", sum);

	return 0;
}
