#include<stdio.h>
int main()
{
   int num[100], n, i, j, temp, swap;
   printf("Enter number of elements\n");
   scanf("%d", &n);
   printf("Enter %d integers\n", n);
   for ( i = 0 ; i < n ; i++ )
      scanf("%d", &num[i]);
   for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      temp = i;

      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( num[temp] > num[j] )
            temp = j;
      }
      if ( temp!= i )
      {
         swap = num[i];
         num[i] = num[temp];
         num[temp] = swap;
      }
   }
   printf("Sorted list in ascending order:\n");
   for ( i = 0 ; i < n ; i++ )
      printf("%d\n", num[i]);
   return 0;
}
