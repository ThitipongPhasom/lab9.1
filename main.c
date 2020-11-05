#include <stdio.h>
long SumNum(long n);
int main()
{
 long n,sum;
 printf("Enter number : ");
 scanf("%ld",&n);
 sum = SumNum(n);
 printf("Summation of number : %d\n",sum);
 return 0;
}
long SumNum(long n)
{
 long sum=0;
 while (n>0)
 {
 sum = sum + (n%10);
 n /= 10;
 }
 return sum;
}