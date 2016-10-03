#include<stdio.h>

int main(void)
{
  int a, b, c;

  printf("Enter two numbers to add\n");
  scanf("%d%d",&a,&b);

  c = add(a,b);
  printf("Sum of entered numbers = %d\n",c);
}

int add(int a, int b)
{
   int c;

   c = a + b;
   return(c);
}

