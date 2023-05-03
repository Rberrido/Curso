#include <stdio.h>

int main() {
    int quantidadeAcoesCompradas, quantidadeAcoesVendidas, i, A;
    double valorAcoesCompradas, valorDeVenda, valorTotalAcoesCompradas, valorTotalAcoesVendidas, IRPF;
    char compraOuVenda;

    //printf("Qual ação foi negociada: ");
    //scanf("%s", );
    do{
        printf("Compra ou venda? (responda com C para compra e V para venda): ");
        scanf("%c", &compraOuVenda);
        if (compraOuVenda == 'C'){
            printf("Quantas ações foram compradas: ");
            scanf("%d", &quantidadeAcoesCompradas);
            printf("Insira um valor das ações compradas: ");
            scanf("%lf", &valorAcoesCompradas);
        }else if(compraOuVenda == 'V'){
            printf("Quantas ações foram vendidas: ");
            scanf("%d", &quantidadeAcoesVendidas);
            printf("Insira um valor das ações vendidas: ");
            scanf("%lf", &valorDeVenda);
        }else{
            printf("invalido");
        }
        
    
    printf("Novo operação (1-sim 2-nao)\n");
    scanf("%d", &A);
    }
    while (A==1);
    
    //Códigos abaixo vão pedir quantas ações foram compradas, e seu valor unitário, e quantas foram vendidas e seu valor unitário
    
    valorTotalAcoesCompradas = quantidadeAcoesCompradas * valorAcoesCompradas;
    
    valorTotalAcoesVendidas = quantidadeAcoesVendidas * valorDeVenda;
    //Ex: se comprei 10 a 10 e vendi 5 a 12, (qtde inicial - qtde vendida) * (Valor Medio de compra - Valor de venda) ----------((5*10) -(5 12)).2--------------
    IRPF = ((quantidadeAcoesVendidas * valorAcoesCompradas) - (quantidadeAcoesVendidas * valorDeVenda) * .20);
    printf("Voce deve R$%.2lf de IRPF", IRPF);
    return 0;
}




