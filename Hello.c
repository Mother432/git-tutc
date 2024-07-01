#include <stdio.h>
#include <string.h>

void padString(char *str, int totalWidth)
{
    int len = strlen(str);
    if (len >= totalWidth)
    {
        printf("%s\n",str); 
    } 
    else
    {
        int numStars = totalWidth - len;
        for (int i=0;i<numStars;i++)
        {
          printf("*");
         }
        printf("%s\n",str);
    }
}

int main() {
    char str[] = "Hello";
    int totalWidth = 10;
    
    padString(str, totalWidth);
    
    return 0;
}
