/* using command line arguments main(int argc, char *argv[])
    int argc - receives the numbe of cammand-line arguments that the user has entered
    char *argv[] - an arry of strings in which the actual arguments are stored
  * common use of command-line arguments include passing options and passing
  filenames to a program
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    // check number of command-line arguments
    if (argc != 3)
    {
        puts("Usage: cmdLineArgs infile outfile");
    }
    else
    {
        FILE *inFilePtr; // input file pointer

        // try to open the input file
        if ((inFilePtr = fopen(argv[1], "r")) != NULL)
        {
            FILE *outFilePtr; // output file pointer

            // try to open the output file
            if ((outFilePtr = fopen(argv[2], "w")) != NULL)
            {
                int c; // holds characters read from souce file

                // read and output characters
                while ((c = fgetc(inFilePtr)) != EOF)
                {
                    fputc(c, outFilePtr);
                }

                fclose(outFilePtr); // close the output file
            }
            else // output file could not be opened
            {
                printf("File \"%s\" could not be opened\n", argv[2]);
            }
            fclose(inFilePtr);
        }
        else // input file could not be opened
        {
            printf("File \"%s\" could not be opened\n", argv[1]);
        }
    }
    return 0;
}
