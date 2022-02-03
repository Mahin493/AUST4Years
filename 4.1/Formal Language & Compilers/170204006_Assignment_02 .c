#include<stdio.h>
#include<string.h>

void comment_newline()
{
    FILE *p1, *p2, *p3;
    char c,ch1,ch2[1000];
    int i=0;

    p2=fopen("input.txt","w");
    printf("Write a program: \n");
    scanf("%[^\t]s", ch2);
    while(i<strlen(ch2))
    {

        fputc(ch2[i],p2);
        i++;
    }
    fclose(p2);
    p2=fopen("input.txt","r");
    p3=fopen("new_code1.txt","w");
    while((c=fgetc(p2))!=EOF)
    {
        if(c=='\n')
            putc(' ',p3);
        else if(c=='/')
        {
            ch1=fgetc(p2);
            if(ch1=='/')
            {
                while((c=fgetc(p2))!='\n');
                continue;
            }
            else if(ch1=='*')
            {
                while((c=fgetc(p2))!='*');
                if((c=fgetc(p2))=='/')
                    continue;
            }
            else
            {
                putc(c,p3);
                putc(ch1,p3);
            }

        }
        else
            fputc(c,p3);

    }
    fclose(p3);
    fclose(p2);
    p2=fopen("new_code2.txt","w");
    p3=fopen("new_code1.txt","r");
    while((c=fgetc(p3))!=EOF)
    {
        if(c=='\t' || c==' ')
        {
            while((c=fgetc(p3))=='\t' || c==' ');
            fputc(' ',p2);

        }
        fputc(c,p2);

    }
    fclose(p3);
    fclose(p2);
    printf("\n\n");
    p2=fopen("new_code2.txt","r");
    printf("Filtered code is : \n\n");
    while((c=fgetc(p2))!=EOF)
    {
        printf("%c",c);

    }
    fclose(p2);
}


void Lexemes()
{
    FILE *fp1, *fp2;
    fp1 = fopen("new_code2.txt", "r");
    fp2 = fopen("lexeme.txt", "w");
    char ch1, ch2;
    char separator[] = ";,:'";
    char operators[] = "+-*/=&|!<>%";
    char parenthesis[] = "(){}[]";
    if (!fp1)
    {
        printf("File can not be opened");
    }
    while ((ch1 = fgetc(fp1)) != EOF)
    {
        int i = 0, j = 0, k = 0;

        if (ch1 == '<' || ch1 == '>' || ch1 == '=')
        {
            ch2 = fgetc(fp1);
            if (ch2 == '=')
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(ch2, fp2);
                fputc(' ', fp2);
            }
            else
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(' ', fp2);
                if (ch2 != ' ')
                    fputc(ch2, fp2);
            }
            continue;
        }

        if (ch1 == '+' || ch1 == '-')
        {
            ch2 = fgetc(fp1);
            if (ch2 == '=' || ch2 == '+' || ch2 == '-')
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(ch2, fp2);
                fputc(' ', fp2);
            }
            else
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(' ', fp2);
                if (ch2 != ' ')
                    fputc(ch2, fp2);
            }
            continue;
        }

        if (ch1 == '&' || ch1 == '|')
        {
            ch2 = fgetc(fp1);
            if (ch2 == '&' || ch2 == '|')
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(ch2, fp2);
                fputc(' ', fp2);
            }
            else
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(' ', fp2);
                if (ch2 != ' ')
                    fputc(ch2, fp2);
            }
            continue;
        }

        if (ch1 == '!')
        {
            ch2 = fgetc(fp1);
            if (ch2 == '=')
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(ch2, fp2);
                fputc(' ', fp2);
            }
            else
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(' ', fp2);
                if (ch2 != ' ')
                    fputc(ch2, fp2);
            }
            continue;
        }

        for (j = 0; j < 4; j++)
        {
            if (ch1 == separator[j])
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(' ', fp2);
                k = 1;
                break;
            }
        }
        for (j = 0; j < 11; j++)
        {
            if (ch1 == operators[j])
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(' ', fp2);
                k = 1;
                break;
            }
        }
        for (j = 0; j < 6; j++)
        {
            if (ch1 == parenthesis[j])
            {
                fputc(' ', fp2);
                fputc(ch1, fp2);
                fputc(' ', fp2);
                k = 1;
                break;
            }
        }
        if (k)
            continue;
        fputc(ch1, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}





int tokenize()
{
    char ch, buffer[20], operators[] = "+-*/%&|!", parenthesis[] = "(){}[]" ;
    char separator[] = ";,"":'!";

    FILE *fp1, *fp2;

    int i, j = 0;
    int error = 0;

    fp1 = fopen("lexeme.txt", "r");
    fp2 = fopen("token.txt", "w");

    if (fp1 == NULL)
    {
        printf("\nFile can't be opened!");
        exit(0);
    }

    while ((ch = fgetc(fp1)) != EOF)
    {

        for (i = 0; i < 8; ++i)
        {
            if (ch == operators[i])
            {

                    char key[] = "[op ";
                    int m = strlen(key);
                    int l = 0;
                    for (l = 0; l < m; l++)
                        fputc(key[l], fp2);
                    fputc(ch, fp2);
                    fputc(']', fp2);
                    fputc(' ', fp2);
            }

        }
        for (i = 0; i < 6; ++i)
        {
            if (ch == parenthesis[i])
            {
                char key[] = "[par ";
                int m = strlen(key);
                int l = 0;
                for (l = 0; l < m; l++)
                    fputc(key[l], fp2);
                fputc(ch, fp2);
                fputc(']', fp2);
                fputc(' ', fp2);
            }
        }

        for (i = 0; i < 6; ++i)
        {
            if (ch ==separator[i])
            {
                char key[] = "[sep ";
                int m = strlen(key);
                int l = 0;
                for (l = 0; l < m; l++)
                    fputc(key[l], fp2);
                fputc(ch, fp2);
                fputc(']', fp2);
                fputc(' ', fp2);
            }
        }



    }
    fclose(fp1);
    fclose(fp2);
    return error;
}


int main()
{
    comment_newline();
    Lexemes();
    int e = tokenize();
    printf("\n");
    char c;
    FILE *p1;
    printf("\n\n");
    printf("After Tokenization : \n\n");
    p1 = fopen("token.txt","r");

    while((c=fgetc(p1))!=EOF)
            printf("%c",c);

    fclose(p1);

    return 0;
}

/*

#include<stdio.h>

int main() {
   //Sum of two numbers
   int a, b, sum;

   printf("\nEnter two no: ");
   scanf("%d %d", &a, &b);

   sum = a + b;

   printf("Sum : %d", sum);

   return(0);
}


*/
