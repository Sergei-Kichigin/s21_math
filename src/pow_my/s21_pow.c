
#include "s21_pow.h"

long double pow(long double base, long double p) {
    if (p == 0) {
        return 1;    //Выход из рекурсии.
    }
    if (p>0){
        if (p==(long long) p && (long long) p % 2 == 0) {
            long double t = pow(base, p / 2);
            return pnorm(t * t);
        } else {
            return pnorm (pow(base, p - 1) * base);
        }
    }
    else{
        return pnorm (pow(base, p + 1) / base);
    }
}
long double pnorm(long double in){
    long long tmp=(long long) in;
    return (in>=0)? tmp%MOD + in-tmp : ((-tmp)%MOD - in+tmp)*(-1);
}