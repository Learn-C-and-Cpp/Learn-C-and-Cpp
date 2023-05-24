/*strcat(char *s1, const char *s2)
 *strncat(char *s1, const char *s2, size_t n)
 *append string s2 into array s1. The value of s1 is returned.
 */

#include <stdio.h>  // std I/O functions:
#include <string.h> // string manipulation: strcpy()
#include <ctype.h>  // character Handling
#include <stdlib.h> // string conversion functions



int main()
{


	char s1[20] = "Happay ";  // initialize character array
    	char s2[] = "New year "; // initialize character array
    	char s3[40] = "";       // initialize character array to empty

	// copy contents of y into x
    	printf("s1 = %s\ns2 = %s\n", s1, s2);

	// concatnate s2 to s1
	printf("strcat(s1, s2) = %s\n", strcat(s1, s2));
	
	/* concatnate first 6 characters of s1 and s3. 
	 * Place '\0' after the last character 
	 */
	
	printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 7));
	
	printf("s3 = %s\n", s3);
	//s3[40-1] = '\0';

	// concatenate s1 to s3
	printf("strcat(s3, s1) = %s\n", strcat(s3, s1));
	

    return 0;
}
