#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    ch = toupper(ch);  // Convert to uppercase

    switch (ch) {
        case 'V':
            printf("Violet");
            break;
        case 'I':
            printf("Indigo");
            break;
        case 'B':
            printf("Blue");
            break;
        case 'G':
            printf("Green");
            break;
        case 'Y':
            printf("Yellow");
            break;
        case 'O':
            printf("Orange");
            break;
        case 'R':
            printf("Red");
            break;
        default:
            printf("-1");
    }

    return 0;
}
