#include <nm_auto_config.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAJOR_VER ((STEP1_VERSION & 0xff00) >> 8)
#define MINOR_VER (STEP1_VERSION & 0x00ff)

int main (int argc, char *argv[]) {
  if (argc < 2) {
      fprintf(stdout,"%s Version %d.%d\n",
              argv[0],
              MAJOR_VER,
              MINOR_VER);
      fprintf(stdout,"Usage: %s number\n",argv[0]);
      return 1;
  }
  double inputValue = atof(argv[1]);
  double outputValue = sqrt(inputValue);
  fprintf(stdout,"The square root of %g is %g\n",
          inputValue, outputValue);
  return 0;
}
