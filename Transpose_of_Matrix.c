#include <stdio.h>
int main() {
  int arr[10][10], transpose[10][10], row, col;
  printf("Enter rows and columns: ");
  scanf("%d %d", &row, &col);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < col; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &arr[i][j]);
  }
  
  printf("\nEntered matrix: \n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < col; ++j) {
    printf("%d  ", arr[i][j]);
    if (j == col - 1)
    printf("\n");
  }

  for (int i = 0; i < row; ++i)
  for (int j = 0; j < col; ++j) {
    transpose[j][i] = arr[i][j];
  }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < col; ++i)
  for (int j = 0; j < row; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == row - 1)
    printf("\n");
  }
  return 0;
}