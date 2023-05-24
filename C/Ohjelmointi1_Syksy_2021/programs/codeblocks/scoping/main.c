
#include<stdio.h>

void useLocal(void); // function prototype
void useStaticLocal(void); // function prototype
void useGlobal(void); // function prototype

int x = 1; // global variable

int main()
{
    int x = 5; // local variable to main
    printf("local x in outer scope of main is %d\n",x);

        {// start new scope
            int x = 7; // local variable to new scope
            printf("local x in inner scope of main is %d\n",x);

        }//end new scope  (x is destroyed )

        printf("local x in outer scope of main is %d\n",x);


        useLocal(); // use local has automatic local x
        useStaticLocal(); // useStaticLocal has static local x
        useGlobal(); // global x also retains its value
        useLocal(); //useLocal reninitilizes automatic local x
        useStaticLocal(); // useStaticLocal retains its prior value x
        useGlobal(); // global x also retains its value



        printf("\nlocal x in main is %d\n",x);


    return 0;

}

// useLocal reinitializes local variable x during each call
void useLocal(void)
{
    int x = 25; // initialize each time useLocal is called
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("\nlocal x in useLocal is %d before exiting useLocal\n", x);

}

// function useStaticLocal reinitializes static local variable x only the first time
// the function is called; value of x is saved between calls to this function
void useStaticLocal(void)
{
    static int x = 50; // initialized once
    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("\nlocal static x is %d on exiting useStaticLocal\n", x);

}


// function useGlobal modifies global variable x during each call
void useGlobal(void)
{
    //use global
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("\nglbal x is %d on exiting useGlobal\n", x);

}

