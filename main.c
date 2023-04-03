# include <stdio.h>
//# include "C:\\code\\console\\inc\\convertlib.h"
//# include "C:\\code\\console\\inc\\stm32f10x.h"
/*******************  Bit definition for GPIO_ODR register  *******************/
#define GPIO_ODR_ODR0                        ((uint16_t)0x0001)            /*!< Port output data, bit 0 */
#define GPIO_ODR_ODR1                        ((uint16_t)0x0002)            /*!< Port output data, bit 1 */
#define GPIO_ODR_ODR2                        ((uint16_t)0x0004)            /*!< Port output data, bit 2 */
#define GPIO_ODR_ODR3                        ((uint16_t)0x0008)            /*!< Port output data, bit 3 */
#define GPIO_ODR_ODR4                        ((uint16_t)0x0010)            /*!< Port output data, bit 4 */
#define GPIO_ODR_ODR5                        ((uint16_t)0x0020)            /*!< Port output data, bit 5 */
#define GPIO_ODR_ODR6                        ((uint16_t)0x0040)            /*!< Port output data, bit 6 */
#define GPIO_ODR_ODR7                        ((uint16_t)0x0080)            /*!< Port output data, bit 7 */
#define GPIO_ODR_ODR8                        ((uint16_t)0x0100)            /*!< Port output data, bit 8 */
#define GPIO_ODR_ODR9                        ((uint16_t)0x0200)            /*!< Port output data, bit 9 */
#define GPIO_ODR_ODR10                       ((uint16_t)0x0400)            /*!< Port output data, bit 10 */
#define GPIO_ODR_ODR11                       ((uint16_t)0x0800)            /*!< Port output data, bit 11 */

#define GPIO_ODR_ODR12                       ((uint16_t)0x1000)            /*!< Port output data, bit 12 */
#define GPIO_ODR_ODR13                       ((uint16_t)0x2000)            /*!< Port output data, bit 13 */
#define GPIO_ODR_ODR14                       ((uint16_t)0x4000)            /*!< Port output data, bit 14 */
#define GPIO_ODR_ODR15                       ((uint16_t)0x8000)            /*!< Port output data, bit 15 */

unsigned char ch;
 void convert_to_bit( char c)
{
  
 
printf ( "input variable "); 
  while (ch!= 'e')
  {
    scanf ("%c",&c);
    printf ( "output = %c \nvariable to bit    ",c);

    for (int i = 15; i >= 0; i--)
    {
      if((i == 3) |( i == 7 )| ( i == 11) |( i == 15 ) )
        printf(" ");

      printf ( "%d",(c >>i) &1 );  
     
          
    } 
     int d = c<<1; 
     printf ( "\noutput in ASCII = %d \nvariable to bit<<1 ",d);

    for (int i = 15; i >= 0; i--)
    {
      if((i == 3) |( i == 7 )| ( i == 11) |( i == 15 ) )
        printf(" ");

      printf ( "%d",(d >>i) &1 );  
    }

    printf("\nenter variable or enter 'e' for exit\n" );
    scanf ("%c",&ch);
  }
}


// void convert_to_bit( char c);
int main ()
{
convert_to_bit("");
  return 0;

}

