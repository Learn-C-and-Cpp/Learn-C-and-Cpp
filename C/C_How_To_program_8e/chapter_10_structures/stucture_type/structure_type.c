// Using structure tag
#include <stdio.h>

struct employee // user defing type
{
    char *name;
    int age;
    int salary;
};

// determing manangers salary
int manager()
{
    struct employee manager;
    

    manager.age = 27;
    if (manager.age > 30)
    {
        manager.salary = 65000;
    }
    else
    {
        manager.salary = 55000;
    }
    return manager.salary;
}




struct car
{
    char model_year[50];
    char *engine;
    float mileage;    
    char fue_type[10];
    int  gearing;
    char registration_number[20];
};

// using typedef
// typedef existing_data_type  new_data_type


typedef struct car Car; 

int main(void)
{
    // struct employee emp1;
    // struct employee emp2;

    // printf("Enter the salary employee1");
    // scanf("%d", &emp1.salary);
    
    // printf("Enter the salary employee1");
    // scanf("%d", &emp2.salary);

    // printf("employee1 salary = %d\n",emp1.salary);
    // printf("employee1 salary = %d\n",emp2.salary);
    // printf("manager salary = %d\n",manager());

    // struct variable
//    Task todo[2];
//     printf("Enter employee tasks\n");
//     for (size_t i = 0; i < 2; ++i)
//     {
//         scanf("%s",&todo[i]);
//     }

//     printf("employee tasks\n");
//     for (size_t i = 0; i < 2; ++i)
//     {
//         printf("%s\n",&todo[i]);
//     }

   
    // struct car
    Car car1;
    Car car2;
    Car carArray[3];

    
    

    car1.engine = "1.4 L";
    printf("car1 engine %s\n", car1.engine);
    car2.engine = "1.6 L";
    printf("car2 engine %s\n", car2.engine);
    
    // input cars
    printf("Enter 3 cars \n");
    for (size_t i = 0; i < 3; ++i)
    {
        scanf("%s", carArray[i].model_year);
    }

    // output cars
    printf("print cars \n");
    for (size_t i = 0; i < 3; ++i)
    {
        printf("carArray[ ] = %s\n", carArray[i].model_year);
    }   
    
   return 0;
}

void display(struct  car  c)
{
    



}
