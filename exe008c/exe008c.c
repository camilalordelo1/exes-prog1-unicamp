#include <stdio.h>
#include <string.h>

int
main ()
{
  struct corpo
  {
    float altura;
    float peso;
    char nome[100];
  } pessoa;
  
  float imc;

  scanf ("%f", &pessoa.altura);
  scanf ("%f", &pessoa.peso);
  scanf ("%s", pessoa.nome);
  
  
  // imc = peso / altura ^ 2
  imc = pessoa.peso / (pessoa.altura*pessoa.altura);
  
  printf ("%.3f\n", imc);

}
