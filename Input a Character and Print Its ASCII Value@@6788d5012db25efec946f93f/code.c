// #include <stdio.h>

// int main() {
//     char a;


//     scanf("%c", &a);

 
//     printf("ASCII Value '%c': %d\n", a, a);

//     return 0;
// }
#include <stdio.h>

int main() {
    char str[100];  // Increased array size to avoid buffer overflow

    printf("Enter a string: ");
    scanf("%s", str); // Reads a single word (stops at space)

    // Printing ASCII value of the first character
    printf("ASCII Value of '%c': %d\n", str[0], str[0]); 

    return 0;
}




