// #include <stdio.h>

// int main() {
//     char a;


//     scanf("%c", &a);

 
//     printf("ASCII Value '%c': %d\n", a, a);

//     return 0;
// }
#include <stdio.h>

int main() {
    char str[1];

    printf("Enter a string: ");
    scanf("%s", str); 

    printf("ASCII Value of '%c': %d\n", str[0], str[0]); 

    return 0;
}

