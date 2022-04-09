#include<stdio.h>

char str[1000];

int f = 0 , i = 0;

void Exp(){

      Term();

      if(f == 1 && (str[i] == '+' || str[i] == '-')){
         i++;
         Term();
      }
}

void Term(){

      Factor();

      if(f == 1 &&  (str[i] == '*' || str[i] == '/')){
             i++;
             Factor();
      }
}

void Factor(){
       ID();
       if(f == 1){
        return;
       }
       Num();
       if(f == 1){
        return;
       }
     if(str[i] == '('){
       i++;
       f = 1;
     }
     if(f){
        Exp();
       // f = 1;
     }
     if(f){
        if(str[i] == ')'){
            i++;
            f = 1;
        }else{
          f = 0;
        }
     }else{
       f = 0;
     }

}

void ID(){

    if(str[i] == 'a' || str[i] == 'b' || str[i] == 'c' || str[i] == 'd' || str[i] == 'e'){
        i++;
        f = 1;
        return;
    }else{
       f = 0;
       return;
    }

}

void Num(){
    if(str[i] >= '0' && str[i] <= '9'){
        i++;
        f = 1;
        return;
    }else{
      f = 0;
      return;
    }
}

int main(){

   gets(str);
   Exp();

   if(f == 1 && i == strlen(str)){
      puts("string matched");
   }else{
     puts("string does not matched");
   }





  return 0;
}

//1+(2*3)
//1*4-5/6
//(1+2)*(3+4)+(a-c)/(9-0)
//(1+2)*(3+4)-1*8
