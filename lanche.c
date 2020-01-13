#include <stdio.h>

int main(){
    int menu;
    int quantidade;
    int precoFinal;


    printf("Artigo             | Codigo   | preco\n ");
    printf("Cachorro quente    |100       | 2.50€\n");
    printf("Hamburguer         |101       | 3.50€\n");
    printf("Cheeseburger       |102       | 4.00€\n");
    printf("Omolete            |103       | 3.75€\n");
    printf("Francesinha        |104       | 7.50€\n");

    printf("Escolha o artigo\n");
    scanf(" %d", &menu);
    printf("Quantos quer\n");
    scanf(" %d", &quantidade);



    if (menu == 100)
    {
        printf("Escolheu Cachorro quente\n");
        printf("preco 2.50€\n");
        printf("Comprou %d lanches\n", quantidade);
        precoFinal = quantidade * 2.50;
    }
    else if (menu == 101)
    {
        printf("Escolheu Hamburguer\n");
        printf("preco 3.50€\n");
        printf("Comprou %d lanches\n", quantidade);
        precoFinal = quantidade * 3.50;
    }
    else if (menu == 102)
    {
        printf("Escolheu Cheeseburger\n");
        printf("preco 4.00€\n");
        printf("Comprou %d lanches\n", quantidade);
        precoFinal = quantidade * 4.00;
    }
    else if (menu == 103)
    {
        printf("Escolheu Omolete\n");
        printf("preco 3.75€\n");
        printf("Comprou %d lanches\n", quantidade);
        precoFinal = quantidade * 3.75;
    }
    else if (menu == 104)
    {
        printf("Escolheu Francesinha\n");
        printf("preco 7.50€\n");
        printf("Comprou %d lanches\n", quantidade);
        precoFinal = quantidade * 7.50;
    }

    
    return 0;
}