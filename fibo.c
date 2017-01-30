#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number of elements you want\n" );
   scanf("%d",&n);

   printf("Fibonacci series\n1\n");
   fibo(n);

   return 0;
}

int fibo(int n)
{
  static int first=0,second=1,sum;
if(n>0){
        sum=first+second;
        first=second;
        second=sum;
        printf("%d\n",sum);
        //temp++;
        fibo(n-1);
}
}
