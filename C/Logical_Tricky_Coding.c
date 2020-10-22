#include<stdio.h>
void sum(int num1,int num2){
    //write a program to print sum of 2 numbers without using '+' operater and print here.
}

void swap(int num1,int num2){
  printf("num1 before swapping is %d\n", num1);
  printf("num2 before swapping is %d\n",num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
   printf("num1 after swapping is %d\n",num1);
    printf("num2 after swapping is %d\n",num2);
}

void isEqual(int num1,int num2){
    //Complete this program to check 2 numbers are equal or not without using Arithematic operators or comparision operators and print the values.
}

void Devide(int num1,int num2){
    //complete to devide num1 by num2 without using '/' and print the values.
}

HellowWorld(){
    
    if (printf("Hello World")) { 

    } 
} 



int main(){
    sum(1,2);
    swap(10,20);
    isEqual(10,20);
    Devide(20,10);
    HellowWorld();
    return 0;
}
