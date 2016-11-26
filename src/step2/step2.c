
#include <nm_auto_config.h>
#include <stdio.h>
#include <stdlib.h>

#if (USE_MYMATH)
    #include "sqrt.h"
#else
    #include <math.h>
		#define _sqrt_(x) (sqrt((x)))
#endif

#define MAJOR_VER ((STEP2_VERSION & 0xff00) > 8)
#define MINOR_VER (STEP2_VERSION & 0x00ff)

int main (int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stdout,"%s Version %d.%d\n", argv[0],
                MAJOR_VER,
                MINOR_VER);
        fprintf(stdout,"Usage: %s number\n",argv[0]);
        return 1;
    }
 
    double inputValue = atof(argv[1]);
    double outputValue = _sqrt_(inputValue);
 
    fprintf(stdout,"The square root of %g is %g\n",
            inputValue, outputValue);
    return 0;
}
