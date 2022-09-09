#include <stdio.h>
int main() {
   int i, j, rows=5,k=0;
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ",++k);
      }
      printf("\n");
   }
   return 0;
}

