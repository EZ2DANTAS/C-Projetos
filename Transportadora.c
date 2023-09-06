#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int pais;
    float preco, precoSeg, precoTran,precoImp,precoTot;
    char  transporte, carga_Per;

    printf("\n Preco: ");
    scanf("%f",&preco);
    fflush(stdin);

    printf("\n Pais: ");
    printf("\n 1 - EUA");
    printf("\n 2 - MEX");
    printf("\n 2 - Outro");
    scanf("%d",&pais);
    fflush(stdin);


    printf("\n Transporte: ");
    printf("\n T - Terrestre");
    printf("\n F - Fluvial");
    printf("\n A - Aereo");
    scanf(" %c",&transporte);
    fflush(stdin);
    transporte = toupper(transporte);


    //Inicio da validação
    while(transporte != 'T' && transporte != 'F' && transporte != 'A')
    {
        printf("\n DIGITE AS OPÇÕES CORRETAMENTE !!!");
        printf("\n Transporte: ");
        printf("\n T - Terrestre");
        printf("\n F - Fluvial");
        printf("\n A - Aereo");
        scanf(" %c",&transporte);
        fflush(stdin);
        transporte = toupper(transporte);
    }
    //FIM da validação

    printf("\n O produto de caracteriza como carga perigos [S]im ou [N]ao: ");
    scanf(" %c",&carga_Per);
    fflush(stdin);
    carga_Per = toupper(carga_Per);

    //Inicio da validação
    while(carga_Per != 'S' && carga_Per != 'N')
    {
        printf("\n DIGITE AS OPÇÕES CORRETAMENTE !!!");
        printf("\n O produto de caracteriza como carga perigos [S]im ou [N]ao: ");
        scanf(" %c",&carga_Per);
        fflush(stdin);
        carga_Per = toupper(carga_Per);
    }
    //FIM da validação

    precoSeg = preco;
    if(preco > 100.0)
    {
        precoImp = (preco * 0.10);
    }
    else
    {
        precoImp =(preco * 0.05);
    }

    if(transporte == 'A'|| pais == 2 ){
     precoSeg = precoSeg * 0.5;
    }
    if(carga_Per == 'S')
    {
        switch(pais)
        {
        case 1:
            precoTran =  5.0;
            break;

        case 2:
           precoTran = 35.0;
            break;

        case 3:
            precoTran =  24.0;
            break;
        }
    }
    else
    {
        switch(pais)
        {
        case 1:
            precoTran =  12.0;
            break;

        case 2:
            precoTran =  37.0;
            break;

        case 3:
            precoTran = 60.0;
            break;
        }



}
precoTot += precoSeg + precoTran + precoImp + preco;

 printf("\n Preco do Produto: %.2f",preco);
 printf("\n Imposto Sobre o Produto: %.2f",precoImp);
 printf("\n Transporte: %.2f",precoTran);
 printf("\n Seguro: %.2f",precoSeg);
 printf("\n Preco total: %.2f",precoTot);
 }
