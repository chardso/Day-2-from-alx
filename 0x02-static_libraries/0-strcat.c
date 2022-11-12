#include "main.h"
/**
* _strcat -concatenates two strings
* @dest: destination string
* @src: origin string
* Return: 0
*/
char * _strcat(char *dest, char *src)
{
       int room1, room2;
       for (room1 = 0; dest[room1] !=0; room1++)
       {
       }
       for (room2 = 0; src[room2] !=0; room2++)
       {
             dest[room1] = src[room2];
             room1++
}
dest[room1] = 0;
return (dest);
}
