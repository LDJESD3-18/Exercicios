#include <stdio.h>

#define LINHA 5
#define COLUNA 5



int main(){
   
    int matriz[LINHA][COLUNA];
    
    int target =9;
    int found = 0;
 

    //busca condicional do elemnto alvo
     for(int i=0;i < 3;i++){
         for(int j=0;j<3 ;j++){
         if(matriz[i][j]== target){
         printf("O valor %d encontrado no indíce(%d,%d)\n",target,i,j);
         found=1;
         break;


         }





         }

      if(found)break;

     }

      if(!found){
        printf("Elemento %d não encontrado na matriza \n,target");


      }

}