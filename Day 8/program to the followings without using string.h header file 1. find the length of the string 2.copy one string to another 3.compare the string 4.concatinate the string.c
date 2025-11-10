
#include <stdio.h>

int main() {
    char str1[100], str2[100], copy[100];
    int i, length = 0, compare = 0;

    printf("Enter first string: ");
    gets(str1); 

    printf("Enter second string: ");
    gets(str2);

    
    for (i = 0; str1[i] != '\0'; i++) {
        length++;
    }
    printf("\nLength of first string: %d\n", length);

    
    for (i = 0; str1[i] != '\0'; i++) {
        copy[i] = str1[i];
    }
    copy[i] = '\0';
    printf("Copied string: %s\n", copy);

   
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            compare = 1;
            break;
        }
    }
    if (compare == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    
    int j = 0;
    while (str1[j] != '\0') { 
        j++;
    }
    int k = 0;
    while (str2[k] != '\0') {  
        str1[j] = str2[k];
        j++;
        k++;
    }
    str1[j] = '\0';
    printf("Concatenated string: %s\n", str1);

    return 0;
}


