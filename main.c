#include <stdio.h>
#include "myMath.h"
double fun1(double x){
  return sub(add(Pow(x,3),Exp(x)),2);
}
double fun2(double x){
  return add(mul(x,3),mul(Pow(x,2),2));
}
double fun3(double x){
  double outcome=0;
  outcome=div(mul(Pow(x,3),4),5);
  outcome=sub(outcome,mul(x,2));
  return outcome;
}
int main(){
    double num=0;
    printf("Please enter a real number:\n");
    if (scanf("%lf", &num)!=1){
        printf("You entered unvalid number!\n");
    }
    else{
      printf("1) The value of f(x) = e^x + x^3 − 2 at the point %lf is:%0.4lf\n", num, fun1(num));
      printf("2) The value of f(x) =  3x + 2(X^2) at the point %lf is:%0.4lf\n", num, fun2(num));
      printf("3) The value of f(x) = (4(x^3))/5 -2x at the point %lf is:%0.4lf\n", num, fun3(num));
    }
    return 0;
}