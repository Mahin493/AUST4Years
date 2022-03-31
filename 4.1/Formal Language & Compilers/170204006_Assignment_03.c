#include<stdio.h>
#include<string.h>

int isSep(char ch){

    if(ch == '\'' || ch == ',' || ch == ';' || ch == ' '){
        return 1;
    }
    return 0;
}

int sepa(char *ch){
    if(strcmp("," , ch) == 0   || strcmp(";" ,ch) == 0 || strcmp(" " ,ch) == 0 || strcmp("\'" , ch) == 0){
        return 1;
    }
    return 0;
}
int isOP(char ch){
    if(ch == '+' || ch == '-' || ch =='*' || ch =='/' || ch =='>' || ch =='<' || ch == '!' || ch =='='){
        return 1;
    }
    return 0;
}
int isPAR(char ch){
    if(ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == '[' || ch == ']'){
        return 1;
    }
    return 0;
}
int par(char *ch){
    if(strcmp(ch , "(") == 0 || strcmp(ch , ")") == 0 || strcmp(ch , "{") == 0 || strcmp(ch , "}") == 0
       || strcmp(ch , "[") == 0 || strcmp(ch , "]") == 0 ){
        return 1;
       }
       return 0;

}
int iskey(char *ch){

    if(strcmp(ch , "int") == 0 || strcmp(ch , "double") == 0 || strcmp(ch , "float") == 0
       || strcmp(ch , "if") == 0 || strcmp(ch ,"else") == 0 || strcmp(ch , "char") == 0 || strcmp(ch , "include") == 0
       || strcmp(ch , "return") == 0 || strcmp(ch , "stdio.h") == 0 || strcmp(ch , "string.h") == 0 || strcmp(ch , "#") == 0
       || strcmp(ch , "void") == 0){
        return 1;
       }
       return 0;
}

