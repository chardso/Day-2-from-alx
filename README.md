# I 💕 C programming.
## Show me the way
# 100.c

#inclde <stdio.h>

/**

* main - Gateway pth of excution

* return: 0 when sure deal

*/

int main(void)

/*
    int (outer, inner);
    
for (outer =48;outer<=57;outer++)
   
 
for (inner=48;inner<=57;inner++)

    {
        if (inner == outer)

    {
        continue;

    }
    else
    {
        putchar(outer);
        putchar(inner);
        putchar(44);
        putchar(32);
        }
       }
      }
      putchar(10);
      return (0);
      }
      */

      {
        int n;
                int d1;
                int d2;
                for (n = 1; n<99; n++)
                {
         d1 = n / 10;
         d2 = n % 10;
         if (d1 < d2)
         {
            putchar(d1 + '0');
            putchar(d2 + '0');
            if (n < 89)
         {
            putchar(',');
            putchar('');
            }
         }
       }
       putchar('\n');
       return (0);   
      
