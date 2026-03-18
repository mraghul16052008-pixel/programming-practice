#include<stdio.h>
int main(){
    char s[100],t[100];
    char result=0;
    int i;

    scanf("%s",s);
    scanf("%s",t);

    for(i=0;s[i]!='\0';i++){
        result^=s[i];
    }

    for(i=0;t[i]!='\0';i++){
        result^=t[i];
    }
    
    printf("%c",result);
    return 0;
}