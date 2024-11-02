#include <stdio.h>
int main(){
  double price;
  const double dis = 0.25;
  printf("Enter the old prise: ");
  scanf("%lf", &price);
  price = price - ( dis * price);
  printf("Price after sale 25%% = %-10.3f SR ", price);
  return 0 ;
}

