#include <stdio.h>

int main() {
    int carro;
    float imp = 0.20; 
    float valor = 0.0; 
    int potencia = 0;  

    printf("Bem-vindo à concessionária. O seu carro poderá obter um imposto de vinte por cento caso ele tenha uma potência de 2.0 ou mais.\n");
    printf("Por favor, escolha o modelo:\n");
    printf("1. Astra 2011 2.0\n");
    printf("2. Palio Fire 2009 1.0\n");
    printf("3. Ford Mustang Shelby 5.0\n");
    printf("4. Kwid 2023 1.0\n");
    scanf("%d", &carro); 

    switch(carro) {
        case 1:
            printf("Astra 2011 2.0 valor: 45000.00\n");
            valor = 45000.00; 
            potencia = 2; 
            break;

        case 2:
            printf("Palio Fire 2009 1.0 valor: 21000.00\n");
            valor = 21000.00; 
            potencia = 1; 
            break;

        case 3:
            printf("Ford Mustang Shelby 5.0 valor: 173200.00\n");
            valor = 173200.00; 
            potencia = 5; 
            break;

        case 4:
            printf("Kwid 2023 1.0 valor: 57000.00\n");
            valor = 57000.00; 
            potencia = 1; 
            break;

        default:
            printf("Opção inválida.\n");
            return 1; 
    }


    if (potencia >= 2) {
        valor += valor * imp; 
        printf("Carro com potência maior que 2.0, imposto de 20%% aplicado.\n");
    } else {
        printf("Carro com potência inferior a 2.0, nenhum imposto aplicado.\n");
    }

    printf("O valor total do carro escolhido foi: %.2f\n", valor); 

    return 0;
}