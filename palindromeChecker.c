#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]){
    for(int i = 0, n = strlen(s) - 1;; i++, n--){
        if(s[i] != s[n])
            return 0;
        else if(i >= n)
            return 1;
    }
    return 2;
}

int main()
{
    char s[100];
    scanf("%s", s);
    int result = isPalindrome(s);
    switch (result){
        case 0:
            printf("No\n");
            break;
        case 1:
            printf("Yes\n");
            break;
        default:
            printf("ERROR\n");
            break;
    }
    return 0;
}