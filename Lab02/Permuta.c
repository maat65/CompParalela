#include <stdio.h>
#include <stdbool.h>

bool valida(int s[], int i){
  for(int j = 0; j < i; j++){
    if(s[j] == s[i])
      return false;
  }
  return true;
}

int imprima(int s[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ", s[i]);
  }
  printf("\n");
}

int permuta(int a[], int s[], int i, int n){
  if(i >= n)
    imprima(s, n);
  else{
    for(int j = 0; j < n; j++){
      s[i] = a[j];
      if(valida(s,i))
        permuta(a, s, i+1, n);
    }
  }
}

int main(void) {
  int a[] = {1,2,3};
  int s[] = {0,0,0};
  permuta(a, s, 0, 3);
  return 0;  
}