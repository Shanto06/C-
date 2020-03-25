#include<stdio.h>
#include<string.h>
int main()
{
    char cmp[100],word[100];
    printf("Enter a word to check palindrome or not: ");
    gets(word);
    strcpy(cmp,word);
    strrev(cmp);

    if(strcmp(cmp,word)==0)
    {
        printf("The word '%s' is palindrome\n",word);
    }

    else
        printf("The word '%s' is not palindrome\n",word);


    return 0;
}
