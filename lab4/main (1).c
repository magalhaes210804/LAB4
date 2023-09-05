#include <stdio.h>
float c2f(int celcius){
  return (celcius*1.8)+32;
}
float f2c(int farenheit){
  return (farenheit-32)/1.8;
}
int main(){
  float tcelcius,tfarenheit,rcelcius,rfarenheit;
  int escolha;
  printf("Escolha entre uma das duas opções\n");
  printf("(1) Converter de Celsius para Fahrenheit\n(2) Converter de Fahrenheit para Celsius\n");
  scanf("%d",&escolha);
  if (escolha==1){
    printf("Digite a temperatura em celcius");
    scanf("%f",&tcelcius);
    rcelcius = c2f(tcelcius);
    printf("A temperatura em celcius é de %.2f\n",rcelcius);
  }
  else if (escolha==2){
    printf("Digite a temperatura em farenheit");
    scanf("%f",&tfarenheit);
    rfarenheit = f2c(tfarenheit);
    printf("A temperatura em celcius é de %.2f\n",rfarenheit);
  }
}
