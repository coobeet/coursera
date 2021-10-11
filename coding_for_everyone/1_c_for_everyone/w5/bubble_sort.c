#include <stdio.h>
#define SIZE 5

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int data[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = size - 1; j > i; j--)
    {
      if (data[i] > data[j])
      {
        swap(&data[i], &data[j]);
      }
    }
  }
}

void print_array(int data[], int size)
{
  printf("\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d,", data[i]);
  }
  printf("\n");
}

int main(void)
{
  int data[SIZE] = {67, 45, 88, 91, 59};

  print_array(data, SIZE);
  bubble_sort(data, SIZE);
  print_array(data, SIZE);
}
