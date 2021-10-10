#include <stdio.h>
/* Print fahrenheit-celsius table */
#define LOWER 0 /* defines the LOWER symbolic constant and assogns the 0 value to it*/
#define UPPER 300 /* declares a symbolic constant UPPER and assigns the 300 valur to it */
#define STEP 20 /* declares a symbolic constant STEP and assigns the 10 valur to it */
/*symbolic constants in C are not consider variables but symbols to represent a specific value. Like a constant in other languages*/ 

int main()
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  return 0;
}
