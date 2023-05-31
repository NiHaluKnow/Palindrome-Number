#include<stdio.h>

int fibonacci(int x){
    if(x==0) return 0;
    if(x==1) return 1;
    return fibonacci(x-1)+fibonacci(x-2);
}
void printFibo(int x){
     for(int i=1;i<=x;i++){
        printf("%d ",fibonacci(i));
    }
}
int main(){
    int x;
    printf("Input the number of terms to display:\n");
    scanf("%d",&x);
    if(x>0) printf("0 "); //printing '0' separately
    printFibo(x-1);
}