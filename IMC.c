#include <stdio.h>

int main(){
    int menu;
    float peso;
    float altura;
    float imc;
    

    printf("Diga o seu peso\n");
    scanf(" %f", &peso);

    printf("Diga  sua altura\n");
    scanf(" %f", &altura);
    altura = altura * altura;
    imc = peso / altura;


    if (imc < 18.5)
    {
        printf("- Abaixo do Peso\n");
    }
    else if (imc >18.6 || imc <24.9)
    {
        printf("- Saudável\n");
    }
    else if (imc >25.00 || imc < 29.9)
    {
        printf("- Peso em excesso\n");
    }
    else if (imc >30.00 || imc <34.9)
    {
        printf("- Obesidade Grau I\n");
    }
    else if (imc >35.00 || imc <39.9)
    {
        printf("- Obesidade Grau II\n");
    }
    else if (imc >=40.00)
    {
        printf("- Obesidade Grau III\n");
    }

    
    
    
    
    
    


}