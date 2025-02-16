#include <stdio.h>
int ClrBin(int position, int n){
    return(n & (~(1<<position)));
}
int main(){
    int position,n;
    scanf("%d %d",&position,&n);
    printf("%d",positon,n);
    return 0;
}