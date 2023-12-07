#include "s21_ln.h"

// long double ln_my(double x){
//     long double tmp=1;
//     for(int i=1;EPSilon<tmp;i++){
//         if(i%2==0){
//             tmp=pow(x-1)
//         }                     //rewrite with pow_my
//         else{

//         }
//     }
// }

long double ln_my(double x){
    if(x<0)
        return NaN;
    long double power=0;
    for(;x/exp(power)>1;power++);
    if(power!=0)   x/=exp(power);
    long double present=x-ONE, result=0;
    for(double i=2.0;EPSilon<s21_fabs(present);i++){
        result+=present;
        present=present*(-ONE)*(i-ONE)*(x-ONE)/i;
    }
    return power+result;

}