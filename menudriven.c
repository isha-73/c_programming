#include <stdio.h>
void accept(int array[], int len)
{
    int i;
    printf("Enter the elements\n");
    for (i = 0; i < len; i++)
    {
     scanf("%d", &array[i]);

    }
} // this function is used to accept the elements in the array
void display(int array[], int len)
{
    int i;
    printf("The elements are: ");
    for (i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
} // this is the function to display the array
void sum(int array[], int len)
{
    int i, sum = 0;
    for (i = 0; i < len; i++)
    {
        sum = sum + array[i];
    }
    printf("The sum of the array is %d\n", sum);
} // this function is used to find the sum of the array
void search(int array[], int len, int num)
{
    int i, f = 0;
    for (i = 0; i < len; i++)
    {
        if (array[i] == num)
        {
            printf("The num is found at %d \n", i + 1);
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("The num is not found");
} // this function is used to search the key in the array
void minmax(int array[], int len)
{
    int i;
    int min = array[0];
    int max = array[0];
    for (i = 1; i < len; i++)
    {
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }
    printf("Minimum and maximum numbers are %d and %d", min, max);
}


void main()
{
    int array[100], len, num, i;
    printf("Enter the length of the array\n");
    scanf("%d", &len);
    accept(array, len); // to accept an array 
    display(array, len); // to print an array

    printf("for menu driven program\n");
    printf("1.Sum\n2.Search\n3.MinMax\n");

    printf("Enter your choice\n");
    scanf("%d", &i);
    switch (i)
    {
    
    case 1:
        sum(array, len);
        printf("if you want to continue press 1 for yes\n");
        scanf("%d", &i);
        if (i != 1)
            main();
    case 2:
        printf("\nEnter the num to be searched\n");
        scanf("%d", &num);
        search(array, len, num);
        printf("if you want to continue press 1 for yes\n");
        scanf("%d", &i);
        if (i != 1)
            main();

    case 3:
        minmax(array, len);
         printf("if you want to continue press 1 for yes\n");
        scanf("%d", &i);
        if (i != 1)
            main();
       else break;
    default:
        printf("Invalid choice");
    }
}

