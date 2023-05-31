#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the starting range :\n");
    scanf("%d",&x);
    printf("Enter the ending range\n");
    scanf("%d",&y);
    
    for(int i=x+1;i<=y;i++){
        int flag=0; // reseting the flag=0 for each iteration
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
    }
}