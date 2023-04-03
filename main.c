# include <stdio.h>


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