int isDigit(char ch){
    if(ch >= '0' && ch <= '9'){
        return 1;
    }
    return 0;
}
int isAlpha(char str){
    if((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')){
        return 1;
    }
    return 0;
}
int id(char *str){
    int n = strlen(str);
    int f = 0;

    for(int i = 0 ; i<n ; ++i){
        if (isAlpha(str[i]) || str[i] == '_'){
          ++i;
          if(i<n){
             for(; i<n ;++i){
              if(isAlpha(str[i]) || isDigit(str[i]) || str[i] == '_'){
                continue;
              }else{
                return 0;
              }
             }
          }

        }else{
          return 0;
        }
    }
    return 1;

}

int oper(char *str){
    if(strcmp(str , "+") == 0|| strcmp(str , "-") == 0 || strcmp(str , "*") == 0 || strcmp(str , "/") == 0
       ||strcmp(str , "==") == 0|| strcmp(str , ">=") == 0|| strcmp(str , "<=") == 0
       || strcmp(str , ">") == 0|| strcmp(str , "<") == 0 || strcmp(str , "!") == 0|| strcmp(str , "=") == 0){

         return 1;
       }
       return 0;
}
int isNum(char *lex)
{
    int i, l, s;
    i=0;
    if(isDigit(lex[i]))
    {
        s=1;
        i++;
    }
    else if(lex[i]=='.')
    {
        s=2;
        i++;
    }
    else s=0;
    l=strlen(lex);
    if(s==1)
        for(; i<l; i++)
        {
            if(isDigit(lex[i]))  s=1;
            else if(lex[i]=='.')
            {
                s=2;
                i++;
                break;
            }
            else
            {
                s=0;
                break;
            }
        }
    if(s==2)
        if(isDigit(lex[i]))
        {
            s=3;
            i++;
        }
        else
            s=0;
    if(s==3)
        for(; i<l; i++)
        {
            if(isDigit(lex[i]))  s=3;
            else
            {
                s=0;
                break;
            }
        }
    if(s==3) s=1;
    return s;
}
char Name[100][100];
char IdType[100][100];
char DataType[100][100];
char Scope[100][100];
char Value[100][100];

char Name1[100][100];
char IdType1[100][100];
char DataType1[100][100];
char Scope1[100][100];
char Value1[100][100];

int sl = 0 , sln = 0 , sl2 = 0;

char new_cr[1000];

void display(){
     printf("Sl.no  Name \t Id Type \t Data Type \t Scope  \tValue\n");

     for(int i = 0 ; i<sl ; ++i){
      printf("%d \t %s \t %s \t %s \t %s \t%s\n" ,i+1,Name[i],IdType[i],DataType[i],Scope[i] ,Value[i]);
     }
}

void update(){

        for(int i = 0 ; i<sl ; ++i){

                for(int j = 0 ; j<sl2 ; ++j){
                    if(strcmp(Name[i] , Name1[j])==0 && strcmp(Scope[i],Scope1[j]) == 0){
                            if(strcmp(Value1[j] , "") != 0){
                                strcpy(Value[i] , Value1[j]);
                            }

                    }
                }

        }
}

void output(char *str){
    printf("\n\n");
    char arr[100] ,arr2[100] , arr3[100];
    int n = strlen(str);
    int pos = 0;
    int k = 0;
    for(int i = 0 ; i<n ;++i){
            if(str[i] == 'i' && str[i+1] == 'd'){
                char string[20];
                int q = i + 2 , r = i , w = i-1 ;
                   while(str[q] != ']'){
                        arr[pos] = str[q];
                        ++q , ++pos;
                       }
                       if(str[q] == ']'){
                        arr[pos] = '\0';
                        pos = 0;
                       }

                       while(str[++r] != '[');
                 if(str[r + 1] == '('){
                      arr2[0] = 'f' , arr2[1] = 'u', arr2[2]= 'n' , arr2[3] = 'c' , arr2[4] = '\0';
                    }else{
                      arr2[0] = 'v' , arr2[1] = 'a', arr2[2]= 'r' , arr2[3] = '\0';
                    }
                    if(strcmp(arr2 , "func") == 0){
                    scope:;
                       arr3[0] = 'g' , arr3[1] = 'l', arr3[2]= 'o' , arr3[3] = 'b' , arr3[4] = 'a',
                       arr3[5] = 'l' , arr3[6] = '\0';
                    }else{
                         while(str[--w] != '(');
                         if(str[w] == '(' && w>=0){
                                w-=3;
                                int pos = 0;
                                while(str[w] != ' '){
                                     arr3[pos] = str[w];
                                     ++pos , --w;
                                   }

                                    if(str[w] == ' '){
                                    arr3[pos] = '\0';
                                    pos = 0;
                                    strrev(arr3);
                                   }

                         }else{
                               goto scope;
                            }
                    }
                       for(int j = 0 ;j<sl ; ++j){

                            if(strcmp(Name[j] , arr) == 0 && strcmp(Scope[j] , arr3) == 0){
                                itoa(j+1,string,10);
                            }
                       }
                        while(str[++i] != ']');
                                new_cr[k] = 'i';
                                k++;
                                new_cr[k] = 'd';
                                k++;
                                new_cr[k] = ' ';
                                k++;
                        for(int p = 0 ; p<strlen(string) ; ++p){
                            new_cr[k] = string[p];
                            k++;
                        }
                        new_cr[k] = ']';
                        k++;
            }
            else{
                new_cr[k] = str[i];
                ++k;
            }

    }
    new_cr[k] ='\0';

    puts(new_cr);
}

void insert(int sl , char *s1 , char *s2 , char *s3 , char *s4 , char *s5){

       int i =0;
       for(i = 0 ; i<strlen(s1) ; ++i){
          Name[sl][i] = s1[i];
       }
       Name[sl][i] = '\0';
       i = 0;
       for(i = 0 ; i<strlen(s2) ; ++i){
          IdType[sl][i] = s2[i];
       }
       IdType[sl][i] = '\0';
       i = 0;
       for(i = 0 ; i<strlen(s3) ; ++i){
          DataType[sl][i] = s3[i];
       }
       DataType[sl][i] = '\0';
       i = 0;
       for(i = 0 ; i<strlen(s4) ; ++i){
          Scope[sl][i] = s4[i];
       }
       Scope[sl][i] = '\0';
       i = 0;
       for(i = 0 ; i<strlen(s5) ; ++i){
          Value[sl][i] = s5[i];
       }
       Value[sl][i] = '\0';


}

void insert1(int sl , char *s1 , char *s2 , char *s3 , char *s4 , char *s5){

       int i =0;
       for(i = 0 ; i<strlen(s1) ; ++i){
           Name1[sl][i] = s1[i];
       }
       Name1[sl][i] = '\0';
       i = 0;
       for(i = 0 ; i<strlen(s2) ; ++i){
          IdType1[sl][i] = s2[i];
       }
       IdType1[sl][i] = '\0';
       i = 0;
       for(i = 0 ; i<strlen(s3) ; ++i){
         DataType1[sl][i] = s3[i];
       }
       DataType1[sl][i] = '\0';
       i = 0;
       for(i = 0 ; i<strlen(s4) ; ++i){
          Scope1[sl][i] = s4[i];
       }
       Scope1[sl][i] = '\0';
       i = 0;
       for(i = 0 ; i<strlen(s5) ; ++i){
           Value1[sl][i] = s5[i];
       }
       Value1[sl][i] = '\0';


}

int search1(int n , char *str1 , char *str2){

        for(int i = 0 ; i<n ; ++i){
               if(strcmp(Name[i] , str1) == 0){
                   if(strcmp(Scope[i] , str2) == 0){
                     return 0;
                   }else{
                     return 1;
                   }
               }
        }
        return 1;

}

void search(char *str){


        char arr[20] , arr1[20] , arr2[20] , arr3[20] , arr4[20] , ar1[100] , ar2[100];
        int n = strlen(str);

        int pos = 0 , pos1 = 0;

        strcpy(ar1 , "global");
        strcpy(ar2 , "");

        for(int i = 0 ; i<n ; ++i){

          if(str[i] == 'i' && str[i+1] == 'd'){

            int p = i-3 , q = i+2 , r = i , w = i-1 , o = i;

                   while(str[p] != '['){
                     arr1[pos1] = str[p];
                     ++pos1 , --p;
                   }

                    if(str[p] == '['){
                    arr1[pos1] = '\0';
                    pos1 = 0;
                    strrev(arr1);
                   }
                   while(str[++r] != '[');

                   if(str[r + 1] == '('){
                      arr2[0] = 'f' , arr2[1] = 'u', arr2[2]= 'n' , arr2[3] = 'c' , arr2[4] = '\0';
                    }else{
                      arr2[0] = 'v' , arr2[1] = 'a', arr2[2]= 'r' , arr2[3] = '\0';
                    }

                    if(strcmp(arr2 , "func") == 0){
                    scope:;
                       arr3[0] = 'g' , arr3[1] = 'l', arr3[2]= 'o' , arr3[3] = 'b' , arr3[4] = 'a',
                       arr3[5] = 'l' , arr3[6] = '\0';
                    }else{
                         while(str[--w] != '(');
                         if(str[w] == '(' && w>=0){
                                w-=3;
                                int pos = 0;
                                while(str[w] != ' '){
                                     arr3[pos] = str[w];
                                     ++pos , --w;
                                   }

                                    if(str[w] == ' '){
                                    arr3[pos] = '\0';
                                    pos = 0;
                                    strrev(arr3);
                                   }

                         }else{
                               goto scope;
                            }
                    }

                    while(str[++o] != ']');
                    o +=2;

                    if(str[o] == '='){
                        o+=3;
                          int pos = 0;
                         while(str[o] != ']'){
                            arr4[pos] = str[o];
                                ++pos , ++o;
                            }

                            if(str[o] == ']'){
                            arr4[pos] = '\0';
                            pos = 0;
                            }

                    }else{
                       arr4[0] ='\0';
                    }

                      while(str[q] != ']'){
                        arr[pos] = str[q];
                        ++q , ++pos;
                       }

                       if(str[q] == ']'){
                        arr[pos] = '\0';
                        pos = 0;
                       }

                       insert1(sl2++ , arr , arr2 ,arr1 , arr3 , arr4);
                        if(search1(sl , arr , arr3) == 1){
                            insert(sl , arr , arr2 ,arr1 , arr3 , arr4);
                        }else{
                             continue;
                        }
                           ++sl;

                    ++i;
          }

        }
}


int main(){

        char a[1000];
        char b[1000];
        char str[1000];
        FILE *fp = fopen("input1.c","w");
        FILE *p2 = fopen("output.txt" , "w");
        FILE *p3 = fopen("output1.txt" , "w");


        while (1) {
            gets(str);
            if (strcmp(str, "end") == 0)
                  break;
            strcat(str, "\n");
            fputs(str, fp);
        }
        fclose(fp);
        fp = fopen("input1.c","r");

        char ch;
        int pos = 0;
        if(fp == NULL){
            printf("File doesn't exist\n");
        }else{
            while(!feof(fp)){
              ch = fgetc(fp) ;
              a[pos] = ch;
              pos++;
            }
            a[pos] = '\0';
            fclose(fp);
        }

         for(int i = 0 ; i < strlen(a) ; ++i){
               if(a[i] == '\n'){
                  continue;
               }
               else if(a[i] == '/' && a[i+1] == '/'){
                    ++i;
                    while(a[++i] != '\n'){
                        continue;
                    }
               }
               else if(a[i] == '/' && a[i+1] == '*'){
                ++i;
                while(a[++i] !='/'){
                        continue;
                }
               }
               else{
                 fputc(a[i] , p2);
                }
        }

        fclose(p2);

        p2 = fopen("output.txt" , "r");

        pos = 0;
      if(p2 == NULL){
            printf("File doesn't exist\n");
        }else{
            while(!feof(p2)){
              ch = fgetc(p2) ;
              a[pos] = ch;
              ++pos;
            }
            a[pos] = '\0';
            fclose(p2);
        }

        puts(a);

        int n = strlen(a);
        int j = 0;
        for(int i = 0 ; i<n ; ++i){
             if (isSep(a[i]) == 1){
                if(a[i] == ' '){
                    b[j] = a[i];
                    ++j;
                }
                else if(a[i] == '\'' || a[i] == '\'' || a[i] == ';' || a[i] == ','){

                     if((a[i] == ';' && a[i+1] == ' ') || (a[i] == ',' && a[i+1] == ' ')){
                            b[j] = ' ';
                            ++j;
                            b[j] = a[i];
                            ++j;
                            b[j] = ' ';
                            ++j, ++i;
                     }
                     else{
                        b[j] = ' ';
                        ++j;
                        b[j] = a[i];
                        ++j;
                        b[j] = ' ';
                        ++j;
                     }
                }
             }
             else if(isOP(a[i]) == 1){

                    if((a[i] == '=' && a[i+1] == '=') ||(a[i] == '<' && a[i+1] == '=')
                           || (a[i] == '>' && a[i+1] == '=')){
                        b[j] = ' ';
                        ++j;
                        b[j] = a[i];
                        ++j;
                        b[j] = a[i+1];
                        ++j;
                        b[j] = ' ';
                        ++j,++i;
                    }
                    else{
                        b[j] = ' ';
                        ++j;
                        b[j] = a[i];
                        ++j;
                        b[j] = ' ';
                        ++j;
                    }
             }
             else if(isPAR(a[i]) == 1){
                    b[j] = ' ';
                    ++j;
                    b[j] = a[i];
                    ++j;
                    b[j] = ' ';
                    ++j;
             }
             else if(a[i] == '#'){
                b[j] = a[i];
                ++j;
                b[j] = ' ';
                ++j;
             }
             else{
               b[j] = a[i];
               ++j;
             }
        }

        b[j] = '\0' ;

        int l = strlen(b);
        printf("Separating Lexeme: \n\n");
        printf("%s\n" , b);

        printf("\n\n");

        j = 0;

        char new_ar[1000];

        char new_br[1000];
        int c = 0;
        for(int i = 0 ; i<l ;++i){
            if(b[i] == ' '){
             new_ar [j] = '\0';
            if(strlen(new_ar) == 0){
                j  =0;
                continue;
              }
            if(sepa(new_ar) == 1){
                printf("[sep %s]" , new_ar);
                new_br[c++] = '[';
                for(int k = 0 ; k<strlen(new_ar) ; ++k){
                        new_br[c++] = new_ar[k];
                 }
                new_br[c++] = ']';
                j = 0;
             }
             else if(iskey(new_ar) == 1){
               printf("[kw %s]" , new_ar);
                new_br[c++] = '[';
                for(int k = 0 ; k<strlen(new_ar) ; ++k){
                        new_br[c++] = new_ar[k];
                 }
                new_br[c++] = ']';
               j = 0;
             }
             else if(id(new_ar)== 1){
               printf("[id %s]" , new_ar);
               new_br[c++] = '[' , new_br[c++] = 'i' , new_br[c++] = 'd' , new_br[c++] = ' ';
               for(int k = 0 ; k<strlen(new_ar) ; ++k){
                new_br[c++] = new_ar[k];
               }
               new_br[c++] = ']';
               j = 0;
             }
             else if(oper(new_ar) == 1){
                 printf("[op %s]" , new_ar);
                  new_br[c++] = '[';
                  for(int k = 0 ; k<strlen(new_ar) ; ++k){
                        new_br[c++] = new_ar[k];
                 }
                new_br[c++] = ']';
                 j = 0;
             }
              else if(par(new_ar) == 1){
                printf("[par %s]" , new_ar);
                j = 0;
                 new_br[c++] = '[';
                for(int k = 0 ; k<strlen(new_ar) ; ++k){
                        new_br[c++] = new_ar[k];
                 }
                new_br[c++] = ']';
             }
             else if(isNum(new_ar) == 1){
                 printf("[num %s]" , new_ar);
                 j = 0;
                  new_br[c++] = '[';
                for(int k = 0 ; k<strlen(new_ar) ; ++k){
                        new_br[c++] = new_ar[k];
                 }
                new_br[c++] = ']';
             }
             else{
                 printf("[unkn %s]" , new_ar);
                 j = 0;
                  new_br[c++] = '[';
                for(int k = 0 ; k<strlen(new_ar) ; ++k){
                        new_br[c++] = new_ar[k];
                 }
                new_br[c++] = ']';
             }
            }else{
              new_ar[j++] = b[i];
            }
        }

        new_br[c] = '\0';

        printf("\n\n\n");
        printf("Separating token:\n\n");
        puts(new_br);
        printf("\n\n\n");

        n = strlen(new_br);

        search(new_br);
        update();
        printf("\n\n");
        printf("Step 2: Symbol Table generation: \n\n");
        display();
        printf("\n\n");
        printf("Step 4: Modified token stream for Syntax Analysis: \n\n");
        output(new_br);

        if(p3 == NULL){
            printf("File doesn't exist\n");
        }else{
               for(int i = 0 ; i<strlen(new_cr) ; i++){
                 fputc(new_cr[i] , p3);
               }
            printf("Successfully Written\n\n");

            fclose(p3);
        }


      return 0;
}
//char c; int x1, x_2; float y1, y2; x1=5; x_2= 10; y1=2.5+x1*45; y2=100.o5-x_2/3; if(y1<=y2) c='y'; else c='n';


/*
// A program fragment
double f1(int x)
{
double z;
z = 0.01;
z = 35;
return z;
}
//* Beginning of 'main'
int main(void)
{
int n1; double z;
n1=25;

*/
