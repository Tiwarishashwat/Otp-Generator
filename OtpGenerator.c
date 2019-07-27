// C program for generating a otp

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <string.h>
// Generates and prints 'count' random
// numbers in range [lower, upper].

int printRandoms(int * arr, int size, int lower, int upper, int count)

{

 int num;

for (int i = 0; i < count; i++)
{
 num = (rand() % (upper - lower + 1)) + lower;

arr[i]=num;
}
}

// Driver code

int main()

{
 int arr[5];
int lower = 0, upper =62, count = 6;
char otp[7];
char letter;
char str[64]= "abcdefghijklmnopqurstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int n=strlen(str);

printf("Your Otp is:\t");
// Use current time as
// seed for random generator
srand(time(0));

  printRandoms(arr, 5, lower, upper, count);

  for(int i = 0; i < 6; i++)
{
    letter=str[arr[i]];
    otp[i]=letter;
}
 printf("%s",otp);
return 0;


}
