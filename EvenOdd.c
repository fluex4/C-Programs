#include<stdio.h>

int IsEven(int a){
    return (a & 1);    
}
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);

    if(IsEven(a))
        printf("%d is odd",a);
    else  
        printf("%d is even",a);
}