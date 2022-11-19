#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    printf("%d'th factorial is = %d",n,fact(n));
}










/*#include<stdio.h>
long long fact(long long n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    long long n;
    printf("Enter the value : ");
    scanf("%lld",&n);
    printf("%lld'th factorial is = %lld",n,fact(n));
}*/
