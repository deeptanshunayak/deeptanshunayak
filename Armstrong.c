/*in this video we are going to find out the armstrong number of 3 digit number
armstrong number is the sum of the cube of its digit 
eg:153=1^3+5^3+3^3=153 so it is armstrong 
so lets do it*/
#include<stdio.h>
int main(){
    int n,remainder,result=0;
    printf("enter the number:");
    scanf("%d",&n);
    int orignal=n;
    while(n!=0){
        remainder=n%10;
        result = result + remainder*remainder*remainder;
        n=n/10;
    }
    if(orignal==result){
        printf("%d number is armstrong",orignal);

    }
    else{
        printf("%d number is not armstrong",orignal);
    }
}
