#include<stdio.h>
int recursive(int n){
    if(n==1)
        return 0;
    else
        return recursive(n/2)+1;
}
int main(){
    int n;
    printf("Enter value : ");
    scanf("%d",&n);
    printf("For %d is = %d",n,recursive(n));
}
