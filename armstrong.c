#include <stdio.h> //program  to see whether the no. is armstrong or not;
void main()        /* Armstrong number is a number ,which is the sum  of its
 own digits raised to the power of the number of digits*/
{
  int count = 0, num, mul = 1, result, rem;
  printf("Enter any number:\n");
  scanf("%d", &num);
  int q = num;
  while (q != 0)
  {
    q = q / 10;
    count++;
  }
  q = num;
  printf("The order of the number is %d\n", count);
  result = 0;
  int cnt = count;
  while (q != 0)
  {
    // rem=q%10;
    while (cnt != 0)
    {
      rem = q % 10;
      mul = mul * rem;
      cnt--;
    }
    result = result + mul;
    q /= 10;
    mul = 1;
    cnt = count;
    printf("The result is %d\n", result);
  }
  if (num == result)
    printf("The %d is an armstrong number", num);
  else
    printf("The %d is not an armstrong number", num);
}