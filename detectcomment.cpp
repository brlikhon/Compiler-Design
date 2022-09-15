#include <stdio.h>
#include <string.h>

int main(){

    int i=2, j, flag=0;
    char str[100];
    printf("Enter a string: ");
    scanf("%[^*]", &str);
    printf("\nOUTPUT\n");


    if(str[0] == '/'){
        if(str[1] == '/'){
            printf("It is a single line comment");
        }
        else if(str[1] == '*'){
            for(i = 2;i < strlen(str); i++){
                if(str[i] == '*' && str[i+1] == '/'){
                    printf("It is a multi line  comment");
                    flag=1;
                    break;
                }
                else
                    continue;
            }
            if(flag == 0){
                printf("It is not a comment");
            }
        }
        else printf("It is not a comment");
    }
    else printf("It is not a comment");


}
