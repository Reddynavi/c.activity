#include <stdio.h>
int input_side()
 {
    int side;
    printf("Enter the side length: ");
    scanf("%d", &side);
    return side;
}
int check_scalene(int a, int b, int c)
 {
    if (a != b && b != c && a != c) {
        return 1;
    } else {
        return 0;
    }
}

void output(int a, int b, int c, int isscalene) {
    printf("The triangle with sides %d, %d and %d is %s scalene\n", a, b, c, (isscalene ? "": "not"));
}

int main() 
{
  int side1 = input_side();
  int side2 = input_side();
  int side3 = input_side();
  int isscalene = check_scalene(side1, side2, side3);
  output(side1, side2, side3, isscalene);
  return 0;
}



