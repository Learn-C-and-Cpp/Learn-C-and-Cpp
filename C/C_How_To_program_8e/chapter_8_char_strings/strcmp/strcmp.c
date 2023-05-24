
/* int strncmp(const char *s1, const char *s2);
 * int strncmp(const char *s1, const char *s2, size_t n);
 * compare s1 and s2
 */
#include<stdio.h>
#include<string.h>

int main()
{
    const char *s1 = "Happy Ney Year"; // initialize char pointer 
    const char *s2 = "Happy Ney Year"; // initialize char pointer 
    const char *s3 = "Happy Holidays"; // initialize char pointer 

    printf("%s%s\n%s%s\n%s%s\n%s%2d\n%s%2d\n%s%2d\n\n","s1 = ", s1, "s2 = ",s2, "s3 = ", s3,
        "strcmp(s1, s2) = ", strcmp(s1, s2) ,
        "strcmp(s1, s3) = ", strcmp(s1, s3) ,
        "strcmp(s3, s1) = ", strcmp(s3, s1) );
        

   printf("%s%2d\n%s%2d\n%s%2d\n",
        "strcmp(s1, s3, 6) = ", strncmp(s1, s3, 6) ,
        "strcmp(s1, s3, 7) = ", strncmp(s1, s3, 7) ,
        "strcmp(s3, s1, 7) = ", strncmp(s3, s1, 7) );



    
    return 0;
}