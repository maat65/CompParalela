#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double fatorial(int n){
  if(n == 0)
    return 1;
  else
    return (n * fatorial(n-1));
}

int main(){
  long double e = 0;
  int n = 10000;
  for(int i = 0; i < n; i++)
    e += 1 / (fatorial(i));
  printf("%.150Lf", e);
  return 0;
}