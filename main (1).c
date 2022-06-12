/******************************************************************************
2.THE PROBLEM GIVEN HERE IS BASED UPON ASCII VALUE. BASICALLY, THIS IS A CASE IN SENSITIVE
PROGRAM.THE CODE DEVELOPED HERE GETS THE INPUT STRING. IT REMOVES THE DUPLIOCATE
CHARACTER IN THE STRING IRRESPECTIVE OF CASE. THAT IS IT DOESNOT DIFFERENTLOWER CASE
AND UPPERCASE. SO, IT PRINTS THE LOWER CASE OF A CHARACTER ONLY.
*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[30]={'E','m','b','e','d','d','e','d',' ',' ','S','y','s','t','e','m','s'};
    int i,j,k;
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!='\0';k++)
                {
                   str[k]=str[k+2]; 
                }
            }
        }
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
    }
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    printf("%s",str);

    return 0;
}