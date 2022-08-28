#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h> // time

//função bubble sort
int bubble_sort(int numeros[]){

    int i, r, aux;
      for(i = 0; i < 1000; i++){
          for(r = i; r < 1000; r++){
                if (numeros[i] > numeros[r]){
                   aux = numeros[r];
                   numeros[r] = numeros[i];
                   numeros[i] = aux;
                  }
          }  
      }
  return numeros[1000];
}
  
int main()
{
      printf("Hello World");
    return 0;
}