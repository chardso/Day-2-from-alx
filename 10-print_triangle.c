#include "main.h"
/**
* print_triangle - prints a triangle
* @size: size of the triangle
* Return: if size is 0 or less only prints new line
* otherwise: prints a tringle
*/
void prnt_triangle(int size)
{
         int times,space,triangle;

         if (size <= 0)
          {
                _putchar(10);
           }
           else
           {
              for (times = 1; times <= size; time++)
           {
              for (space = times; space < size; space++)
           {
                 _putchar(' ');
           }
             for (triangle = 1; triangle <= times; triangle++)
           {
                _putchar('#');
            }
            _putchar(10);
