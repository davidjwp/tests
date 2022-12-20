#include <stdio.h>
#define MACRO "this is a macros "
#include <unistd.h>


int main ()
{
  char  *i = "hello";
write (1,MACRO i,50);
  return 0;
}