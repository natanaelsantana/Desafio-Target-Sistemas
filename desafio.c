#define ex1
#include <stdio.h>

/*

Respostas:

exercicio 1 = 91
exercicio 3:
a) resposta: 9

b)resposta: 128

c)resposta: 49

d)resposta: 100

e)resposta: 13;

f)resposta: 200

exercicio 4:
resposta: Ligando o primeiro interruptor e deixando a luz acessa por um tempo.
Após um tempo, desligaria ele, ligaria o segundo interruptor e iria até a sala das lâmpadas.
A lâmpada que estivesse acesa, corresponderia ao segundo interruptor. A lâmpada apagada que estiver quente, corresponderia ao primeiro interruptor.
A lâmpada que estivesse apagada e fria, corresponderia ao terceiro interruptor.

*/


#ifdef ex2
// Verificar sequencia de Fibonacci

main () {
    int numero = 0;
    int fibonacci[2] = {0, 1};
    int resultado = 0;
    printf("Insira um valor para ser avaliado: ");
    scanf("%d", &numero);

    while (numero > resultado) {
        resultado = fibonacci[0] + fibonacci[1];
        fibonacci[1] = fibonacci[0];
        fibonacci[0] = resultado;
    }
    if(numero == resultado){
        printf("O %d numero pertence a sequencia de fibonacci", numero);
    } else {
    printf("O numero %d nao pertence a sequencia de fibonacci", numero);
    }

    printf("\n\nDeseja continuar(s/n)?  ");
    char continuar;
    scanf(" %c", &continuar);
     switch (continuar) {
        case 's':
            system("cls");
            main();
            break;
        case 'n':
            exit(0);
            break;
        default:
            printf("Opcao inválida\n");
            break;
    }

}

#endif // ex2


#ifdef ex5 //Inversao de caracteres
char string[100];

int tamanhoVetor(char string[]) {
    int contador = 0;

    while(string[contador] != '\0'){
        contador++;
    }
    return contador;
}

main() {
    printf("Digite aqui a string: ");
    scanf("%s", string);

    int comprimento = tamanhoVetor(string);
    int i = 0;
    char tempString[comprimento + 1];
    while(comprimento) {
        tempString[i] = string[comprimento- 1];
        i++;
        comprimento --;
    }
    tempString[i] = '\0'; // Adicionar caractere nulo

    printf("string invertida: %s\n", tempString);
}
#endif // ex5
