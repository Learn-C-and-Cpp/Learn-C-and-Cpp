/*
 * myTaskLip.c
 *
 *  Created on: Nov 4, 2024
 *      Author: kensus
 */

// XDCtools Header files
#include <xdc/std.h>
#include <xdc/runtime/System.h>  // output with System_printf

#include<ti/sysbios/knl/Task.h> /*include Tasklib*/
#include <ti/sysbios/knl/Clock.h> // clock_tickPeriod
#include <ti/sysbios/BIOS.h>  /*Include Ti bioslib to start the program */

// include Board
#include "Board.h"

/*Each task needs its own internal stack memory */
#define STACKSIZE 512
Char myTaskStack[STACKSIZE];

/*Task implementation function */
Void myTaskFxn(UArg arg0, UArg arg1)
{
    // task loop
    while (1)
    {
        System_printf("My arguments are %ld and %ld\n", arg0, arg1);
        System_flush();

        // Go to sleep
        Task_sleep(1000000L / Clock_tickPeriod);

    }
}

int main()
{
    // Data structures related to tasks
    Task_Params myTaskParams;
    Task_Handle myTaskHandle;

    // Board initialization
    Board_initGeneral();

    // initialize task execution parameters
    Task_Params_init(&myTaskParams); // Passing a struct to a function
    //Assign stack memory to the task
    myTaskParams.stackSize = STACKSIZE;
    myTaskParams.stack = &myTaskStack;

    //Set the task's priority
    myTaskParams.priority = 2;
    //
    myTaskParams.arg0 = 127; // argument 1
    myTaskParams.arg1 = 0xFFFF; // argument 2

    // Create the task
    myTaskHandle = Task_create((Task_FuncPtr) myTaskFxn, &myTaskParams, NULL);
    if (myTaskHandle == NULL)
    {
        System_abort("Task creation failed");

    }

    // Print greetings to the console
    System_printf("Hello world!\n");
    System_flush();

    // Start the program
    BIOS_start();

    return 0;

}


