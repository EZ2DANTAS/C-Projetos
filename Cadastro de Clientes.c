//Projeto 2: Cadastro de Clientes em C
//Um projeto de cadastro de clientes é uma maneira prática de entender como armazenar e gerenciar dados usando a linguagem C.

//Neste projeto, você criará um sistema simples para cadastrar clientes, onde poderá adicionar, visualizar, editar e excluir informações dos clientes.

//O objetivo é praticar a manipulação de dados e o uso de estruturas de controle.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cliente
{
    int cod;
    char nome[100];
    int idade;
    char sexo;
    float salario;


};


void imprimir()
{
    struct cliente c;
    system("cls");
    printf(" \tCod: %d",c.cod);
    printf(" \tNome: %s",c.nome);
    printf(" \tIdade: %d",c.idade);
    printf(" \tSexo: %c",c.sexo);
    printf(" \tSalario: %.2f",c.salario);

}


void lerCliente()
{
    struct cliente c;
    c.cod = 0;
    c.cod++;
    printf("\n \tDigite o nome do cliente: ");
    fgets(c.nome,99,stdin);
    fflush(stdin);

    printf("\n \tDigite a Idade do cliente: ");
    scanf("%d",&c.idade);
    fflush(stdin);

    while(c.idade <= 17)
    {
        printf("\n \tPessoas Menores de 18 anos não podem trabalhar !");
        printf("\n \tDigite a Idade CORRETA do cliente: ");
        scanf("%d",&c.idade);
        fflush(stdin);
    }

    printf("\n \tDigite o Sexo M/F do cliente: ");
    c.sexo = getchar();
    c.sexo = toupper(c.sexo);
    fflush(stdin);

    while(c.sexo != 'M' && c.sexo != 'F')
    {
        printf("\n \tDigite o Sexo CORRETAMENTE M/F do cliente: ");
        c.sexo = getchar();
        c.sexo = toupper(c.sexo);
        fflush(stdin);
    }

    printf("\n \tDigite o Salario do cliente: ");
    scanf("%f",&c.salario);
    fflush(stdin);

}
int main()
{
    lerCliente();
    imprimir();
    return 0;
}
