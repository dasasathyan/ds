#include<stdio.h>
int main(){
int no[100], n, i, j, temp;
 printf("Enter number of elements\n");
 scanf("%d",&n);
 printf("Enter %d integers\n",n);
 for (i=0;i<n;i++){
   scanf("%d", &no[i]);
}
 for (i=0;i<(n-1);i++)
 {
   for (j=0;j<n-i-1;j++)
   {
     if (no[j] > no[j+1])
     {
       temp    = no[j];
       no[j]   = no[j+1];
       no[j+1] = temp;
     }
   }
 }
 printf("Sorted list in ascending order:\n");
 for ( i = 0 ; i < n ; i++ )
    printf("%d\n", no[i]);
}
