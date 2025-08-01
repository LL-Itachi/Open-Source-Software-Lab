#include <stdio.h>
int main()
{
    int num;
    int rev=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num>0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    printf("Reversed Number : %d",rev);
}
