#include <stdio.h>
#include <stdlib.h>

int tabela(int num){
  for(int i = 1; i<=10; ++i){
    printf("%dx%d = %d\n", i, num, i*num);
  }
  printf("\n");
    return 0;
}
int main() {
  int num;
  int tabuadac;
  printf("\nDigite o numero que você deseja na tabuada:");
  scanf("%d",&num);
  tabuadac = tabela(num);
  int i ,j;
  for (i=1; i<=10; i=i+1){
    for (j=1; j<=10; j=j+1)
      printf("%2d x %2d = %3d\n", j, i, i * j);
    printf("\n");
  }
}