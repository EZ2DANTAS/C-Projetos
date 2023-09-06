#include <stdio.h>
#include<ctype.h>>
#include<stdlib.h>>

int main()
{
    char esc;

    struct alunoFa
    {
        int numeroM;
        char nome[30];
        int idade;
        float mensalidade;
        char dataM[20];

    };



    do
    {

        struct alunoFa aluno, *ptr_aluno;
        ptr_aluno=&aluno;

        printf("\n Digite o numero do aluno ");
        scanf("%d",&ptr_aluno->numeroM);
        printf("\n Digite o nome do aluno ");
        scanf(" %s",&ptr_aluno->nome);
        printf("\n Digite a idade do aluno ");
        scanf(" %d",&ptr_aluno->idade);
        printf("\n Digite a Mensalidade do aluno ");
        scanf(" %f",&ptr_aluno->mensalidade);
        printf("\n Digite a data de Matricula ");
        scanf(" %s",&ptr_aluno->dataM);


        printf("\n Numero %d",ptr_aluno->numeroM);
        printf("\n Nome %s",ptr_aluno->nome);
        printf("\n Idade %d",ptr_aluno->idade);
        printf("\n Mensalidade %.2f",ptr_aluno->mensalidade);
        printf("\n Data de Matricula %s",ptr_aluno->dataM);

        //deseja sair?
        printf("\n Deseja continuar");
        scanf(" %c",&esc);
        fflush(stdin);
        esc = toupper(esc);
    }
    while(esc == 'S');






    return(0);
}
