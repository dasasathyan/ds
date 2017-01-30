#include<stdio.h>
int main() {

 int n, a[30], search, i, j, mid, top, bottom,*ptr;
 printf("Enter the number of elements\n");
 scanf("%d", &n);
 printf("Enter the %d elements in sorted order\n", n);
 for (i = 0; i < n; i++) {
  scanf("%d", &a[i]);
 }
 printf("\nEnter the item to  search\n");
 scanf("%d", &search);
 bottom = 1;
 top = n;
 do {
  mid = (bottom + top) / 2;
  if (search < a[mid])
   top = mid - 1;
  else if (search > a[mid])
   bottom = mid + 1;
 } while (search != a[mid] && bottom <= top);

 if (search == a[mid]) {
   ptr=&mid;
  printf("%d is found in the address %p\n",search,ptr);
 } else {
  printf("%d is not found\n", search);
 }
 return 0;
}
