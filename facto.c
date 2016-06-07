
#include <stdio.h>
int main()
{
    int n,i;
    unsigned long long int fact=1;
    scanf("%d",&n);
    if (n < 0)
        printf("Error");
    else
    {
        for(i=1; i<=n;i++)
        {
            fact=fact*i;  
        }
        printf("Factorial of %d = %llu",n,fact);
    }
    return 0;
}
