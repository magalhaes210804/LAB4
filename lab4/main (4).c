#include <stdio.h>
#include <stdbool.h>

bool primo(int num){
  if(num <= 1){
    return false;
  }
  
  for (int i = 2, i * i <= num; i++) {
    if (num % i ==0){
      return false;
    }
  }
  return true;
}
int main(){
  int V1,V2;
  printf("Digite o primeiro numero inteiro do intervalo: ");
  scanf("%d",&V1);
  printf("Digite o segundo numero inteiro do intervalo:");
  scanf("%d",&V2);
  printf("Os numeros primos encontrados entre %d e %d são:\n ,V1,V2");
  for (int i = V1; i <= V2, i++) {
    if (primo(i)){
      printf("%d",i);
    }
  }
  printf("\n");
  return 0;
}