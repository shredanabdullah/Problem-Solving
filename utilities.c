#include <stdio.h>

int readString(char *str){
  char character; int i=0;
  while((character=getchar())!='\n'){
    str[i]=character;
    i++;
  }
  str[i]='\0';
  return i;// Return the length of the string (excluding the null terminator)
}
/*
int main() {
  char input[100]; // Define a character array to store the input string
  printf("Enter a string: ");
  int length = readString(input); // Call the readString function to read the string
  printf("You entered: %s\n", input); // Print the input string
  printf("Length of the string: %d\n", length); // Print the length of the string
  return 0;
}
*/
