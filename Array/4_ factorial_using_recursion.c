#include <stdio.h>

int fact(int);

main() 
{
    int x, ans;
    
    printf("Enter any number: ");
    scanf("%d", &x);
    
    ans = fact(x);
    
    printf("Factorial of %d is %d\n", x, ans);
}

int fact(int n) 
    {
    int i, f = 1;
    
    for (i = n; i >= 1; i--) {
        f = f * i;
    }
    return f;
    }

