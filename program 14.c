// program to check vowel or  consonant
#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    int isLowercaseVowel,isUppercaseVowel;
    printf("enter an alphabet: ");
    scanf("%c",&c);
    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' ||  c == 'i' || c == 'o' || c == 'u');
    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    // evaluates to 1 (true) if either islowercaseVowel or isuppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.",c);
    else
        printf("%c is a consonant.",c);
    getch();
}