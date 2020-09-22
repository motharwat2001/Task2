#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,number,sum = 0;
  printf("please Enter the number:-\n");
  scanf("%d",&number);
  for (i=1;i<number;i+=1)
   { if (number%i==0)
      sum+=i;
   }
  if (sum == number)
    printf("%d is the perfect number",number);
  else
    printf("%d is not perfect number",number);

}
