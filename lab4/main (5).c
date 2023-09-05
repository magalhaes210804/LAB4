#include <stdio.h>
#include <math.h>
float conta(int n)
{
  float contaf = 0;
  for(float k = 1; k<+ n; ++k)
    {
      contaf += ((float)k/pow(k, 2)) * pow(-1, (k+1)); 
    }
  return contaf;
}
int main()
{
  float contafunc;
  int n;
  printf("Qual o numero para a conta?;");
  scanf("%d", &n);
  contafunc = conta(n);
  printf("resultado da conta: %f\n",contafunc);
  return 0;;
}