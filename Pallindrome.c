/*in this video we will find out pallindrome of a number pallindrome means
when reversed number is equal to the orignal number then it is pallinrome
so we will first input the orignal number and reverse it and the we will
compare both and if it is equal then it is pallindrome
eg:484 its reverse is 484 so it is pallindrome lets do it*/
#include<stdio.h>
int main(){
    int n,reversed=0,remainder;
    printf("enter the orignal number:");
    scanf("%d",&n);
    int orignal =n;
    while(n!=0){
        remainder = n%10;
        reversed = reversed*10+remainder;
        n=n/10;
    }
    printf("the reversed number:%d\n",reversed);
    if(orignal==reversed){
        printf("then it is pallindrome");
 
    }
    else{
        printf("not a pallindrome");
    }
}


