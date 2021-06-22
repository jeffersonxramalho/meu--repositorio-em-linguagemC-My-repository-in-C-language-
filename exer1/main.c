#include <stdlib.h>
#include <stdio.h>

int main(Void)
{
int cpf,telefone;
char nome[20], sexo[20];

printf("Informe seu nome: ");
fgets(nome,100,stdin);
printf("Informe seu sexo M-masculino F-feminino:");
fgets(sexo,11,stdin);
printf("Informe seu cpf: ");
scanf("%i",&cpf);
printf("Informe seu telefone: ");
scanf("%i",&telefone);



printf("Seu nome é: %s",nome);
printf("Seu sexo é: ");puts(sexo);
printf("Seu cpf é: %i\n",cpf);
printf("Seu telefone é: %i",telefone);


return 0;
}
