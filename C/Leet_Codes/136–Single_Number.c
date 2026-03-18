#include<stdio.h>
int main(){
    int i,num,count=0;
    scanf("%d",&num);
    
    int arr[num];

    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++){
        count=count ^ arr[i];
    }
    printf("%d",count);
    return 0;
}