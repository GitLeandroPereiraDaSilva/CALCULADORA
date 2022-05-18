#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


char op;
int n1, n2, aux;
float d;


 void menu (){
		printf("    BEM VINDO A SUA TABOADA, ESCOLHA O QUE DESEJA FAZER\n\n");
		printf("                     MULTIPLICAR (*)\n");
		printf("                     DIVIDIR     (/)\n");
		printf("                     SOMAR       (+)\n");
		printf("                     SUBITRAIR   (-)\n\n");
	
	
		printf("                     OPERACAO ESCOLHIDA: ");
		scanf("%c", &op);
	}
	
void operacao (){
	if(op=='*'){
		
		
		printf("ESCOLHA O PRIMERIO NUMERO PARA MULTIPLICAR: ");
		scanf("%f", &n1);
		printf("ESCOLHA O SEGUNDO NUMERO PARA MULTIPLICAR: ");
		scanf("%f", &n2);
		printf("\n\n O RESULTADO E: %d \n", n1*n2);
		Sleep(2000);
		system("cls");
		
		
		} else if(op=='/'){
		
		
			printf("ESCOLHA O PRIMERIO NUMERO PARA DIVIDIR: ");
			scanf("%d", &n1);
			printf("ESCOLHA O SEGUNDO NUMERO PARA DIVIDIR: ");
			scanf("%d", &n2);
			d=n1/n2;
			printf("\n\n O RESULTADO E: %f \n", d);
			Sleep(2000);
			system("cls");
		
		
			} else if(op=='+'){
		
		
				printf("ESCOLHA O PRIMERIO NUMERO PARA SOMAR: ");
				scanf("%f", &n1);
				printf("ESCOLHA O SEGUNDO NUMERO PARA SOMAR: ");
				scanf("%f", &n2);
				printf("\n\n O RESULTADO E: %d \n", n1+n2);
				Sleep(2000);
				system("cls");
		
		
				} else if(op=='-'){
		
		
					printf("ESCOLHA O PRIMERIO NUMERO PARA SUBTRAIR: ");
					scanf("%d", &n1);
					printf("ESCOLHA O SEGUNDO NUMERO PARA SUBTRAIR: ");
					scanf("%d", &n2);
					printf("\n\n O RESULTADO E: %d \n", n1-n2);
					Sleep(2000);
					system("cls");
		
		
					} else {
					
						printf("\n\n");
						printf("         # # # # # # # # # # # # # # # # # # # # #\n");
						printf("         #                                       #\n");
						printf("         #                                       #\n");
						printf("         #                                       #\n");
						printf("         #          oo                oo         #\n");
						printf("         #         oooo              oooo        #\n");
						printf("         #          oo                oo         #\n");
						printf("         #                                       #\n");
						printf("         #                                       #\n");
						printf("         #                                       #\n");
						printf("         #                                       #\n");
						printf("         #               o o o o o               #\n");
						printf("         #           o               o           #\n");
						printf("         #         o                   o         #\n");
						printf("         #                                       #\n");
						printf("         #                                       #\n");
						printf("         #                                       #\n");
						printf("         #                                       #\n");
						printf("         # # # # # # # # # # # # # # # # # # # # #\n\n");
						printf("            QUE PENA VOCE NAO QUERER APRENDER!\n");
						Sleep(4000);
						system("cls");
	
					}
	
}


int main (){
	
	
	menu();
	system("cls");
	operacao();
	printf("\nDESEJA FAZER OUTRA OPERACAO?\n");
	printf("SIM - 1              NAO - 2\n\n");
	scanf("%d", &aux);

	while(aux==1){
		
		
		menu();
		system("cls");
		operacao();
		//printf("\nDESEJA FAZER OUTRA OPERACAO?\n");
		//printf("SIM - 1              NAO - 2\n\n");
		//scanf("%d", &aux);
		
		
	}


return 0;
}

