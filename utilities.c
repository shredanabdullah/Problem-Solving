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
