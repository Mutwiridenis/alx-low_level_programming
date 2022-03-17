#include "main.h"
/**
 * print_square- function that printsqure
 *
 * Retur o
*/

void print_square(int size)
{
        int filas;
        int columnas;

        if (sie > 0)
            for ( filas = 0; filas < size; filas++)
            {
              for (columnas = 0; columnas < size; columnas++)
              {
                   _putchar ('#');
             }
               _putchar ('\n');
          }
     else
       {
             _putchar ('\n');
       }
}
