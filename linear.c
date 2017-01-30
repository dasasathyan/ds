#include <stdio.h>
int main()
{
   int num[100], find, i, n, *ptr;
   ptr=&find;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   printf("Enter %d integer\n", n);
   for (i = 0; i < n; i++)
      scanf("%d", &num[i]);
   printf("Enter the number to find\n");
   scanf("%d", &find);
   for (i = 0; i < n; i++)
   {
      if (num[i] == find)
      {
         printf("%d is at the address %p\n", find, ptr);
         break;
      }
   }
   if (i == n)
      printf("%d cannot be found\n", find);
   return 0;
}
