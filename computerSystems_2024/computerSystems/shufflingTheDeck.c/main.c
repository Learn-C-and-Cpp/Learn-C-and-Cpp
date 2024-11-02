#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>



void shuffle(uint8_t *list, uint16_t list_size);
//void swap( int *a, int *b);

int main()
{

// init array
    uint8_t list[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

// int list[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };


// init srand
    srand(time(NULL));


// print
    printf("Before shuffle: ");
    for(int i = 0; i < 8; i++)
    {
        printf("%d ",list[i]);
    }
    puts("");

// shuffle
    shuffle(list, 8);https:

// print after shuffle
    printf("After shuffle: ");
    for(int i = 0; i < 8; i++)
    {
        printf("%d ",list[i]);
    }


    return 0;
}

//swap
//void swap( int *element1, int *element2)
//{
//    int temp = *element1;
//    *element1 = *element2;
//    *element2 = temp;
//}

void shuffle(uint8_t *list, uint16_t list_size)
{
    for(uint16_t i = 0; i < list_size; i++)
    {
        uint16_t  randIdex = rand() % 8;

        uint16_t temp = list[i];
        list[i] = list[randIdex];
        list[randIdex] = temp;
    }
}

