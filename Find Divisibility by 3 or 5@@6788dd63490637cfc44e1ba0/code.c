#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a%3==0)&& (a%5==0)){
    printf("Divisible by Both %d",a);}
    else if(a%3==0){
        printf("Divisible by 3 %d",a);
    }
    else if(a%5==0){
        printf("Divisible by 5 %d",a);
    }
    else{
        printf("Not divisible")
    }
    

}