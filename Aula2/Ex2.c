int main(){
  float N1, N2, N3, ME, MA;
  printf("Digite a nota de N1: ");
  scanf("%f", &N1);
  printf("Digite a nota de N2: ");
  scanf("%f", &N2);
  printf("Digite a nota de N3: ");
  scanf("%f", &N3);
  ME = (N1+N2+N3)/3;
  MA = (N1 + N2*2 + N3*3 + ME)/7;

  printf("Sua média de aproveitamento é %f\n", MA);
  if(MA >= 9)
    printf("A nota do seu conceito é A");
  else if(MA >= 7.5)
    printf("A nota do seu conceito é B");
  else if(MA >= 6)
    printf("A nota do seu conceito é C");
  else if(MA >= 4)
    printf("A nota do seu conceito é D");
  else if(MA <= 3.9)
    printf("A nota do seu conceito é E");
}