#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
void reverse2nPart(char *str, char ch);
int main() {

    char str1[50];
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter the character to substring the string: ");
    scanf("%c",&ch);
    reverse2nPart(str1, ch);
    printf("The reversed string is: %s\n",str1);
    printf("The reversed string is: %c",*(str1+1));
    
    
    return 0;



}

void reverse2nPart(char *str1, char ch){
    char *str ;
    str = str1;

    while (*str != ch)
    str++;
    int length = strlen(str);
    int i;
    for(i = 0 ; i < length ; i++)
    *(str1+i) =  *(str+i);

    *(str1+i) =  '\0';

    char temp;
    int j;
    for(i = 0 , j = length -1 ; i < length / 2 ; i++ , j--){
        temp = *(str1+i);
        *(str1+i) = *(str1+j);
        *(str1+j) = temp;
    }

    
    

    
}