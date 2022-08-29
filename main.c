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

//função de media
void media(int v[]){

  int i, cont=0;
  float media;
  
  for (i=0; i<1000; i++)
    cont = v[i]+cont;

  media = cont/1000;
  printf ("\nMedia: %.1f",media);
  
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

  

	// inicializa random seed
	srand(time(NULL));

  do{ 
  printf("digite o metodo de randomização: 0 = quick_sort | 1 = bubble_sort | ");
  scanf("%d",&escolha);
    
	// chamada do quicksort
  if(escolha==0)
	  vet[1000] = quick_sort(vet, 0, 1000 - 1);
  //chamada bubblesort
  if(escolha==1)
    vet[1000] = bubble_sort(vet);

  if(escolha < 0 || escolha > 1)
    printf("Voce digitou o numero errado");
    
  }
  while(escolha < 0 || escolha > 1 ); 
	// mostra o vetor ordenado
	for(i = 0; i < tam_vet; i++)
		printf("%d ", vet[i]);

  mediana(vet);

  media(vet);

  maior_menor(vet);
  

	return 0;
}

//função maior e menor
void maior_menor(int v[]){

  printf("\nO menor numero é o: %i",v[0]);
  printf("\ne o maior é: %i",v[999]);
  
}
