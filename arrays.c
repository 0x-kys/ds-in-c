#include <math.h>
#include <stdio.h>

// DS using C - PG 80

void ex_3_1(void) {
  int marks[] = {99, 67, 78, 56, 88, 90, 34, 85};

  int base_addr = 1000;
  printf("%lld\n", base_addr + sizeof(int) * 4);
}

void ex_3_2(void) {
  int age[5] = {2, 5, 3, 1, 7};

  printf("%lld\n", sizeof(age) / sizeof(int));
}

void read_n_display_n_nums(void) {
  int arr[5] = {1, 2, 3, 4, 5};

  printf("elems: ");
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void mean_of_n_nums(void) {
  int sum = 0, arr[5] = {1, 2, 3, 4, 5};

  float mean = 0.0;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    sum = sum + arr[i];
  }

  mean = (float)sum / ((float)sizeof(arr) / sizeof(int));

  printf("mean of sum %d is %.2f\n", sum, mean);
}

void print_position_of_smallest_num(void) {
  int arr[5] = {7, 6, 5, 14, 3};

  int smol = arr[0], pos = 0;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    if (arr[i] < smol) {
      smol = arr[i];
      pos = i;
    }
  }

  printf("smallest number %d's position index is %d\n", smol, pos);
}

void find_second_largest_num(void) {
  int arr[5] = {7, 6, 5, 14, 3};

  int lar0 = arr[0], lar1 = arr[1];

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    if (arr[i] > lar0) {
      lar0 = arr[i];
    }
  }

  for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
    if (arr[i] != lar0) {
      if (arr[i] > lar1) {
        lar1 = arr[i];
      }
    }
  }

  printf("first largest %d, second largest %d\n", lar0, lar1);
}

void form_number_from_digits(void) {
  int arr[4] = {2, 3, 0, 9};

  int number = 0;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    number += arr[i] * pow(10, i);
  }

  printf("generated number %d\n", number);
}

void find_duplicates(void) {
  int arr[5] = {1, 2, 3, 2, 5};

  int flag = 0;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++) {
      if (arr[i] == arr[j] && i != j) {
        flag = 1;
        printf("duplicate numbers found at locations %d & %d", i, j);
      }
    }
  }

  if (flag == 0) {
    printf("no duplicates found\n");
  }
  printf("\n");
}

// pg 90

void insert_elem_in_arr(void) {
  int d[10] = {1, 2, 3, 4, 5};

  int s = 5;
  int lb = d[0], up = d[4];

  // print memory addresses
  printf("mem addr: ");
  for (int i = 0; i < s; i++) {
    printf("%p ", &d[i]);
  }

  printf("\n");

  // insert number at a given location
  int insert = 0;
  int pos = 0;

  for (int i = s - 1; i >= pos; i--) {
    d[i + 1] = d[i];
  }

  d[pos] = insert;
  s += 1;

  for (int i = 0; i < s; i++) {
    printf("%d ", d[i]);
  }
  printf("\n");

  // insert a number in an already sorted array in ascending order
  int d1[10] = {1, 2, 4, 5, 6};

  int size = 5;
  int insert1 = 3;

  for (int i = 0; i < size; i++) {
    if (d1[i] > insert1) {
      for (int j = size - 1; j >= i; j--) {
        d1[j + 1] = d1[j];
      }

      d1[i] = insert1;
      break;
    }
  }

  size += 1;

  for (int i = 0; i < size; i++) {
    printf("%d ", d1[i]);
  }
  printf("\n");
}

void ex_3_4(void) {
  int data[10] = {1, 2, 3, 4, 5};

  int pos = 3, i = pos, size = 5;

  while (i <= size - 1) {
    data[i] = data[i + 1];
    i++;
  }

  size -= 1;

  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }

  printf("\n");
}

void delete_elem_from_arr(void) {
  int data[10] = {1, 2, 3, 4, 5};

  int size = 5;
  int pos_delete = 2;

  for (int i = pos_delete; i < size - 1; i++) {
    data[i] = data[i + 1];
  }

  size--;

  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
}

void delete_from_already_sorted(void) {
  int data[10] = {1, 2, 3, 4, 5};

  int size = 5;
  int num_del = 3;

  for (int i = 0; i < size; i++) {
    if (data[i] == num_del) {
      for (int j = i; j < size - 1; j++) {
        data[j] = data[j + 1];
      }
    }
  }
  size -= 1;

  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
}

void merge_arrs(void) {
  int a[5] = {0, 1, 2, 3, 4};
  int b[5] = {5, 6, 7, 8, 9};

  int full_size = sizeof(a) / sizeof(a[0]) + sizeof(b) / sizeof(b[0]);
  int index = 0;

  int merged[full_size];

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    merged[index] = a[i];
    index++;
  }
  for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
    merged[index] = b[i];
    index++;
  }

  for (int i = 0; i < sizeof(merged) / sizeof(merged[0]); i++) {
    printf("%d ", merged[i]);
  }
  printf("\n");
}

// pg - 98

int main() {
  printf("arrays\n");

  ex_3_1();
  ex_3_2();

  read_n_display_n_nums();
  mean_of_n_nums();
  print_position_of_smallest_num();
  find_second_largest_num();
  form_number_from_digits();
  find_duplicates();
  insert_elem_in_arr();

  ex_3_4();
  delete_elem_from_arr();
  delete_from_already_sorted();

  merge_arrs();

  return 0;
}
