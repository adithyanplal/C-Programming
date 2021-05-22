/*Different datatypes are int(integer values), float(decimal values) and char(character values).*/

/* %d  used to take numbers as input from the user.*/
/*%f is the format specifier to take float as input from the user*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

  /*Variable Initialization*/
  int num; /*Initialization integer*/
  float numfloat; /*Initialization float*/
 /*Take input from the user*/

  /*integer*/
  printf("Enter number :");
  scanf("%d",&num );
  printf("The Number you Entered is %d:", num);
  /*float*/
  printf("\nEnter a Decimal number : ");
  scanf("%f",&numfloat);
  printf("The Decimal Number you Entered is %f ",numfloat);


  return EXIT_SUCCESS;
}
