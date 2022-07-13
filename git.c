#include <stdio.h>
#include <stdlib.h>

int main(){
  int coin,total=0,n,i;
  int h=0,t=0;

  char name[10];
  printf("Who are you?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n", name);
  
  printf("Tossing a coin...\n");
  for(i=1;i<=3;i++){
    coin= rand()% 2;
    if(coin == 0) {
      printf("Round %d: Heads\n",i);
      h++;
    }

    if(coin == 1) {
      printf("Round %d: Tails\n",i);
      t++;
    }
  }
 
  printf("Heads: %d, Tails: %d\n",h,t);
  if(h > t) printf("You won!");
  else printf("You lost!\n");
  
  return 0;
}
