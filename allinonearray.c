#include <stdio.h>
void main()
{
    int array[100], len, num, i, max, min, sum, search, f = 0, yes, j;
    printf("Enter the length of the array\n");
    scanf("%d", &len);
    printf("Enter the elements\n");
    for (i = 0; i < len; i++)
    {  scanf("%d", &array[i]); }
        printf("The elements are: ");
    for (i = 0; i < len; i++)
    {   printf("%d ", array[i]); }
        printf("\n");
    printf("for menu driven program\n1.Sum\n2.Search\n3.MinMax\n");
    printf("Enter your choice\n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        sum = 0;
        for (j = 0; j < len; j++)
        { sum = sum + array[j];}
        printf("The sum of the array is %d\n", sum);
        printf("if you want to continue press 1 for yes\n");
        scanf("%d", &yes);
        if (yes != 1)
            main();
    case 2:
        printf("\nEnter the num to be searched\n");
        scanf("%d", &num);

        for (j = 0; j < len; j++)
        {       if (array[j] == num)
            { printf("The num is found at %d \n", j + 1);
                f = 1;
                break;   }
     }
        if (f == 0)
            printf("The num is not found\n");
        printf("if you want to continue press 1 for yes\n");
        scanf("%d", &yes);
        if (yes != 1)
            main();
    case 3:
        min = array[0];
        max = array[0];
        for (j = 1; j < len; j++)
        {    if (array[j] > max)
                max = array[j];
            if (array[j] < min)
                min = array[j];   }
         printf("Minimum and maximum numbers are %d and %d\n", min, max);
        printf("if you want to continue press 1 for yes\n");
        scanf("%d", &yes);
        if (yes != 1)
            main();
            else break;
    default:
        printf("Invalid choice");
    }
}
