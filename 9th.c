#include <stdio.h>

void calculate_the_maximum(int n, int k) {
  int max_and=0,max_or=0,max_xor=0;
  for(int a=1;a<=n;a++){
      for(int b=a+1;b<=n;b++){
          int biwise_and=a&b;
          int bitwise_or=a|b;
          int bitwise_xor=a^b;
          if(biwise_and<k && biwise_and>max_and)
          max_and=biwise_and;
          if(bitwise_or<k && bitwise_or>max_or)
          max_or=bitwise_or;
          if(bitwise_xor<k && bitwise_xor>max_xor)
          max_xor=bitwise_xor;
      }
  }
  printf("%d\n%d\n%d",max_and,max_or,max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
 
