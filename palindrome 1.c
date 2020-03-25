#include<stdio.h>
#include<string.h>
int main()
{
    char word[100],cmp[100];
    printf("Enter a word to check palindrome or not:\n");
    gets(word);

    strcpy(cmp,word);

    strrev(cmp);

    if(strcmp(word,cmp)==0)
        {
            printf("The word '%s' is palindrome.\n",word);
        }
    else
        {
            printf("The word '%s' is not palindrome.\n",word);
        }
    return 0;
}
