#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double cel,fah;
  char celsius [256];
  char* name = readline("Enter temperature in celsius: ");
  cel = atof (name);
  fah = cel * 9 / 5 + 32;
  printf ("%f° in Celsius is equivalent to %f° Fahrenheit." , cel, fah);

  return 0;
}