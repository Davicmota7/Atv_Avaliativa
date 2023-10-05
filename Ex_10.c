#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cidade[40], estado[3];
    char *maior_cidade, *menor_cidade, *tpe;
    int qtde_veiculo, qtde_acidente, sair;
    int tot_cidade, tot_veiculo = 0, tot_acidente, tot_veic_rs, tot_acid_rs;
    float indice, maior_indice, menor_indice, media, media_rs;

    while (sair != 0)
    {

        printf("\nQual o nome da cidade");
        scanf("%s", &cidade);
        printf("\nQual o nome do estado");
        scanf("%s", &estado);
        printf("\nDigite a quantidade de veiculo");
        scanf("%d", &qtde_veiculo);
        printf("\nDigite a quantidade de acidente");
        scanf("%d", &qtde_acidente);

        tot_cidade++;

        if (qtde_veiculo > 0)
            tot_veiculo = tot_veiculo + qtde_veiculo;

        if (tot_acidente > 0)
            tot_acidente = tot_acidente + qtde_acidente;

        indice = qtde_acidente / qtde_veiculo;

        if (tot_cidade == 0)
        {
            maior_cidade = cidade;
            maior_indice = indice;
            menor_cidade = cidade;
            menor_indice = indice;
        }

        if (indice > maior_indice)
        {
            maior_cidade = cidade;
            maior_indice = indice;
        }
        if (indice < menor_indice)
        {
            menor_cidade = cidade;
            menor_indice = indice;
        }
        media = tot_veiculo / tot_cidade;

        tot_veic_pe = tot_veic_pe + qtde_veiculo;
        tot_acid_pe = tot_acid_pe + qtde_acidente;
        media_pe = tot_veic_pe / tot_acid_pe;

        printf("Digite 0 para sair e 1 para continuar");
        scanf("%d", &sair);
    }

    printf("\nA cidade que possui maior indice de acidente foi:%s", maior_cidade);
    printf("\nSeu indice foi: %5.2f", maior_indice);
    printf("\nA cidade que possui menor indice de acidente foi:%s", menor_cidade);
    printf("\nSeu indice foi:%5.2f", menor_indice);
    printf("\nA media de veiculos nas cidades brasileiras e:%5.2f", media);
    printf("\nA media de acidentes no estado do Rio Grande do Sul foi:%5.2f", media_rs);
    getchar();
    getchar();
    return 0;
}