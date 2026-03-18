#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            if(islower(str[i]))
            {
                str[i] = toupper(str[i]);
            }
            else
            {
                str[i] = tolower(str[i]);
            }
        }
    }

    printf("%s", str);
    return 0;
}