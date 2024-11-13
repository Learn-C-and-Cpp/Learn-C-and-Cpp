// Include libraries

//XDCtools header file
#include<xdc/std.h> // include in every c code
#include<xdc/runtime/System.h>  //  System_printf

// my I2C
// UART
// TI Header enable task creation, Clock and TI Bios
#include<ti/sysbios/knl/Task.h>
#include<ti/sysbios/knl/Clock.h>
#include<ti/sysbios/BIOS.h>

// Include board header files - which board in use
#include "Board.h"

// Each task needs its own internal stack memory
#define STACKSIZE 512
Char myTaskStack[STACKSIZE];

// myTaskfunction definition
void myTaskFxn(UArg arg0, UArg arg1)
{
    // Task loop
    while (1)
    {
        System_printf("My arguments are %ld and %ld\n", arg0, arg1);
        System_flush();

        //delay
        Task_sleep(1000000L / Clock_tickPeriod);

    }
}

// FSM

int main(void)
{

    System_printf("Getting started");
    System_flush();

    // Initialize data structure related to the task for the application, implemented in
    Task_Params myTaskParams;
    Task_Handle myTaskHandle; // handle the task after creation

    // Initialize board
    Board_initGeneral();

    // Include the bus in the program
    // Bord_iniI2C();

    // Initialize task execution parameters
    Task_Params_init(&myTaskParams);
    //Assign stack memory to the task
    myTaskParams.stackSize = STACKSIZE;
    myTaskParams.stack = &myTaskStack;
    //Set the task's priority
    myTaskParams.priority = 2;
    // arguments for the task
    myTaskParams.arg0 = 127;
    myTaskParams.arg1 = 0xFFFF;

    // Create the task
    myTaskHandle = Task_create((Task_FuncPtr) myTaskFxn, &myTaskParams, NULL);
    if (myTaskHandle == NULL)
    {
        System_abort("Task creation failed");
    }

    // Greetings to the console
    System_printf("Hello main!\n");
    System_flush();

    // Start the program
    BIOS_start();

    return (0);

}

