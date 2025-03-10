#include <stdio.h>

      int main(){
  
     char estado;
     char codigo[4];
     char cidade[20];
     int habitantes;
     float area;
     float PIB;
     int turisticos;


     //aqui o jogador colocara outra letra que representa um estado 
     printf("digite uma  letra que representa um estado : ");
     scanf("%c", &estado);

     //aqui o jogador colocara o codigo da carta 
    printf("agora digite o codigo da carta : ");
    scanf("%s", &codigo);
    

    
    //aqui o jogador colocará  o nome da cidade       
    printf("agora digite o nome da cidade : "); 
    scanf("%s", &cidade);


    //aqui o jogador colocar o numero de  habitantes da cidade 
    printf("qual é seu numero de habitantes? : ");
    scanf("%d", &habitantes);


    //aqui o  jogador colocara o tamanho em km² dessa area.
    printf("qual o tamanho  da sua area em km² : ");
    scanf("%f", &area);



    //aqui o jogador colocará o valor em numeros do seu PIB.
    printf("qual o  seu PIB (produto interno bruto) : ");
    scanf("%f", &PIB);


  
    
    //aqui o joggador colocara quantos pontos turisticos erxistem nessa região.
    printf("quantos pontos turisticos existem nessa região? : ");
    scanf("%d", &turisticos);

 


    printf("\n carta 01\n");

    printf("estado : %c\n", estado);

    printf("codigo : %s\n", codigo);

    printf("cidade : %s\n", cidade);

    printf(" habitantes : %d\n", habitantes);

    printf("area em km² : %.3f\n", area);

    printf("PIB : %f\n", PIB);

    printf(" pontos turisticos : %d\n", turisticos);
      

    
        

      char estado2;
      char codigo2[4];
      char cidade2[20];
      float habitantes2;
      float area2;
      float PIB2;
      int turisticos2;





    //aqui o jogador  uma outra letra que representa outro estado 
    printf(" digite outra letra que representa outro estado :  ");
    scanf("%s", &estado2);

    // aqui o  jogador colocará o outro codigo da carta
    printf(" agora digite um outro codigo da carta :  ");
    scanf("%s", &codigo2);
    

    
    //aqui o jogador irá inserir o nome de outra cidade.
    printf("agora digite um outro nome de uma  cidade :  "); 
    scanf("%s", &cidade2);


    //aqui o jogador colocar o numero de  habitantes dessa cidade . 
    printf("qual é seu numero de habitantes? :  ");
    scanf("%f", &habitantes2);


    //aqui o  jogador colocara o tamanho em km² dessa  segunda area.
    printf("qual o tamanho  da sua area em km² :  ");
    scanf("%f", &area2);



    //aqui o jogador colocará o valor em numeros do seu PIB dessa cidade .
    printf("qual o  seu PIB (produto interno bruto) :  ");
    scanf("%f", &PIB2);


  
    
    //aqui o joggador colocara quantos pontos turisticos erxistem nessa região.
    printf("quantos pontos turisticos existem nessa região? :  ");
    scanf("%d", &turisticos2);




    printf("\n carta 02\n");

    printf("estado : %c\n", estado2);

    printf("codigo : %s\n", codigo2);

    printf("cidade : %s\n", cidade2);

    printf(" habitantes : %.3f\n", habitantes2);

    printf("area em km² : %.3f\n", area2);

    printf("PIB : %f\n", PIB2);

    printf("pontos turisticos : %d", turisticos2);


     return 0;
      
      }