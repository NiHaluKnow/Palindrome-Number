#include<stdio.h>
#include<math.h>

int main(){
    int x;
    int count=0;
    printf("Enter the number :\n");
    scanf("%d",&x);
    int original=x;
    int flag =x;
    while (x!=0)
    {
       x=x/10;
       count++;
    }
    //printf("%d",count);
    int y;
    int sum=0;
    for(int i=1;i<=count;i++){
        y=original%10;
        original=original/10;
        sum+=y*pow(10,count-i);
    }
    //printf("%d",sum);
    //printf("%d",x);
    if (sum==flag) printf("%d is a palindrome number\n",flag);
    else printf("%d is not a palindrome number",flag);

return 0;
}