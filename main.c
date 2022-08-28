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

//função quick sort
int quick_sort(int numeros[],int primeiro,int ultimo){
   int i, j, pivot, temp;
   if(primeiro<ultimo){
      pivot=primeiro;
      i=primeiro;
      j=ultimo;
      while(i<j){
         while(numeros[i]<=numeros[pivot]&&i<ultimo)
         i++;
         while(numeros[j]>numeros[pivot])
         j--;
         if(i<j){
            temp=numeros[i];
            numeros[i]=numeros[j];
            numeros[j]=temp;
         }
      }
      temp=numeros[pivot];
      numeros[pivot]=numeros[j];
      numeros[j]=temp;
      quick_sort(numeros,primeiro,j-1);
      quick_sort(numeros,j+1,primeiro);
   }
  return numeros[1000];
}

void mediana(int v[]){
	int T = 1000; //alterar o valor de 10 para 1000
	int mediana;
	mediana = v[T/2-1];   //por algum motivo no meu só dava certo tirando 1 da conta
	printf("\nMediana: %i", mediana);
	
}
  
int main()
{
	// vetor que será ordenado
	int vet[1000], escolha;
	int tam_vet = sizeof(vet) / sizeof(int);
	int i, r;

  srand(time(NULL)); ///função para gerar números aleatórios em que a seed muda a cada vez que o programa é executado

    for( i = 0; i < 1000; i++)
    {
        r = (rand() % 1000) + 1;
        vet[i] = r;
    }

    printf("1000 Numeros Aleatorios devidamente ordenados de forma crescente:\n");
    putchar('\n');
}
