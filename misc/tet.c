#define MACRO "this is a macros "
#include <unistd.h>
#include "%tet.h"

int main ()
{
printf("%s", "\0");
  return 0;
}