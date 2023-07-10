#include<stdio.h>
void tentimes(int *a)
{
  *a=*a*10;  
}
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d\n",&a);
    tentimes(&a);
    printf("10 times of the given number is %d\n",a);
    return 0;
}