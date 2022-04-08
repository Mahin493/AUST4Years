#include<stdio.h>

char str[1000];

int f = 0 , i = 0;

void X(){

     int l = strlen(str);

     if(str[i] == 'd'){
        f = 1;
        return;
     }
     if(str[i] == 'b'){
        i++;

        if(str[i] == 'b'){
            i++;
            f = 1;
        }
        else if(str[i] == 'c'){
            i++;
            f = 1;
        }else{
           f = 0;
           return;
        }
     }
     else{
       f = 0;
       return;
     }

     if(i<l-1){
        X();
     }

}
void A(){

    if(str[i] == 'a'){
        i++;
        f = 1;

        if(f){
            X();
        }
        if(f){
            if(str[i] == 'd'){
                i++;
                f = 1;
                return;
            }else{
              f = 0;
              return;
            }
        }
    }else{
        f=0;
        return;
    }
}
int main(){

   gets(str);

   A();

   if(f == 1 && i == strlen(str)){
      puts("string matched");
   }else{
     puts("string does not matched");
   }

  // printf("%d %d\n",i , f);



  return 0;
}
//ad
//abbd
//abcd
//abbbcbbd
//abb
//abc
