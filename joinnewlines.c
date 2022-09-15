#include <stdio.h>
#include <string.h>
int main(){
int i, j;
char str[100];
printf("Enter a string: ");
scanf("%[^ ]s", &str);
for(i=0; i<strlen(str);i++){
        if(str[i]=='\n'){
            for(j=i; j<strlen(str);j++){
              str[j]=str[j+1];
            }
        }
}
  printf("Output: %s", str);
}
