// Write a programe to findout wether the given alphabet is vowel or not
#include <stdio.h>
void main()
{
     char letter = ' ';

     printf("Enter value of letter ");
     scanf("%c", &letter);

     if (letter == 'a' || letter == 'e' || letter == 'o' || letter == 'i' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'O' || letter == 'I' || letter == 'U')
     {
          printf("It is vowel ");
     }
     else
     {
          printf("It is consonent ");
     }
}