#include <stdio.h>
#include <string.h>

void conv(char *num) {


char *One[19] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
  char *Ten[8] ={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
  int i = atoi(num), j, k;
  if(i<20) {
      printf("%s \n",One[i - 1]);
}
  else if( i ==40){
      printf("40");
}
  else if ( i>= 20&& i%10 ==0){
     printf("%s \n", Ten[i / 10 - 2]);
}
  else {
    printf("%s  ", Ten[i / 10 - 2]);
   printf("%s \n", One[ i % 10 - 1]);
  }
}

   int main(void) {
    conv("5");
    conv("10");
    conv("22");
    conv("40");
    conv("70");
    return 0;
}
