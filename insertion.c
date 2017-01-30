123#include <stdio.h>
int main()
{
  int n, num[1000], i, j, t;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }
  for (i = 1 ; i <= n - 1; i++) {
    j = i;
    while ( j > 0 && num[j] < num[j-1]) {
      t = num[j];
      num[j]   = num[j-1];
      num[j-1] = t;
      j--;
    }
  }
  printf("Sorted list in ascending order:\n");
  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", num[i]);
  }
  return 0;
}
