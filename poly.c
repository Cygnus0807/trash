#include <stdio.h>
int divisible(long long int n) {
   long long int temp = n;
   while (n) {
      int k = n % 10;
      if (temp % k == 0)
         return 1;
         n /= 10;
   }
   return 0;
}
int main() {
   long long int n = 345654;
   if (divisible(n)) {
      printf("Yes\n");
   }
   else
      printf("No\n");
   return 0;
}