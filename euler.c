#include "euler.h"

unsigned long long Problem_1(const int value_,
   const unsigned int* multiplies_,
   const unsigned int size_)
{
   unsigned long long sum = 0;

   for (unsigned int number = 0; number < value_; ++number)
   {
      for (unsigned int i = 0; i < size_; ++i)
      {
         if (number % multiplies_[i] == 0)
         {
            sum += number;
            break;
         }
      }
   }

   return sum;
}
