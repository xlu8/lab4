#include<stdio.h>
#include<string.h>

int main() {
    
    printf("Enter a num: \n");
    
    char num[10];
    scanf("%s", num);
    
    	int n=0, i,len=sizeof(num);
    	for(i=0; i < len; i++) {
        if(num[i]=='-') {
            n++;
        }
    }
        if(n <= 0) {
        
        if(strcmp(num,"zero") == 0){
            printf("0 ");
        }
        else if(strcmp(num,"one") == 0){
           printf("1 ");
        }
        else if(strcmp(num,"two") == 0) {
            printf("2");
        }
        else if(strcmp(num,"three") == 0){
        
           printf("3");
        }
        else if(strcmp(num,"four") == 0) {
           printf("4");
        }
        else if(strcmp(num,"five") == 0) {
           printf("5");
        }
        else if(strcmp(num,"six") == 0) {
            printf("6");
            
        }
        else if(strcmp(num,"seven") == 0) {
          printf("7");
        }
        else if(strcmp(num,"eight") == 0) {
            printf("8");
        }
        else if(strcmp(num,"nine") == 0) {
            printf("9");
        }
        if(strcmp(num,"ten") == 0) {
            printf("10");
        }
        else if(strcmp(num,"eleven") == 0)  {
            printf("11");
        }
        else if(strcmp(num,"twelve") == 0 ) {
        
            printf("12");
        }
        else if(strcmp(num,"thirteen") == 0) {
        
         printf("13");
        }
        else if(strcmp(num,"fourteen") == 0){
        
           printf("14");
        }
        else if(strcmp(num,"fifteen") == 0) {
    
           printf("15");
        }
        else if(strcmp(num,"sixteen") == 0) {
        
           printf("16");
        }
        else if(strcmp(num,"seventeen") == 0) {
        
           printf("17");
        }
        else if(strcmp(num,"eighteen") == 0) {
         
            printf("18");
        }
        else if(strcmp(num,"nineteen") == 0) {
        
           printf("19");
        }
        else if(strcmp(num,"twenty") == 0) {
         
            printf("20");
        }
        else if(strcmp(num,"thirty") == 0) {
        
            printf("30");
        }
        else if(strcmp(num,"fourty") == 0) {
        
            printf("40");
        }
        else if(strcmp(num,"fifty") == 0) {
        
            printf("50");
        }
        else if(strcmp(num,"sixty") == 0) {
        
            printf("60");
        }
        else if(strcmp(num,"seventy") == 0) {
        
            printf("70");
        }
        else if(strcmp(num,"eighty") == 0) {
        
            printf("80");
        }
        else if(strcmp(num,"ninety") == 0) {
        
            printf("80");
        }
    } 
    else {
        int dash='-';
	char *ones = strchr(num, dash) + 1;
        int arr = strchr(num,dash) - num;
        char tens[arr];
      strncpy(tens, num, arr);

	if(strcmp(num,"zero") == 0){
            printf("0");
        }
        else if(strcmp(num,"one") == 0){
            printf("1");
        }        
	else if(strcmp(ones,"two") == 0) {
            printf("2");
        }
        else if(strcmp(ones,"three") == 0) {
            printf("3");
        }
        else if(strcmp(ones,"four") == 0) {
           printf("4");
        }
        else if(strcmp(ones,"five") == 0) {
            printf("5");
        }
        else if(strcmp(ones,"six") == 0) {
            printf("06");
        }
        else if(strcmp(ones,"seven") == 0) {
            printf("07");
        }
        else if(strcmp(ones,"eight") == 0)   {
            printf("8");
        }
        else if(strcmp(ones,"nine") == 0) {
            printf("9");
        }
        if(strcmp(tens,"twenty") == 0) {
            printf("20");
        }
        else if(strcmp(tens,"thirty") == 0) {
            printf("30");
        }
        else if(strcmp(tens,"fourty") == 0) {
            printf("40");
        }
        else if(strcmp(tens,"fifty") == 0) {
            printf("50");
        }
        else if(strcmp(tens,"sixty") == 0) {
            printf("60");
        }
        else if(strcmp(tens,"seventy") == 0){
            printf("70");
        }
        else if(strcmp(tens,"eighty") == 0){
            printf("80");
        }
        else if(strcmp(tens,"ninety") == 0) {
            printf("90");
        }
 }
return 0;
}
