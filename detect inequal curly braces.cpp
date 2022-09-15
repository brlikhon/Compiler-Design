/*Write a code to detect inequal curly braces from a input code
Sample input:
Int main()
{
Int a;
If(a==5){
}
Sample output: inequal
,
Sample input:
Int main()
{
Int a;
If(a==5){
}
}
Sample output: equal
*/

#include<stdio.h>
#include <string.h>

int main(){
   char str[100];
   int count=1;
   scanf("%[^*]s", &str);
   for(int i=0; i<strlen(str);i++){
       if(str[i]=='}' || str[i]=='{'){
        count++;
       };
           }
    if(count%2 == 0){
        printf("inequal");
    }
    else{
        printf("equal");
    }
}
