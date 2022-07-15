/*in this video we are going to find factorial of number using iteration method
iteration means repetition using for loop or any other loop
so what is factorial
example 5!=5*4*3*2*1 in this we have started from nth number and end at 1 
or you can say that we have start multiplying from 1 and till nth number which is 5 here
so lets do it */
#include <stdio.h>
int main(){
    int i,factorial=1,n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0){
        printf("1");//as 0!=1
 
    }
    else{
        for(i=1;i<=n;i++){
            factorial = factorial*i;
 
        }
        printf("factorial of %d nuber is %d",n,factorial);
    }
    return 0;//as it is int function so it will return 0;
}
