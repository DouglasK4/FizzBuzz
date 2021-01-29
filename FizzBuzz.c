#include<stdio.h>
#include<stdlib.h>

/*FizzBuzz
Escreva um programa que imprima os números de 1 a 100. 
Mas para múltiplos de três imprima “Fizz” em vez do número 
e para os múltiplos de cinco imprima “Buzz”. Para números 
múltiplos de três e cinco, imprima “FizzBuzz”.*/
void FizzBuzz(int j){
    while (j<=100){
    
        if(((j % 3)==0) && ((j % 5)==0)){
            printf("fizzBuzz\n");

        }else if((j % 5)==0){
            printf("Buzz\n");

        }else if((j % 3)==0){
            printf("Fizz\n");

        }else{
            printf("%d\n",j); 

        }    
     j++;
    }   
}

int main(){

int i=0;

FizzBuzz(i);

return 0;
}
