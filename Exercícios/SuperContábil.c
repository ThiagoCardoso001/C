#include <stdio.h>
#include <stdlib.h>

int main ()
{ 
    int cod; //código 
    float sal, reaj; // auxiliar de escritório, secretário(a), cozinheiro(a), entregador(a), reajuste
printf ("\n Informe o valor do seu salario\n");
scanf ("%f", &sal);
printf ("\n Digite o codigo referente ao cargo \n");
printf ("\n1 = Auxiliar de escritorio\n");
printf ("\n2 = Secretario(a)\n");
printf ("\n3 = Cozinheiro(a)\n");
printf ("\n4 = Entregador(a)\n");
scanf ("%i", &cod );

if(cod == 1){ 
    reaj = sal + (sal * 0.07);
     
}

else if(cod == 2){
     reaj = sal + (sal * 0.09);
      
}


else if(cod == 3){
      reaj = sal + (sal * 0.05);
  
}

else if(cod == 4){
       reaj = sal + (sal * 0.12);
   
    
}

 printf ("O seu salario com reajuste e: %.2f", reaj);
    
return 0;

}