/*in this video we are going to find the prime number upto that number
enter by user prime numbers are the numbers which are divisible by only
two numbers either 1 or the number itself 
eg:if user enter 10
2 3 5 7 is the answer so lets do it*/
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){//this loop will input number one by one
        int f=0;
        for(j=1;j<=n;j++){//this loop will divide this number one by one
        if(i%j==0){
            f++;
        }

        }
        if(f==2){
            printf("%d ",i);
        }

    }
}
