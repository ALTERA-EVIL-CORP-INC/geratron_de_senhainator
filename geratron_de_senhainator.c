#include<stdio.h>
#include<time.h>

int Sleep(int ms)
{
    clock_t tempo_inicial = clock();
    while(clock() - tempo_inicial < ms) {}
    return 0;
}

int main()
{
    int n_caracteres, tempo, senha[50], aux;
    char s_senha[50];
    srand(time(NULL));

    do
    {
        printf("Quantos caracteres sua senha deve ter? Maximo 50 caracteres, minimo 4!\n");
        scanf("%d",&n_caracteres);
    }while(n_caracteres < 4 || n_caracteres > 50);

    printf("\n");

    tempo = rand() % 1000;
    Sleep(tempo);

    for(n_caracteres;n_caracteres>0;n_caracteres--)
    {
        senha[n_caracteres] = 32 + rand()%94;
        s_senha[n_caracteres] = senha[n_caracteres];
        printf("%c",s_senha[n_caracteres]);
    }
}
