#include <stdio.h>

void getReceipt(char prodName[50], double price, int quantity) {
  printf("\n===== RECEIPT =====\n");
  printf("Item: %s", prodName);
  printf("Price: %.2f\n", price);
  printf("Quantity: %d\n", quantity);
  printf("Total: %.2f\n", price * quantity);
  printf("===================\n");
}

int main(void) {
  char prodName[50];
  double price;
  int quantity;

  printf("What item would you like to buy?: ");
  fgets(prodName, sizeof(prodName), stdin);

  if (prodName[0] == '\n' || prodName[1] == '\0' ){
    printf("Invalid Name");
    return 1;
  }

  printf("What is the price?: ");
  scanf("%lf", &price);

  if (price <= 0) {
    printf("Invalid Price");
    return 1;
  }

  printf("How many would you like?: ");
  scanf("%d", &quantity);

  if (quantity <= 0) {
    printf("Invalid quantity");
    return 1;

  } else {
    getReceipt(prodName, price, quantity);
  }

  return 0;
}
