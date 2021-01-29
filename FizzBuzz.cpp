#include<stdio.h>
#include<stdlib.h>

/*FizzBuzz
Escreva um programa que imprima os números de 1 a 100. 
Mas para múltiplos de três imprima “Fizz” em vez do número 
e para os múltiplos de cinco imprima “Buzz”. Para números 
múltiplos de três e cinco, imprima “FizzBuzz”.*/


int main(){

for(int i=0;i<100;i++){

    if(((i % 3)==0) && ((i % 5)==0)){
        printf("fizzBuzz\n");
    }else if((i % 5)==0){
        printf("Buzz\n");

    }else if((i % 3)==0){
        printf("Fizz\n");

    }else{
        printf("%d\n",i); 

    }    
}

return 0;
}
