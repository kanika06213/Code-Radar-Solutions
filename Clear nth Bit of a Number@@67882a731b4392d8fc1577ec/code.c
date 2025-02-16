// #include <stdio.h>
// int ClrBin(int position, int n){
//     return(n & (~(1<<position)));
// }
// int main(){
//     int position,n;
//     scanf("%d %d",&position,&n);
//     printf("%d",ClrBin(position,n));
//     return 0;
// }
#include <stdio.h>
int ClrBin(int position,int n){
    return (n & (~(1<<position)));
}
int main() {
    int n,position;
    scanf("%d %d", &n, &position);
 
    printf("%d",ClrBin(position,n));
    return 0;
}