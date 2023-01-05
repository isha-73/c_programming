#include<stdio.h>
void main()
{
    int quant,exp,price;
    printf("ENter the quantity u purchased \n");
    scanf("%d",&quant);
    printf("The price of an article is \n");
    scanf("%d",&price);
    if(quant > 1000)
    {
        printf("You will get 10 percent discount\n");
        price=price -0.1*price;
     printf("Discounted price is %d\n",price);
    }

    exp=price*quant;
    printf("%d is the total expense",exp);

}