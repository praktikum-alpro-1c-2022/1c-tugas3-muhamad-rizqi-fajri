#include <stdio.h>
#include <cmath>
int main(){
  float b=25, x=15, c=20, y;
  y = b * pow(x, 2) + 0.5f * x - c;
  printf("y = bx² + 0.5x - c\nb = %.3g\nx = %.3g\nc = %.3g\n\
          y = %.3g(%.3g)² + 0.5(%.3g) - %.3g\n\
          y = %.6g + %.3g - %.3g\n\
          y = %.6g\n", b, x, c, b, x, x, c, (b * pow(x, 2)), (0.5f * 15), c, y);            
}
