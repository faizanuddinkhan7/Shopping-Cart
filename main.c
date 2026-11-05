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

  printf("What is the price?: ");
  scanf("%lf", &price);

  printf("How many would you like?: ");
  scanf("%d", &quantity);

  if (price <= 0 && quantity <= 0) {
    printf("Invalid Price and Quantity");
  } else if (price <= 0) {
    printf("Invalid Price");
  } else if (quantity <= 0) {
    printf("Invalid Quantity");
  } else {
    getReceipt(prodName, price, quantity);
  }

  return 0;
}
