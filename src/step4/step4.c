
#include <nm_auto_config.h>
#include <stdio.h>
#include <stdlib.h>

#define MAJOR_VER ((STEP4_VERSION & 0xff00) > 8)
#define MINOR_VER (STEP4_VERSION & 0x00ff)

#if (NM_HAVE_EXP2_FN)
	#include <math.h>
#else

#define square(x) ((x)*(x))

long exp_iter(long a b n) {
    if (0 == n) return a;
    else if (0 == (n & 1)) return exp_iter(a, square(b), n/2);
    else return exp_iter(a*b, b, n-1);
}

long exp2(long n) {
    return exp_iter(1, 2, n);
}

#endif
 
int main (int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stdout,"%s Version %d.%d\n", argv[0],
                MAJOR_VER,
                MINOR_VER);
        fprintf(stdout,"Usage: %s number\n",argv[0]);
        return 1;
    }

    double inputValue = atof(argv[1]);
  	double outputValue = exp2(inputValue);

    fprintf(stdout,"The exp 2 of %g is %g\n",
            inputValue, outputValue);
    return 0;
}
