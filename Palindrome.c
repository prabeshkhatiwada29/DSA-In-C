 #include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool is_palindrome(char *str, int start, int end) {
    if(start >= end) {
        return true;
    }
    if(str[start] == str[end]) {
        return is_palindrome(str, start + 1, end - 1);
    } else {
        return false;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = (int)strlen(str);

    if(is_palindrome(str, 0, len - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
