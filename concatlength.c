#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    int i,j,l;
    printf("\nEnter 2 Strings");
    printf("\nEnter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    strcat(str1,str2);
    printf("\nThe Concatenated string = %s", str1);
    l=strlen(str1);
    printf("\nThe Length Of The Concatenated String Is = %d", l);
    return 0;
}
