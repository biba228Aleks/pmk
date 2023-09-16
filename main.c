#include <stdio.h>
#include "functions.h"
#include "euler.h"

#define SIZE 2

int main()
{
   int array[SIZE];

   for (unsigned int i = 0; i < SIZE; ++i)
      scanf_s("%d", &array[i]);

   printf("%llu\n", Problem_1(1000, array, SIZE));
   
   return 0;
}