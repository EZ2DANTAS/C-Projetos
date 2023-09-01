#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
    int numeroOp,numeroPc;
    float salarioM = 1320.00;
    float extra, salarioT, mediaPCM, mediaPCF, maior;
    char resp, sexo,m,f;
    int classe, n, pecasT, pcM , pcF, nOP;
    int ma,fe;

    char nome[21];

    m =0;
    f=0;
    maior = 0;
    pecasT = 0;
    numeroOp =0;

    pcM =0;
    pcF = 0;
    do
    {
        numeroOp++;
        printf("\n Digite o nome do Operador: ");
        scanf("%s",nome);


        printf("\n Nome: %s  Numero: %d",nome, numeroOp);

        printf("\n Numero do Operario %d",numeroOp);
        printf("\n Digite o numero de Pecas produzidas: ");
        scanf(" %d",&numeroPc);
        printf("\n Sexo M ou F: ");
        scanf(" %c",&sexo);


        sexo = toupper(sexo);

        if(numeroPc <= 30)
        {
            classe = 1;


        }
        if(numeroPc >= 30 && numeroPc <= 35)
        {
            classe = 2;
            n = numeroPc - 30;
            extra = (salarioM * 0.03) * n;
            salarioM += extra;

        }
        if(numeroPc > 35)
        {
            classe = 3;
            n = numeroPc - 30;
            extra = (salarioM * 0.05) * n;
            salarioM += extra;

        }

        if(sexo == 'M'){
            pcM += numeroPc;
            ma++;
            mediaPCM = pcM / ma;
        }else{
            pcF += numeroPc;
            fe++;
            mediaPCF = pcF / fe;
        }

        if(maior < salarioM){

            maior = salarioM;
            nOP = numeroOp;
        }
        printf("salario do operador %.2f ",salarioM);

        fflush(stdin);
        printf("\n Deseja Continuar o Cadastro [S]im ou [N]ão");
        resp=getchar();
        resp = toupper(resp);
        pecasT += numeroPc;
        salarioT += salarioM;
        getchar();

         salarioM = 1320.00;
    }
    while(resp == 'S');
         printf("\n Folha de pagamento %.2f ",salarioT);
         printf("\n Total de peças no mês %d ",pecasT);
         printf("\n Media de peças Masculina no mês %.2f ",mediaPCM);
         printf("\n Media de peças Feminina no mês %.2f ",mediaPCF);
         printf("\n Maior salario foi do funcionario: %d que foi:R$ %.2f",nOP,maior);

}
