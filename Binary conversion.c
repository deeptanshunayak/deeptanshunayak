/*in this video we will convert decimal number to binary number
binary number are base 2 numbers which ranges from 0 to 1 and
decimal numbers are base 10 numbers which ranges from 0 to 9
so we will input decimal number like 5 and its output will be 101;*/
#include<stdio.h>
int main(){
    int a[10],i,n;
    printf("enter the number to convert:");
    scanf("%d",&n);
    for(i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }
    printf("the binary number is:");
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
}
