#include <stdio.h> // biblioteca de entrada e saida
#include <string.h> // biblioteca para manipulação de strings


int main (){

    float soma;
    char nome[20], sobrenome[20];

printf("digite seu nome - ");
scanf("%s", &nome);

printf("digite seu sobre nome - ");
scanf("%s", &sobrenome);

printf("%s\n%s\n", nome, sobrenome);

strlen(nome);
strlen(sobrenome);

printf("%d\n%d\n%d\n", strlen(nome) + strlen(sobrenome));


}