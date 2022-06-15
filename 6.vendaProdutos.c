#include <stdio.h>
#include <stdlib.h>

int main()
{

	int opcao = 0, op, quant1 = 0, quant2 = 0, quant3 = 0, quant4 = 0, quant5 = 0, quantTotal = 0;
	float valSabao, valLeite, valArroz, valOvo, valBanana;
	float valor, totalcompra, valorPagamento, troco;

	printf("\n#######################################\n");
	printf("\n#  MERCADO IRMAOS NUFFATO E CIA LTDA  #\n");
	printf("\n#######################################\n");
	printf("\n-PRODUTOS: \n");
	printf("\nDigite o valor dos produtos abaixo: \n");
	printf("\n1. Sabão: ");
	scanf("%f", &valSabao);
	printf("\n2. Leite: ");
	scanf("%f", &valLeite);
	printf("\n3. Arroz: ");
	scanf("%f", &valArroz);
	printf("\n4. Ovo: ");
	scanf("%f", &valOvo);
	printf("\n5. Banana: ");
	scanf("%f", &valBanana);

	do
	{
		printf("\n      -MENU-   ");
		printf("\nCOD   PRODUTO  VALOR \n");
		printf("\n101   Sabão:   %.2f", valSabao);
		printf("\n202   Leite:   %.2f", valLeite);
		printf("\n303   Arroz:   %.2f", valArroz);
		printf("\n404   Ovo:     %.2f", valOvo);
		printf("\n505   Banana:  %.2f\n", valBanana);

		printf("\n-Digite o codigo do produto que deseja comprar:  ");
		scanf("%d", &opcao);

		switch (opcao)
		{
		case 101:
			printf("\nCOD   PRODUTO  VALOR ");
			printf("\n101   Sabão    %.2f", valSabao);
			printf("\n\nquantas unidades voce deseja?:  ");
			scanf("%d", &quant1);
			valor = valSabao * quant1;
			break;
		case 202:
			printf("\nCOD   PRODUTO  VALOR ");
			printf("\n202   Leite    %.2f", valLeite);
			printf("\n\nquantas unidades voce deseja?:  ");
			scanf("%d", &quant2);
			valor = (valLeite * quant2);
			break;
		case 303:
			printf("\nCOD   PRODUTO  VALOR ");
			printf("\n303   Arroz    %.2f", valArroz);
			printf("\n\nquantas unidades voce deseja?:  ");
			scanf("%d", &quant3);
			valor = (valArroz * quant3);
			break;
		case 404:
			printf("\nCOD   PRODUTO  VALOR ");
			printf("\n404   Ovo      %.2f", valOvo);
			printf("\n\nquantas unidades voce deseja?:  ");
			scanf("%d", &quant4);
			valor = (valOvo * quant4);
			break;
		case 505:
			printf("\nCOD   PRODUTO  VALOR ");
			printf("\n505   Banana:  %.2f", valBanana);
			printf("\n\nquantas unidades voce deseja?:  ");
			scanf("%d", &quant5);
			valor = (valBanana * quant5);
			break;
		default:
			printf("\n ## produto nao encontrado!! ");
		}

		totalcompra = totalcompra + valor;

		printf("\n Deseja voltar a comprar? '1' p/ sim ou '0' p/ nao.  ");
		scanf("%d", &op);

	} while (op == 1);

	printf("\n########################################");
	printf("\n#           DETALHE DA VENDA           #");
	printf("\n########################################");
	printf("\n#COD        VL.UNIT  QTD.  VL.TOTAL(R$)#");
	printf("\n########################################");

	if (quant1 > 0)
	{
		printf("\n Sabão       %.2f     %d     %.2f", valSabao, quant1, (valSabao * quant1));
	}
	if (quant2 > 0)
	{
		printf("\n Leite       %.2f     %d     %.2f", valLeite, quant2, (valLeite * quant2));
	}
	if (quant3 > 0)
	{
		printf("\n Arroz       %.2f     %d     %.2f", valArroz, quant3, (valArroz * quant3));
	}
	if (quant4 > 0)
	{
		printf("\n Ovo         %.2f     %d     %.2f", valOvo, quant4, (valOvo * quant4));
	}
	if (quant5 > 0)
	{
		printf("\n Banana      %.2f    %d     %.2f", valBanana, quant5, (valBanana * quant5));
	}
	else
		printf("\n\n");

	quantTotal = quant1 + quant2 + quant3 + quant4 + quant5;

	printf("\n-----------------------------------");
	printf("\nQTD. TOTAL DE ITENS        %d\n", quantTotal);
	printf("\nVALOR A PAGAR              %.2f\n", totalcompra);
	printf("\n-----------------------------------\n\n\n");

	printf("\n Insira o valor para pagamento: ");
	scanf("%f", &valorPagamento);

	if (valorPagamento >= totalcompra)
	{
		troco = (valorPagamento - totalcompra);
		printf("\n-----------");
		printf("\n Sucesso!! \n Troco:  %.f", troco);
		printf("\n-----------");
		printf("\n\nCOMPRA FINALIZADA!\n\n");
	}
	else
	{
		printf("\n O valor não é suficiente, insira um valor superior ao valor na compra: ");
		scanf("%f", &valorPagamento);
	troco = (valorPagamento - totalcompra);
	printf("\n-----------");
	printf("\n Sucesso!! \n Troco:  %.f", troco);
	printf("\n-----------");
	printf("\n\nCOMPRA FINALIZADA!\n\n");
	}
	return (0);
}