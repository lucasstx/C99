#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<conio.c>
#include<ctype.h>
#define A 100
struct contato{
	char nome[100], numero[50];
}numeros[A];
int main(){
	int resp, tot=0, existe=0, cor=7;
	char nomealt[100], numeroalt[50];
	setlocale(LC_ALL, "ptb");
	cor=7;textbackground(9);gotoxy(43, 7);printf("                                 ");for(int i=0; i<10; i++){gotoxy(42, cor);printf("  \n");cor++;}gotoxy(43, cor-1);printf("                                 ");cor=7;for(int i=0; i<10; i++){gotoxy(75, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(44, cor);printf("                               \n");cor++;}
	textcolor(0);
	gotoxy(45, 9);printf("1-Cadastrar contato.");
	gotoxy(45, 10);printf("2-Alterar contato.");
	gotoxy(45, 11);printf("3-Listar todos os contato.");
	gotoxy(45, 12);printf("4-Apagar contato.");
	gotoxy(45, 13);printf("5-Consultar contato.");
	gotoxy(45, 14);printf("6-Fechar agenda de contatos.");
	gotoxy(45, 15);printf("Resposta: ");
	gotoxy(55, 15);scanf("%d", &resp);
	system("cls");
	//
	while(resp!=6){
		switch(resp){
			case 1:
				textbackground(0);
				system("cls");
				cor=7;textbackground(9);gotoxy(35, 7);printf("                                             ");for(int i=0; i<10; i++){gotoxy(35, cor);printf("  \n");cor++;}gotoxy(37, cor-1);printf("                                             ");cor=7;for(int i=0; i<10; i++){gotoxy(80, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(37, cor);printf("                                           \n");cor++;}
				textcolor(0);
				if(tot!=A){
					gotoxy(37, 9);printf("Nome: ");
					fflush(stdin);
					gets(numeros[tot].nome);
					gotoxy(37, 10);printf("Telefone: ");
					fflush(stdin);
					gets(numeros[tot].numero);
					for(int i=0; i<=tot; i++){
						if(strcmp(numeros[tot].nome, numeros[i].nome)==0 && i!=tot || strcmp(numeros[tot].numero, numeros[i].numero)==0 && i!=tot){
							existe=0;
							break;
						}
						else{
							existe=1;
						}
					}
					if(existe==0){
						gotoxy(37, 12);printf("Número de contato já cadastrado!!");
						getch();
					}
					else{
						gotoxy(37, 12);printf("Número de contato cadastrado com sucesso!!");
						tot++;
						getch();
					}
				}
				else{
					gotoxy(40, 9);printf("Lista de contato cheia!!");
					getch();
				}
			break;
			case 2:
				textbackground(0);
				system("cls");
				cor=7;textbackground(9);gotoxy(16, 7);printf("                                                                ");for(int i=0; i<10; i++){gotoxy(16, cor);printf("  \n");cor++;}gotoxy(16, cor-1);printf("                                                                ");cor=7;for(int i=0; i<10; i++){gotoxy(80, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(18, cor);printf("                                                              \n");cor++;}
				textcolor(0);
				gotoxy(18, 8);printf("Digite os dados para alterar o contato desejado:");
				gotoxy(18, 9);printf("Nome: ");
				fflush(stdin);
				gets(nomealt);
				gotoxy(18, 10);printf("Telefone: ");
				fflush(stdin);
				gets(numeroalt);
				for(int i=0; i<=tot; i++){
					if(strcmp(nomealt, numeros[i].nome)==0 || strcmp(numeroalt, numeros[i].numero)==0){
						textbackground(0);
						system("cls");
						cor=7;textbackground(9);gotoxy(10, 7);printf("                                                                      ");for(int i=0; i<10; i++){gotoxy(10, cor);printf("  \n");cor++;}gotoxy(10, cor-1);printf("                                                                      ");cor=7;for(int i=0; i<10; i++){gotoxy(80, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(12, cor);printf("                                                                    \n");cor++;}
						textcolor(0);
						gotoxy(12, 8);printf("Contato encontrado. Agora digite o novo nome ou telefone desejado.");
						gotoxy(12, 9);printf("Nome: ");
						fflush(stdin);
						gets(numeros[i].nome);
						gotoxy(12, 10);printf("Telefone: ");
						fflush(stdin);
						gets(numeros[i].numero);
						gotoxy(12, 12);printf("Contato alterado com sucesso!!");
						getch();
						existe=0;
						break;
					}
					else{
						existe=1;
					}
				}
				if(existe==1){
					gotoxy(18, 12);printf("Contato não cadastrado!!");
					getch();
				}
			break;
			case 3:
				if(tot==0){
					textbackground(0);
					system("cls");
					cor=7;textbackground(9);gotoxy(16, 7);printf("                                                                ");for(int i=0; i<10; i++){gotoxy(16, cor);printf("  \n");cor++;}gotoxy(16, cor-1);printf("                                                                ");cor=7;for(int i=0; i<10; i++){gotoxy(80, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(18, cor);printf("                                                              \n");cor++;}
					textcolor(0);
					gotoxy(18, 8);printf("Você precisa cadastrar um contato para poder consultar.");
					textbackground(9);gotoxy(16, 16);printf("                                                                ");textbackground(0);
					getch();
					
				}
				else{
					cor=8;
					textbackground(0);
					system("cls");
					textbackground(9);gotoxy(16, 7);printf("                                                                 ");
					for(int i=0; i<tot; i++){
						textbackground(9);
						gotoxy(16, cor);printf(" ");gotoxy(80, cor);printf(" ");
						gotoxy(16, cor+1);printf(" ");gotoxy(80, cor+1);printf(" ");
						gotoxy(16, cor+2);printf(" ");gotoxy(80, cor+2);printf(" ");
						gotoxy(16, cor+3);printf(" ");gotoxy(80, cor+3);printf(" ");
						textbackground(15);
						gotoxy(18, cor);printf("                                                              ");gotoxy(80, cor);
						gotoxy(18, cor+1);printf("                                                              ");gotoxy(80, cor+1);
						gotoxy(18, cor+2);printf("                                                              ");gotoxy(80, cor+2);
						textbackground(15);
						textcolor(0);
						gotoxy(17, cor);printf("Nome: %s", numeros[i].nome);
						gotoxy(17, cor+1);printf("Número: %s", numeros[i].numero);
						gotoxy(17, cor+2);printf("--------------------------------------------------------------");
						cor+=3;
					}
					textbackground(9);gotoxy(16, cor);printf("                                                                 ");
					getch();
				}
			break;
			case 4:
				textbackground(0);
				system("cls");
				cor=7;textbackground(9);gotoxy(16, 7);printf("                                                                ");for(int i=0; i<10; i++){gotoxy(16, cor);printf("  \n");cor++;}gotoxy(16, cor-1);printf("                                                                ");cor=7;for(int i=0; i<10; i++){gotoxy(80, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(18, cor);printf("                                                              \n");cor++;}
				textcolor(0);
				if(tot==0){
					gotoxy(18, 8);printf("Para apagar um contato você precisa ter um contato cadastrado.");
					getch();
				}
				else{
					gotoxy(18, 8);printf("Digite os dados do contato no qual você deseja apagar:");
					gotoxy(18, 9);printf("Nome: ");
					fflush(stdin);
					gets(nomealt);
					gotoxy(18, 10);printf("Telefone: ");
					fflush(stdin);
					gets(numeroalt);
					for(int i=0; i<tot; i++){
						textbackground(0);
						system("cls");
						cor=7;textbackground(9);gotoxy(16, 7);printf("                                                                ");for(int i=0; i<10; i++){gotoxy(16, cor);printf("  \n");cor++;}gotoxy(16, cor-1);printf("                                                                ");cor=7;for(int i=0; i<10; i++){gotoxy(80, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(18, cor);printf("                                                              \n");cor++;}
						textcolor(0);
						if(strcmp(nomealt, numeros[i].nome)==0 || strcmp(numeroalt, numeros[i].numero)==0){
							gotoxy(18, 8);printf("Contato encontrado!!");
							gotoxy(18, 9);printf("Nome: %s", numeros[i].nome);
							gotoxy(18, 10);printf("Telefone: %s", numeros[i].numero);
							gotoxy(18, 11);printf("Tem certeza que voçê deseja excluir este contato??");
							int a;
							gotoxy(18, 12);printf("1-Sim ou 2-Não: ");
							gotoxy(35, 13);scanf("%d", &a);
							if(a==1){
								strcpy(numeros[i].nome, "");
								strcpy(numeros[i].numero, "");
								gotoxy(18, 14);printf("Contato apagado com sucesso!!");
								getch();
								break;
							}
							else if(a!=1 && a!=2){
								gotoxy(18, 14);printf("Resposta inválida!!");
								getch();
							}
							else if(a==2){
								gotoxy(18, 14);printf("Exclusão cancelada!!");
								getch();
							}
						}
					}
				}
			break;
			case 5:
				existe=0;
				textbackground(0);
				system("cls");
				cor=7;textbackground(9);gotoxy(16, 7);printf("                                                                ");for(int i=0; i<10; i++){gotoxy(16, cor);printf("  \n");cor++;}gotoxy(16, cor-1);printf("                                                                ");cor=7;for(int i=0; i<10; i++){gotoxy(80, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(18, cor);printf("                                                              \n");cor++;}
				textcolor(0);
				gotoxy(18, 8);printf("Nome: ");
				fflush(stdin);
				gets(nomealt);
				gotoxy(18, 9);printf("Número: ");
				fflush(stdin);
				gets(numeroalt);
				for(int i=0; i<=tot; i++){
					if(strcmp(nomealt, numeros[i].nome)==0 && i!=tot || strcmp(numeroalt, numeros[i].numero)==0 && i!=tot){
						textbackground(0);
						system("cls");
						cor=7;textbackground(9);gotoxy(16, 7);printf("                                                                ");for(int i=0; i<10; i++){gotoxy(16, cor);printf("  \n");cor++;}gotoxy(16, cor-1);printf("                                                                ");cor=7;for(int i=0; i<10; i++){gotoxy(80, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(18, cor);printf("                                                              \n");cor++;}
						textcolor(0);
						gotoxy(18, 8);printf("Contato encontrado!!");
						gotoxy(18, 9);printf("Nome: %s", numeros[i].nome);
						gotoxy(18, 10);printf("Número: %s", numeros[i].numero);
						existe=0;
						getch();
						break;
					}
					else{
						existe=1;
					}
				}
				if(existe==1){
					gotoxy(18, 12);printf("Contato não encontrado.");
					getch();
				}
		}
		existe=0;
		textbackground(0);
		system("cls");
		cor=7;textbackground(9);gotoxy(43, 7);printf("                                 ");for(int i=0; i<10; i++){gotoxy(42, cor);printf("  \n");cor++;}gotoxy(43, cor-1);printf("                                 ");cor=7;for(int i=0; i<10; i++){gotoxy(75, cor);printf("  \n");cor++;}cor=8;textbackground(15);for(int i=0; i<8; i++){gotoxy(44, cor);printf("                               \n");cor++;}
		textcolor(0);
		gotoxy(45, 9);printf("1-Cadastrar contato.");
		gotoxy(45, 10);printf("2-Alterar contato.");
		gotoxy(45, 11);printf("3-Listar todos os contato.");
		gotoxy(45, 12);printf("4-Apagar contato.");
		gotoxy(45, 13);printf("5-Consultar contato.");
		gotoxy(45, 14);printf("6-Fechar agenda de contatos.");
		gotoxy(45, 15);printf("Resposta: ");
		gotoxy(55, 15);scanf("%d", &resp);
		system("cls");
	}
	textbackground(0);
	system("cls");
return 0;
}
	
