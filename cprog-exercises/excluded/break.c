#include <stdio.h>

int main ()
{
   int a;
   /* for loop execution */
   for( a = 1; a < 20; a++ )
   {
       if (a == 5 ) {break;}
	   printf("value of a: %d\n", a);
   }

   return 0;
}
