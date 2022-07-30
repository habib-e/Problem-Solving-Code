#include<stdio.h>
void sum(int *num){
    int size = sizeof(num);
    int i,sum=0;
    for(i=0;i<size;i++){
        sum=sum+ *(num+i);
    }
    printf("%d",sum);
}
int main(){
    int num[5] = {1,2,3,4,5};
    sum(num);
    return 0;
}
