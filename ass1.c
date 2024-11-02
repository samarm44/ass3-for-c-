#include <stdio.h>
int isNotDig(char ch);
int squreNum(double num);
void printOddEcven(int number1 , int number2);
int main() {
    char ch ;
    int number1; 
    int number2;
    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("Enter the first number: ");
    scanf("%d",&number1);

    printf("Enter the second number: ");
    scanf("%d",&number2);

    if(isNotDig(ch))
    printf("The character is Not numerical \n");

    else
    printf("The character is numerical \n");

    printf("The square of %d is %d \n",number1 , squreNum(number1));
    printOddEcven(number1, number2);


    return 0;

}



int isNotDig(char ch) {
    if(ch >= '0'&& ch <= '9')
    return 0;
    else
    return 1;

}
int squreNum(double num) {
    int num1 = (int)(num * num);
    return num1;
}
void printOddEcven(int number1 , int number2) {
    int sum = number1 + number2;
    if(sum % 2 == 0)
    printf("The summation of %d and %d is Even number \n",number1,number2);
    else
    printf("The summation of %d and %d is Odd number \n",number1,number2);
}
