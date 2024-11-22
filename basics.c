#include <stdio.h>

void hewwo(void) { printf("hello\n"); }

void arrays0(void) {
  int marks[10];

  for (int i = 0; i < 10; i++) {
    marks[i] = i;
  }

  printf("size of marks: %lld\n", sizeof(marks) / sizeof(int));
}

void swapping_two_val(void) {
  int a = 10, b = 20, tmp = 0;

  printf("a: %d b: %d\n", a, b);

  tmp = a;
  a = b;
  b = tmp;

  printf("a: %d b: %d\n", b, a);
}

void find_largest(void) {
  int a = 10, b = 20;

  if (a > b) {
    printf("%d\n", a);
  } else if (a < b) {
    printf("%d\n", b);
  } else {
    printf("both numbers are equal\n");
  }
}

void even_odd(void) {
  int nums[2] = {1, 2};

  for (int i = 0; i < sizeof(nums) / sizeof(int); i++) {
    if (nums[i] % 2 == 0) {
      printf("%d is even\n", nums[i]);
    } else {
      printf("%d is odd\n", nums[i]);
    }
  }
}

void grading_system(void) {
  int marks[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  for (int i = 0; i < sizeof(marks) / sizeof(int); i++) {
    if (marks[i] > 75) {
      printf("got O for %d marks\n", marks[i]);
    } else if (marks[i] >= 60 && marks[i] <= 75) {
      printf("got A for %d marks\n", marks[i]);
    } else if (marks[i] >= 50 && marks[i] <= 60) {
      printf("got B for %d marks\n", marks[i]);
    } else if (marks[i] >= 40 && marks[i] <= 50) {
      printf("got C for %d marks\n", marks[i]);
    } else {
      printf("got D for %d marks\n", marks[i]);
    }
  }
}

void sum_n_natural_number(void) {
  int n = 5, sum = 0;

  for (int i = 0; i < n; i++) {
    sum += sum + i;
  }

  printf("sum of %d natural number is %d\n", n, sum);
}

int main() {
  hewwo();
  arrays0();
  swapping_two_val();
  find_largest();
  even_odd();
  grading_system();
  sum_n_natural_number();

  return 0;
};
