

#include <stdio.h>

int main()

{

int n, i;

long long factorial = 1;

printf("Enter an integer: ");

scanf("%d", &n);

if (n < 0)

printf("Error! Factorial of a negative number doesn't exist.");

else

{

for (i = 1; i <= n; ++i)

{

factorial *= i;

}

printf("Factorial of %d = %lld", n, factorial);

}

return 0;

}

20. C program to check whether a number is palindrome or not.

#include <stdio.h>

int main()

{

int n, reversedN = 0, remainder, originalN;

printf("Enter an integer: ");

scanf("%d", &n);

originalN = n;

// reversed integer is stored in reversedN

while (n != 0)

{

remainder = n % 10;

reversedN = reversedN * 10 + remainder;

n /= 10;

}

// palindrome if originalN and reversedN are equal

if (originalN == reversedN)

printf("%d is a palindrome.", originalN);

else

printf("%d is not a palindrome.", originalN);

return 0;

}
