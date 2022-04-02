#include <stdio.h>
#include <string.h>
int main()
{

    FILE *f1, *f2;
    f1 = fopen("input.c","r");
    int buff=255;
    char s[buff];
    if(!f1)
    {
        printf("File can not be opened");
        return 0;
    }
    char para[100],ret[100];
    int flag=0;
    while(fgets(s,buff,f1))
    {
        int i=0;
        for(i=0;i<strlen(s)-1;i++)
        {
            if(s[i]=='m')
            {
                if(i+6<strlen(s))
                {
                    if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='i' && s[i+3]=='n' && s[i+4]=='(')
                    {
                        i+=5;
                        int j=0;
                        while(s[i]!=')' && i<strlen(s))
                        {
                            para[j]=s[i];
                            j++;
                            i++;
                        }
                    }
                }
            }

        }
    }
    printf("Parameter(s): %s\n",para);

    fclose(f1);
}
