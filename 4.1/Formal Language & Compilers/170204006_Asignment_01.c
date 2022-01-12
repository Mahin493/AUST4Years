#include <stdio.h>
int main(void)
{
    FILE *p1, *p2;
    char c;
    p1 = fopen("input1.c", "w");


    while(1)
   {
        scanf("%c",&c);
        if(c=='E')
        break;
        fputc(c,p1);
   }
    fclose(p1);
     p1 = fopen("input1.c", "r");
     p2 = fopen("output.txt","w");
    if(!p1)
        printf("\nFile can't be opened!");
    else
    {

        char c,c2;
        while((c=fgetc(p1))!=EOF)
        {
            if( c == '/')
            {
                if((c2=fgetc(p1))=='*')
                {
                    char cmt1,cmt2;

                    while((cmt1=fgetc(p1))!=EOF)
                    {
                        if(cmt1=='*')
                        {
                            cmt2=fgetc(p1);
                            if(cmt2=='/')
                                break;
                        }
                    }
                }
                else if( c2 == '/')
                {
                    char cm;
                    while((cm=fgetc(p1))!=EOF)
                    {
                        if(cm=='\n')
                            break;
                    }

                }
                else
                {
                    fputc(c,p2);
                    fputc(c2,p2);
                }
            }
            else if(c==' ')
            {
                if((c2=fgetc(p1))==' ')
                    continue;
                else
                {
                    fputc(c,p2);
                    fputc(c2,p2);
                }
            }
            else if(c=='\n'||c=='\t')
            {
                continue;
            }
            else
                {
                    fputc(c,p2);

                }
        }


        fclose(p1);
        fclose(p2);
        printf("Input File:\n");
        p1 = fopen("input1.c","r");
        while((c=fgetc(p1))!=EOF)
            printf("%c",c);
        fclose(p1);

        printf("\n\nOutput File:\n");
        p2 = fopen("output.txt","r");
        while((c=fgetc(p2))!=EOF)
            printf("%c",c);
        fclose(p2);

    }
    return 0;
}


