#include<stdio.h>
int recursive(int a,int b){
    if(a<b)
        return 0;
    else
        return recursive(a-b,b)+1;
}
int main(){
    int a,b;
    printf("Enter two values : ");
    scanf("%d %d",&a,&b);
    printf("For %d and %d is = %d",a,b,recursive(a,b));
}
