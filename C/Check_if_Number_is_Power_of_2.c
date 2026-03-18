#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    if((num>0) && (num & (num-1))==0){
        printf("power of 2");
    }
    else{
        printf("not a power of 2");
    }
    return 0;
}