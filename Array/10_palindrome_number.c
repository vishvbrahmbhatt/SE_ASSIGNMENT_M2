#include <stdio.h>

int Palindrome(int num) 
{
    int rev = 0,orig = num;

    for (; num != 0; num /= 10) 
	{
       rev = rev * 10 + num % 10;
    }
    return orig == rev;
}
main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Palindrome(num)) 
    printf("%d is a palindrome number.\n", num);

    else 
    printf("%d is not a palindrome number.\n", num);

}
