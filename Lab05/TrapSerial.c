#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x){
  return exp(x);
}

void Trap(double a, double b, int n, double* resultado){
  double h, x;
  int i;
  *resultado = (f(a) + f(b))/2.0;
  h = (b-a)/n;
  for(i = 1; i <= n-1; i++){
    x = a + i*h;
    *resultado += f(x);
  }
  *resultado = *resultado * h;
}

int main(int argc, char* argv[]){
  double global_result = 0.0;
  double a, b;
  int n;
  printf("Insira o valor de a, b e n");
  scanf("%lf %lf %d", &a, &b, &n);
  Trap(a, b, n, &global_result);
  printf("Com n = %d trapezios, nossa estimativa para o integral de %f to %f = %.14e\n", n, a, b, global_result);
  return 0;
}