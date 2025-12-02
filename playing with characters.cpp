#include<stdio.h>
int main(void)
{
    char a;
    char b[10];
    char c[20];
    printf("enter a character: ");
    scanf(" %c", &a); 
    printf("enter a word: ");
    scanf("%s", &b);
    printf("enter a sentence: ");
    scanf(" %[^\n]", &c); 
    printf("character: %c\nWord: %s\nSentence: %s\n", a, b, c);
    return 0;
}
