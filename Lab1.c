#include <stdio.h>
int main() {
    const double discount = 0.25;
    double price;
    printf("Enter the price : " );
    scanf("%lf", &price);
    price = price - ( discount * price);
    printf("The price after the discount is : %4.1f SR ",price);
    return 0;
}