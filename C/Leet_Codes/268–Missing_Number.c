#include<stdio.h>
int main(){
    int num,result=0,i;
    scanf("%d",&num);

    int arr[num];

    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++){
        result^=arr[i];
    }

    for(i=0;i<=num;i++){
        result^=i;
    }
    printf("%d",result);
    return 0;
}