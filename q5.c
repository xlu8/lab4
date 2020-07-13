#include <stdio.h>
static int test_palindromic(int n);
int main(void){
int i,j,max=0;
for( i=100; i<=999;i++){
  for( j=10 ;j<=99; j++){
   int p = i*j;
  if(test_palindromic(p) &&p > max){
      max = p;
}
}
}
printf("%u\n",max);
  return 0;
}
int test_palindromic(int n){
  int reversed_num =0 ,t =n;
  while(t){
  reversed_num = 10*reversed_num +(t%10);
   t/=10 ;
}
return reversed_num == n;
}
  
