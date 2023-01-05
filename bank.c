#include <stdio.h>
/*a program in C to perform bank account related operations
such as accept, display, withdraw and deposit money and check balance.*/
void display(int bank[][2], int n)
{ // the function to display the array/list
  int accno, i,m=0;
  printf("Enter Your account number for further process\n");
    scanf("%d", &accno);
    for (i = 0; i < n; i++)
    { 
        if (bank[i][0] == accno)
        {   m=0;
            printf("Your account number is %d\n", bank[i][0]);
            printf("Your account balance is %d\n", bank[i][1]);
            
            break;
        } 
        else
        { m=1;}
    }
    if (m==1)
    {
        printf("Your account number is not found\n");
    }
}
void withdraw(int bank[][2], int i)
{// the function to withdraw money from the account
    int acc, j, withdraw,m=0;
    printf("Enter the account number\n");
    scanf("%d",&acc);
    for (j = 0; j < i; j++)
    {
        if (acc == bank[j][0])
        {   m=0;
            printf("Enter the amount to withdraw\n");
            scanf("%d",&withdraw);
            if (withdraw > bank[j][1]) 
            {
                printf("Insufficient balance\n"); 
            }
            else
            {
                bank[j][1] = bank[j][1] - withdraw; // subtract the amount from the balance
              printf("The balance of %d is %d\n",acc,bank[j][1]);
              break;
            }
        } 
       else m=1;
    }
    if (m==1)
    { printf("Your account number is not found\n"); }
}
void deposit(int bank[][2], int i)
{ // the function to deposit money in the account
    int acc, j, deposit,m=0;
    printf("Enter the account number\n");
    scanf("%d",&acc);
    for (j = 0; j < i; j++)
    {
        if (acc == bank[j][0])
        {   m=0;
            printf("Enter the amount to deposit\n");
            scanf("%d", &deposit);
            bank[j][1] = bank[j][1] + deposit; //this will add the deposit amount to the balance
            printf("The balance of %d is %d\n",acc,bank[j][1]);
            break;
        } else m=1;
       
    }
    if (m==1)
    { printf("Your account number is not found\n"); }
}
void main()
{
    int choice, total_accounts=10, j,menu,k;
    int bank[10][2];
     printf("Enter the account number and balance for 10 accounts\n");
    for (j = 0; j < total_accounts; j++)
    {
        scanf("%d%d",&bank[j][0],&bank[j][1]);
    }
    menu:
    printf("Enter the choice\n");
    printf("1.Display\n2.Withdraw\n3.Deposit\n");
    scanf("%d",&choice);
   
    switch (choice)
    {
    case 1:
        display(bank,total_accounts);
         printf("press 1 to continue with menu or 0 for exit \n");
        scanf("%d",&k);
        if (k==1)
        {goto menu;}
        else break;
    case 2: printf("for the withdrawal process\n");
        withdraw(bank,total_accounts);
          printf("press 1 to continue with menu or 0 for exit \n");
        scanf("%d",&k);
        if (k==1)
        {goto menu;}
        else break;
    case 3:printf("for the deposition process\n");
        deposit(bank,total_accounts);
       printf("press 1 to continue with menu or 0 for exit \n");
        scanf("%d",&k);
        if (k==1)
        {goto menu;}
        else break;
   
    }
   
}
