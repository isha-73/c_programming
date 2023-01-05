#include<stdio.h> //structure use 
struct car {
    char *name;
    float mileage;
    char *color;
    int seats;
} car1 , car2;
int main()
{ 
    /* car1.name = "Maruti";   
    car1.mileage = 12.5;
    car1.color = "red";
    car1.seats = 5;
    car2.name = "Hyundai";
    car2.mileage = 15.5;
    car2.color = "blue";
    car2.seats = 4;*/
    struct car car1 = {"Maruti",12.5,"red",5};
    // struct car car1 = {.mileage = 12.5, .name ="Maruti",.color=red",.seats=5}; //isko bolte designed initialization
    struct car car2 = {"Hyundai",15.5,"blue",4};
    printf(" for car1 \n name=%s , mileage= %f , color= %s , seats = %d\n",car1.name,car1.mileage,car1.color,car1.seats);
    printf(" for car2 \n name=%s , mileage= %f , color= %s , seats = %d\n",car2.name,car2.mileage,car2.color,car2.seats);   
} /* 
// use of structure tag
 //struct employee{ // structure tag is used to define the structure
 typedef struct employee // use of typeddef in structure to avoid big declaration
 { 
     int salary;
 } short_cut;
 int manager() 
 {
     //struct employee manager ;
        short_cut manager;
        manager.salary = 100000;
        if (manager.salary > 100000)
        {
            printf("manager is eligible for bonus \n");
        }
        else
        {
            printf("manager is not eligible for bonus \n");
        }
        return manager.salary;

 }
 int main() 
 {
     //struct employee emp1;
     //struct employee emp2;
        short_cut emp1,emp2;
        emp1.salary = 100000;
        emp2.salary = 200000;
        printf("emp1 salary is %d \n",emp1.salary);
        printf("emp2 salary is %d \n",emp2.salary);
        printf ("manager %d",manager());

 }*/