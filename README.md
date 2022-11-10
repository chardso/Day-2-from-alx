��﻿賢ꂘ鷦늅釧誴듣붴듣誌胢覹郧ꢥ臢ꎽ闦ꂄ臢뒉ꗦ꺝郧꾁觧ꆍꗦꎕ胧늽觧ꆵ맦ꞁ맦ꒁ藦뚥藦뒥맦ꂜ釧ꢥ臢뒡臢뎡뇦겱蓦꺥맦ꖁ闧뒁ꇦꖉ臢ꎅ臢ꢕ臧ꂜ闦늕룦ꖍ跧뎅ꗧ誨賢ꂄ臢ꦹ胯龊苯龊苢랥ꇦꂌ釦ꦹ臢ꆍ胧ꖉ룦꾝꣠誌賢ꂠ뇦ꒁ藦ꂠ맦ꒁ뷦ꂌ뷦뎍郧ꢕ裦능鷦ꖹ賢ꂀ觧놐ꃤꆉ鷧ꆉ臢ꮀ뷦ꚑ藦늕듣ꂌ뗦궕ꗦ뒥賧떍闦뎍꣠誌胣뢁볥뚅ꗦꆉ闦龥뷥ꖱ闦龝ꗦ겕蓣낀賦誨ꓦ꺍闧꒕냣뎑ꗦ꾹맣誼꣢誨胢궅맦ꂴ鳤ꆑ鷧ꆥ胧ꆑ臢꾙郧ꢕ铦뢍釧ꦽꧠꪀ闦뒕맦몀胢랡맦ꂌ觧ꖁ闦ꆱ꣢꾨맦뒁藦ꦹ飧꾥ꗢ誨100.c
#inclde <stdio.h>
/**
* main - Gateway pth of excution
* return: 0 when sure deal
*/

int main(void)
/*{
    int outer, inner;
    for (outer =48;outer<=57;outer++)
    {
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
      