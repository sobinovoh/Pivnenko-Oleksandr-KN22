#include <math.h>
#define PI 3.1415

float s_calculation(int x, int y, int z){
    float pow_res = pow(2*z + 1, x);

    float sqrt_res = sqrt(abs(y - ((float)1/(float)2) * z));

    float S = pow_res - sqrt_res + z + PI;

    return S;
}

