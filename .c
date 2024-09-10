#include <stdio.h>

int main()
{
  float c1=25.99, c2=23.50, c3=31.99;
  float b1=4.59, b2=8.99, b3=5.99;
  float s1=12.99, s2=8.49, s3=17.29;
  int cfinal, bfinal, sfinal;
  float total;
  char nome[40];

printf("Digite seu nome:");
scanf("%s", nome);

printf("Escolha sua opção de combo:\n1- R$%.2f Combo Batata fritas\n2- R$%.2f Combo Aneis de cebola\n3- R$%.2f Combo Frango frito.\n", c1,c2,c3);
scanf("%d", &cfinal);

switch(cfinal) {
    case 1:
    printf("Voce escolheu o combo Batata frita.\n");
    total = c1;
    break;
    case 2:
    printf("Você escolheu o combo Aneis de cebola.\n");
    total = c2;
    break;
    case 3:
    printf("Você escolheu o combo Frango frito.\n");
    total = c3;
    break;
    default:
    printf("Digite um numero valido!\n");
    break;
}

printf("Escolha sua opção de bebida:\n1- R$%.2f Refrigerante Zero\n2- R$%.2f Suco Natural\n3- R$%.2f Chá gelado.\n", b1,b2,b3);
scanf("%d", &bfinal);

switch(bfinal) {
    case 1:
    printf("Voce escolheu o Refrigerante Zero.\n");
    total = total+b1;
    break;
    case 2:
    printf("Você escolheu o Suco Natural.\n");
    total = total+b2;
    break;
    case 3:
    printf("Você escolheu o Chá Gelado.\n");
    total = total+b3;
    break;
    default:
    printf("Digite um numero valido!\n");
    break;
}

printf("Escolha sua opção de sobremesa:\n1- R$%.2f Milk Shake\n2- R$%.2f Pudim\n3- R$%.2f Mousse de Maracuja.\n", s1,s2,s3);
scanf("%d", &sfinal);

switch(sfinal) {
    case 1:
    printf("Voce escolheu Milk Shake.\n");
    total = total+s1;
    break;
    case 2:
    printf("Você escolheu Pudim.\n");
    total = total+s2;
    break;
    case 3:
    printf("Você escolheu o Mousse de Maracuja.\n");
    total = total+s3;
    break;
    default:
    printf("Digite um numero valido!\n");
    break;
}

printf("Obrigado %s.\nSeu Pedido foi Concluido!\nDirija-se ao balcão para efetuar seu pagamento.\nTotal do Pedido: R$%.2f", nome, total);
    return 0;
}