#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define SIZE 100

int countOAlpha(char* str);
char* lastWord(char* str);
void replace(char *str );

int main() {
char str[SIZE];
printf("Enter a sentence: ");
scanf("%[^\n]",str);
int count = countOAlpha(str);
printf("The number of alphabetical character in the string is :%d\n",count);
char *word = lastWord(str);
     if (word != NULL) {
        printf("The last word in the string is: %s\n", word);
        free(word);  
    } else {
        printf("No last word found.\n");
    }
replace(str);
printf("The new string after replacement is: %s",str);


return 0; 


}


int countOAlpha(char* str) {

int count = 0 ;
while(*str != '\0') {
if(*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z')
count++;
str++;
}
return count;
}

char* lastWord (char* str){
char *p = strrchr( str , ' ') ;
if(p == NULL){
char *word = (char*)malloc(strlen(str)+1);
strcpy(word,str);
return word;
}
*p = '\0' ; 
char *p2 = strrchr( str , ' ');
p2++;
char *s = (char*)malloc(strlen(p2)+1);
strcpy( s , p2 ) ;
*p = ' ' ; 
return s;
}

void replace(char *str ) {
int count = 0;
while(*str != '\0'){
if(*str == ' '){
*str = '-';
if(++count == 3)
break;
}
str++;
}
}


