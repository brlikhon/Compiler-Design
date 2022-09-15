#include<stdio.h>
#include <string.h>

int main(){
   char str[100];
   scanf("%[^*]s", &str);
   for(int i=0; i<strlen(str);i++){
       printf("%c\n",str[i]);
           }
}
