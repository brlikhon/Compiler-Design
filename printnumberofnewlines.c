#include<stdio.h>
#include <string.h>

int main(){
   char str[100];
   int count=1;
   scanf("%[^*]s", &str);
   for(int i=0; i<strlen(str);i++){
       if(str[i]=='\n'){
        count++;
       };
           }
    printf("%d",count);
}
