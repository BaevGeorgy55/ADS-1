// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  for (int i = 2; i < value; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
int size = 100;
int cntr = 0;
int arr[size] {0};
int prost[size] {0};
for (int i = 0; i < size; i++) {
  arr[i] = i + 1;
}
  for (int i = 0; i < size; i++) {
    if (checkPrime(arr[i]) && arr[i] != 1)
      prost[cntr++] = arr[i];
  }
  for (int i = 0; i < size; i++) {
    if (n == i)
      return prost[i-1];
  }
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
int size = 10;
int cntr = 0;
int arr[size] {0};
int prost[size] {0};
for (int i = 0; i < size; i++) {
  arr[i] = i + 1;
}
  for (int i = value + 1; i < size; i++) {
    if (checkPrime(arr[i]) && arr[i] != 1)
      return arr[i];
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
int size = 15;
int arr[size] {0};
int prost[size] {0};
int cntr = 0, a = 0;
  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }
  for (int i = 0; i < size; i++) {
    if (checkPrime(arr[i]) && (arr[i] != 1))
      prost[cntr++] = arr[i];
  }
  for (int i = 0; i < hbound; i++) {
    a += prost[i];
  }
  return a;
}
