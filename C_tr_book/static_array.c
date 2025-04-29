#include <stdio.h>
#define BOYUT 5

void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main() {
  int a[BOYUT] = {1, 2, 3, 4, 5};
  size_t i;
  puts("Düm dizinin referans ile geçirilmesinin etksi.\nOrijinal dizinin degerleri:");

  for(i = 0; i < BOYUT; i++) {
    printf("%3d ", a[i]);
  }

  puts("");
  modifyArray(a, BOYUT);
  puts("Dizinin referans ile geçirilmesinden sonra dizinin degerleri:");

  for(i = 0; i < BOYUT; i++) {
    printf("%3d ", a[i]);
  }
  printf("\n\nDizinin ilk elemanini degistiriyoruz.\n");
  modifyElement(a[0]);
  printf("Dizinin ilk elemaninin degeri: %d\n", a[0]);
  
  return 0;
}


void modifyArray(int b[], size_t size) {
  size_t i;
  for(i = 0; i < size; i++) {
    b[i] *= 2;
  }
}

void modifyElement(int e) {
  printf("Modifiye edilmiş eleman deger %d\n", e*2);
}