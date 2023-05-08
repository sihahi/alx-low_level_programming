#include "main.h"

/**
 * _strstr - function that searches a string for any of a set of bytes
 * @haystack: string
 * @needle: substring
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
        int itr, jtr;
        char *p;

        itr = 0;
        while (haystack[itr] != '\0')
        {
                jtr = 0;
                while (needle[jtr] != '\0')
                {
                        if (needle[jtr] == haystack[itr])
                        {
                                p = &s[itr];
                                return (p);
                        }
                        jtr++;
                }
                itr++;
        }
        return (0);
}
