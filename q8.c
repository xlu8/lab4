#include<stdio.h>
#include<string.h>

int MyWords(char num[]) {
    	int n=0, i,len=sizeof(num);
    	for(i=0; i < len; i++) {
        if(num[i]=='-') {
            n++;
        }
    }

    int result = 0;
    if(n <= 0) {

  if(strcmp(num,"zero") == 0){
            result += 0;
        }
        else if(strcmp(num,"one") == 0){
            result+=1;
        }
        else if(strcmp(num,"two") == 0) {
            result+=2;
        }
        else if(strcmp(num,"three") == 0){
        
            result+=3;
        }
        else if(strcmp(num,"four") == 0) {
            result+=4;
        }
        else if(strcmp(num,"five") == 0) {
            result+=5;
        }
        else if(strcmp(num,"six") == 0) {
            result+=6;
        }
        else if(strcmp(num,"seven") == 0) {
            result+=7;
        }
        else if(strcmp(num,"eight") == 0) {
            result+=8;
        }
        else if(strcmp(num,"nine") == 0) {
            result+=9;
        }
        if(strcmp(num,"ten") == 0) {
            result+=10;
        }
        else if(strcmp(num,"eleven") == 0)  {
            result+=11;
        }
        else if(strcmp(num,"twelve") == 0 ) {
        
            result+=12;
        }
        else if(strcmp(num,"thirteen") == 0) {
        
            result+=13;
        }
        else if(strcmp(num,"fourteen") == 0){
        
            result+=14;
        }
        else if(strcmp(num,"fifteen") == 0) {
    
            result+=15;
        }
        else if(strcmp(num,"sixteen") == 0) {
        
            result+=16;
        }
        else if(strcmp(num,"seventeen") == 0) {
        
            result+=17;
        }
        else if(strcmp(num,"eighteen") == 0) {
         
            result+=18;
        }
        else if(strcmp(num,"nineteen") == 0) {
        
            result+=19;
        }
        else if(strcmp(num,"twenty") == 0) {
         
            result+=20;
        }
        else if(strcmp(num,"thirty") == 0) {
        
            result+=30;
        }
        else if(strcmp(num,"fourty") == 0) {
        
            result+=40;
        }
        else if(strcmp(num,"fifty") == 0) {
        
            result+=50;
        }
        else if(strcmp(num,"sixty") == 0) {
        
            result+=60;
        }
        else if(strcmp(num,"seventy") == 0) {
        
            result+=70;
        }
        else if(strcmp(num,"eighty") == 0) {
        
            result+=80;
        }
        else if(strcmp(num,"ninety") == 0) {
        
            result+=90;
        }
    } 
    else {
	 int dash='-';
  
        char *ones = strchr(num, dash) + 1;
        int arr = strchr(num,dash) - num;
        char tens[arr];

	strncpy(tens, num, arr);

	 if(strcmp(num,"zero") == 0){
            result += 0;
        }
        else if(strcmp(num,"one") == 0){
            result+=1;
        }        
	else if(strcmp(ones,"two") == 0) {
            result+=2;
        }
        else if(strcmp(ones,"three") == 0) {
            result+=3;
        }
        else if(strcmp(ones,"four") == 0) {
            result+=4;
        }
        else if(strcmp(ones,"five") == 0) {
            result+=5;
        }
        else if(strcmp(ones,"six") == 0) {
            result+=6;
        }
        else if(strcmp(ones,"seven") == 0) {
            result+=7;
        }
        else if(strcmp(ones,"eight") == 0)   {
            result+=8;
        }
        else if(strcmp(ones,"nine") == 0) {
            result+=9;
        }
	if(strcmp(tens,"twenty") == 0) {
            result+=20;
        }
        else if(strcmp(tens,"thirty") == 0) {
            result+=30;
        }
        else if(strcmp(tens,"fourty") == 0) {
            result+=40;
        }
        else if(strcmp(tens,"fifty") == 0) {
            result+=50;
        }
        else if(strcmp(tens,"sixty") == 0) {
            result+=60;
        }
        else if(strcmp(tens,"seventy") == 0){
            result+=70;
        }
        else if(strcmp(tens,"eighty") == 0){
            result+=80;
        }
        else if(strcmp(tens,"ninety") == 0) {
            result+=90;
        }
 
        
    }
    return result;
}
int main()
{
    char num1[10];
    printf("plz enter first num: \n");
    scanf("%s", num1);

    char num2[10];
    printf("And second num: \n");
    scanf("%s", num2);

    int product;
    product = MyWords(num1) * MyWords(num2);
    printf("%d * %d = %d \n", MyWords(num1), MyWords(num2), product);
    return 0;
}


