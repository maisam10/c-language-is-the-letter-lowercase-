#include <stdio.h>
#include <ctype.h>

int main()
{
  
  char letter;
  printf("Enter the letter");
  
  scanf("%c",&letter);
  if (islower(letter)){
    printf("Yes the letter enterd is lowercase :");
    }
  else {
    printf("letter entered is not a lowercase");
  }
  
 
  return 0;
  }