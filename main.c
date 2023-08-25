
Atividade Aula 03.
1.
2.
3.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char nome [100];
  printf("Digite o seu nome : ");
  scanf(" %s",nome);
  printf("Bem vindo %s ",nome);
  return 0;
}
4.
#include <stdio.h>

int main() {
    char idadeTexto[10];
    printf("Digite sua idade: ");
    scanf("%s", idadeTexto);
    int idade = atoi(idadeTexto);
    printf("Sua idade em número inteiro é: %d\n", idade);
    return 0;
}
5.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int numeroint;
    printf("Digite um número inteiro: ");
    scanf("%d", &numeroint);
    float numeroDecimal = (float)numeroint;
    printf("O número decimal é: %.2f\n", numeroDecimal);
    return 0;
}
6.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1;
    int num2;
    int soma;
    printf("Digite o 1º número ");
    scanf("%d", &num1);
    printf("Digite o 2º número ");
    scanf("%d", &num2);
    soma = (num1+num2);
    printf("Resultado da soma : %d\n",soma);
    return 0;
}
7.
#include <stdio.h>
#include <stdlib.h>
int main() {
    float numerodec;
    printf("Digite o número : ");
    scanf("%f", &numerodec);
    float quadrado=(numerodec*numerodec);
    printf("Resultado : %.2f\n",quadrado);
    return 0;
}
8.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int ano;
    printf("Digite o ano do seu nascimento :");
    scanf("%d",&ano);
    int idade;
    idade =( 2023 - ano);
    printf("idade : %d",idade);
    return 0;
}
9.
#include <stdio.h>
#include <stdlib.h>
int main() {
    char Nome[50];
    char sobrenome[50];
    printf("Digite seu primeiro nome: ");
    scanf("%s", Nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    char nomeCompleto[100];
    printf("Seu nome  é: %s %s\n", Nome, sobrenome);
    return 0;
}
10.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int contador = 0;
    printf("Digite uma sequência de números separados por espaço:\n");
    while (1) {
        int numero;
        if (scanf("%d", &numero) != 1) {
            break;
        }
        contador++;
    }
    printf("Foram digitados %d números.\n", contador);
    return 0;
}
11.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char nomeAnimal[50];
    printf("Digite o nome de um animal: ");
    scanf("%s", nomeAnimal);
    printf("Você digitou o animal: %s\n", nomeAnimal);
    return 0;
}
12.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char nome[50], sobrenome[50];
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    printf("Nome completo invertido: %s, %s\n", sobrenome, nome);

    return 0;
}
13.
#include <stdio.h>
#include <string.h>

int main() {
    char entrada[100];
    printf("Digite uma string: ");
    scanf("%s", entrada);
    int tamanho = strlen(entrada);
    printf("O tamanho da string é: %d\n", tamanho);
    return 0;
}
14.
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }
    return 0;
}
15.
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }
    return 0;
}
16.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os números são iguais.\n");
    }
    return 0;
}
17.
#include <stdio.h>

int main() {
    float altura, peso;
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    float imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f\n", imc);
    return 0;
}
18.tamanho
#include <stdio.h>
#include <string.h>
int main() {
    char nome[100];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    if (strlen(nome) > 5) {
        printf("O nome tem mais de 5 caracteres.\n");
    } else {
        printf("O nome tem 5 caracteres ou menos.\n");
    }
    return 0;
}
19.
#include <stdio.h>
#include <string.h>
int main() {
    char estadoCivil[20];
    printf("Digite seu estado civil: ");
    scanf("%s", estadoCivil);
    if (strcasecmp(estadoCivil, "casado") == 0) {
        printf("Você é casado(a).\n");
    } else if (strcasecmp(estadoCivil, "solteiro") == 0) {
        printf("Você é solteiro(a).\n");
    } else {
        printf("Estado civil não reconhecido.\n");
    }
    return 0;
}
20.
#include <stdio.h>

int main() {
    float base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    float area = base * altura;
    printf("A área do retângulo é: %.2f\n", area);
    return 0;
}
21.
#include <stdio.h>
#include <string.h>

int main() {
    char cidade[50];
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    if (cidade[0] == 'S' || cidade[0] == 's') {
        printf("O nome da cidade começa com 'S'.\n");
    } else {
        printf("O nome da cidade não começa com 'S'.\n");
    }
    return 0;
}
22.
#include <stdio.h>
int main() {
    float numero1, numero2;
    printf("Digite o primeiro número decimal: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número decimal: ");
    scanf("%f", &numero2);
    float resto = fmod(numero1, numero2);
    printf("O resto da divisão é: %.2f\n", resto);
    return 0;
}
23.
#include <stdio.h>
int main() {
    char numeroString[20];
    printf("Digite um número inteiro em string: ");
    scanf("%s", numeroString);
    int numero = 0;
    int i = 0;
    while (numeroString[i] != '\0') {
        numero = numero * 10 + (numeroString[i] - '0');
        i++;
    }
    numero += 10;
    printf("O número incrementado é: %d\n", numero);
    return 0;
}
25.
#include <stdio.h>
int main() {
    char data[20];
    printf("Digite uma data no formato 'dd/mm/aaaa': ");
    scanf("%s", data);
    int dia, mes, ano;
    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);
    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);
26.
#include <stdio.h>
int main() {
    char cidade[50];
    char estado[50];
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    printf("Você mora em %s, %s.\n", cidade, estado);
    return 0;
}
27.
#include <stdio.h>
int main() {
    int anoNascimento;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Bem-vindo ao nosso programa, nascido em %d!\n", anoNascimento);
    return 0;
}
28.
#include <stdio.h>

int main() {
    int numero;
    char texto[50];
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Digite uma string: ");
    scanf("%s", texto);
    printf("Resultado: %d %s\n", numero, texto);
    return 0;
}
29.
#include <stdio.h>
int main() {
    char nomeProduto[50];
    float preco;
    printf("Digite o nome do produto: ");
    scanf("%s", nomeProduto);
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Produto: %s, Preço: R$ %.2f\n", nomeProduto, preco);
    return 0;
}
30.
#include <stdio.h>
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Você digitou: %d. O dobro é: %d\n", numero, numero * 2);
    return 0;
}
31.
#include <stdio.h>
int main() {
    char email[100];
    printf("Digite seu endereço de e-mail: ");
    scanf("%s", email);
    printf("Obrigado por fornecer o e-mail %s. Entraremos em contato.\n", email);
    return 0;
}
32.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Soma: %d\n", num1 + num2);
    printf("Diferença: %d\n", num1 - num2);
    printf("Produto: %d\n", num1 * num2);
    if (num2 != 0) {
        printf("Quociente: %d\n", num1 / num2);
    }
    return 0;
}
33.
#include <stdio.h>
int main() {
    float base, altura;
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    float area = (base * altura) / 2;
    printf("A área do triângulo é: %.2f\n", area);
    return 0;
}
34.
#include <stdio.h>

int main() {
    float raio;
    const float pi = 3.14159;
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);
    float perimetro = 2 * pi * raio;
    printf("O perímetro da circunferência é: %.2f\n", perimetro);
    return 0;
}
35.#include <stdio.h>
int main() {
    float base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    float perimetro = 2 * (base + altura);
    printf("O perímetro do retângulo é: %.2f\n", perimetro);
    return 0

//