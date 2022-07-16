/*in this video we are going to print the fibonacci series using iterative
method example:0 1 1 2 3 5
here you can see that first and second element in series are always fixed
and third term is sum of first and second term and then fourth term is 
sum of second and third term and similarly this series goes on.now lets do it*/
#include <stdio.h>
int main(){
    int i,n;
    printf("enter the number of terms:");
    scanf("%d",&n);
    //initialize first two elements
    int n1=0,n2=1;
    //intialize third term 
    int n3=n1+n2;
    printf("%d %d",n1,n2);
    for(i=3;i<=n;i++){
        printf(" %d",n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
}
