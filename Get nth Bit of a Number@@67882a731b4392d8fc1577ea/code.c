#include <stdio.h>
int main() {
    int n,position;
    scanf("%d %d", &n, &position);
    printf("%d",GetBin(position,n));
    return 0;}