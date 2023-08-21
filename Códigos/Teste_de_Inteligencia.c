#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<conio.c>
#include<ctype.h>
#include<string.h>
#define A 30
	struct quiz{
		char resp[100];
	}vet[30];
	
int main(){
	textcolor(7);
	setlocale(LC_ALL, "ptb");
	printf("\t\t\t\tSeja bem vindo ao teste de inteligencia!!\n");
	printf("\t\t\t\tA seguir você tera uma série de charadas no qual\n");
	printf("\t\t\t\tvocê pode escolher qual responder...\n");
	printf("\t\t\t\tAperte em qualquer tecla para ir para o exemplo.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("Trabalho feito pela dupla: ");textcolor(9);printf("Pedro Lucas ");textcolor(7);printf("e ");textcolor(5);printf("Paula bezerra");textcolor(7);
	getch();
	system("cls");
	printf("EXEMPLO 01: ");
	printf("\n\n\n\n\n\n\t\tVocê devera escolher o sua charada com um número como o exemplo abaixo em azul está mostrando.");
	printf("\n\n\n\n\t\t\tDigite a charada que você deseja descobrir: ");textbackground(9);printf("1");
	printf("\n\t\t\t1");textbackground(0);printf(" - M de B:");textbackground(2);printf("muro de berlin");textbackground(0);printf("  Resposta correta");
	printf("\n\t\t\t---------------------------------------------------------");
	textbackground(9);printf("\n\t\t\t1");textbackground(0);printf(" - M de B:");textbackground(4);printf("11 de setembro");textbackground(0);printf("  Resposta incorreta");
	printf("\n\t\t\t--------------------------------------");
	textbackground(2);printf("\n\t\t\tPontuação: 12");textbackground(0);printf("  <------Sua pontuação");
	printf("\n\n\n\t\t\tAperte qualquer tecla para começar");
	printf("\n\n\n\n\n\n\n\n\n\n\nTrabalho feito pela dupla: ");textcolor(9);printf("Pedro Lucas ");textcolor(7);printf("e ");textcolor(5);printf("Paula bezerra");textcolor(7);
	getch();
	system("cls");
	textbackground(4);gotoxy(50, 12);printf("N I V E L :  1");textbackground(0);
	Sleep(3000);
	system("cls");
	int num, cor[30], tot=0;
	system("cls");
	for(int i=0; i<30; i++){
		cor[i]=6;
		strcpy(vet[i].resp, "   ");
	}
	for(int i=1; i<=120; i++){
		printf(" ");
	}
	textbackground(8);
	textcolor(WHITE);
	textbackground(4);gotoxy(1, 1);printf("N I V E L:  1");textbackground(8);
	gotoxy(50, 1);
	printf("TESTE DE INTELIGENCIA");
	textbackground(0);
	printf("\nDigite a charada que você deseja descobrir: ");
	printf("\n");
	printf("1 | 26 L no A:");textbackground(cor[0]);printf("%s", vet[0].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n2 | 7 D na S:");textbackground(cor[1]);printf("%s", vet[1].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n3 | 7 M do M:");textbackground(cor[2]);printf("%s", vet[2].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n4 | T de B:");textbackground(cor[3]);printf("%s", vet[3].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n5 | 3 P de T para 3 T T:");textbackground(cor[4]);printf("%s", vet[4].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n6 | 52 C num B (S os C):");textbackground(cor[5]);printf("%s", vet[5].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n7 | 4 C na B B:");textbackground(cor[6]);printf("%s", vet[6].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n8 | 18 B num C de G:");textbackground(cor[7]);printf("%s", vet[7].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n9 | 39 L no V T:");textbackground(cor[8]);printf("%s", vet[8].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n10 | 5 D em um P:");textbackground(cor[9]);printf("%s", vet[9].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	textbackground(2);printf("\nPontuação: %d", tot);textbackground(0);
	gotoxy(45, 2);
	scanf("%d", &num);
	while(tot<10){
		switch(num){
			case 1:
				if(cor[0]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
				}
				else{
					gotoxy(15, 3);
					fflush(stdin);
					textbackground(6);gets(vet[0].resp);textbackground(0);
					strlwr(vet[0].resp);
					if(strcmp(strlwr(vet[0].resp), "26 letras no alfabeto")==0){
						cor[0]=2;
						tot++;
					}
					else{
						cor[0]=4;
					}
				}
			break;
			case 2:
				if(cor[1]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
				}
				else{
					gotoxy(14, 5);
					fflush(stdin);
					textbackground(6);gets(vet[1].resp);textbackground(0);
					strlwr(vet[1].resp);
					if(strcmp(strlwr(vet[1].resp), "7 dias na semana")==0){
						cor[1]=2;
						tot++;
					}
					else{
						cor[1]=4;
					}
				}
			break;
			case 3:
				if(cor[2]==2){
					gotoxy(45, 2);
					printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(14, 7);
					fflush(stdin);
					textbackground(6);gets(vet[2].resp);textbackground(0);
					strlwr(vet[2].resp);
					if(strcmp(strlwr(vet[2].resp), "7 maravilhas do mundo")==0){
						cor[2]=2;
						tot++;
					}
					else{
						cor[2]=4;
					}
				}
			break;
			case 4:
				if(cor[3]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(12, 9);
					fflush(stdin);
					textbackground(6);gets(vet[3].resp);textbackground(0);
					strlwr(vet[3].resp);
					if(strcmp(strlwr(vet[3].resp), "torre de babel")==0){
						cor[3]=2;
						tot++;
					}
					else{
						cor[3]=4;
					}
				}
			break;
			case 5:
				if(cor[4]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(25, 11);
					fflush(stdin);
					textbackground(6);gets(vet[4].resp);textbackground(0);
					strlwr(vet[4].resp);
					if(strcmp(strlwr(vet[4].resp), "3 pratos de trigo para 3 tigres tristes")==0){
						cor[4]=2;
						tot++;
					}
					else{
						cor[4]=4;
					}
				}
			break;
			case 6:
				if(cor[5]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(25, 13);
					fflush(stdin);
					textbackground(6);gets(vet[5].resp);textbackground(0);
					strlwr(vet[5].resp);
					if(strcmp(strlwr(vet[5].resp), "52 cartas num baralho (sem os coringas)")==0){
						cor[5]=2;
						tot++;
					}
					else{
						cor[5]=4;
					}
				}
			break;
			case 7:
				if(cor[6]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(16, 15);
					fflush(stdin);
					textbackground(6);gets(vet[6].resp);textbackground(0);
					strlwr(vet[6].resp);
					if(strcmp(strlwr(vet[6].resp), "4 cores na bandeira brasileira")==0){
						cor[6]=2;
						tot++;
					}
					else{
						cor[6]=4;
					}
				}
			break;
			case 8:
				if(cor[7]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(21, 17);
					fflush(stdin);
					textbackground(6);gets(vet[7].resp);textbackground(0);
					strlwr(vet[7].resp);
					if(strcmp(strlwr(vet[7].resp), "18 buracos num campo de golfe")==0){
						cor[7]=2;
						tot++;
					}
					else{
						cor[7]=4;
					}
				}
			break;
			case 9:
				if(cor[8]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(21, 19);
					fflush(stdin);
					textbackground(6);gets(vet[8].resp);textbackground(0);
					strlwr(vet[8].resp);
					if(strcmp(strlwr(vet[8].resp), "39 livros no velho testamento")==0){
						cor[8]=2;
						tot++;
					}
					else{
						cor[8]=4;
					}
				}
			break;
			case 10:
				if(cor[9]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(13, 21);
					fflush(stdin);
					textbackground(6);gets(vet[9].resp);textbackground(0);
					strlwr(vet[9].resp);
					if(strcmp(strlwr(vet[9].resp), "rio de janeiro")==0){
						cor[9]=2;
						tot++;
					}
					else{
						cor[9]=4;
					}
				}
			break;
		}
		system("cls");
		for(int i=1; i<=120; i++){
			printf(" ");
		}
		textbackground(8);
		textcolor(WHITE);
		textbackground(4);gotoxy(1, 1);printf("N I V E L:  1");textbackground(8);
		gotoxy(50, 1);
		printf("TESTE DE INTELIGENCIA");
		textbackground(0);
		printf("\nDigite a charada que você deseja descobrir: ");
		printf("\n");
		printf("1 | 26 L no A:");textbackground(cor[0]);printf("%s", vet[0].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n2 | 7 D na S:");textbackground(cor[1]);printf("%s", vet[1].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n3 | 7 M do M:");textbackground(cor[2]);printf("%s", vet[2].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n4 | T de B:");textbackground(cor[3]);printf("%s", vet[3].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n5 | 3 P de T para 3 T T:");textbackground(cor[4]);printf("%s", vet[4].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n6 | 52 C num B (S os C):");textbackground(cor[5]);printf("%s", vet[5].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n7 | 4 C na B B:");textbackground(cor[6]);printf("%s", vet[6].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n8 | 18 B num C de G:");textbackground(cor[7]);printf("%s", vet[7].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n9 | 39 L no V T:");textbackground(cor[8]);printf("%s", vet[8].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n10 | R de J:");textbackground(cor[9]);printf("%s", vet[9].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		textbackground(2);printf("\nPontuação: %d", tot);textbackground(0);
		if(tot!=10){
			gotoxy(45, 2);
			scanf("%d", &num);
		}
		else{
			getch();
		}
	}
	//----------------------------------------------------------------------------------------------------------------------------------------------------
	system("cls");
	textbackground(4);gotoxy(50, 12);printf("N I V E L :  2");textbackground(0);
	Sleep(3000);
	system("cls");
	for(int i=1; i<=120; i++){
		printf(" ");
	}
	textbackground(8);
	textcolor(WHITE);
	textbackground(4);gotoxy(1, 1);printf("N I V E L:  2");textbackground(8);
	gotoxy(50, 1);
	printf("TESTE DE INTELIGENCIA");
	textbackground(0);
	printf("\nDigite a charada que você deseja descobrir: ");
	printf("\n11 | 2 C numa Q de B:");textbackground(cor[10]);printf("%s", vet[10].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n12 | 2 G em um C D F:");textbackground(cor[11]);printf("%s", vet[11].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n13 | 5 J em um T D B:");textbackground(cor[12]);printf("%s", vet[12].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n14 | 3 R num T:");textbackground(cor[13]);printf("%s", vet[13].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n15 | 100 C em um R:");textbackground(cor[14]);printf("%s", vet[14].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n16 | 11 J em um T D F:");textbackground(cor[15]);printf("%s", vet[15].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n17 | 4 R T um C:");textbackground(cor[16]);printf("%s", vet[16].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n18 | 29 D em F em um A B:");textbackground(cor[17]);printf("%s", vet[17].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n19 | 27 L no N T:");textbackground(cor[18]);printf("%s", vet[18].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n20 | 365 D no A:");textbackground(cor[19]);printf("%s", vet[19].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	textbackground(2);printf("\nPontuação: %d", tot);textbackground(0);
	gotoxy(45, 2);
	scanf("%d", &num);
	while(tot>=10 && tot<20){
		switch(num){
			case 11:
				if(cor[10]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(22, 3);
					fflush(stdin);
					textbackground(6);gets(vet[10].resp);textbackground(0);
					strlwr(vet[10].resp);
					if(strcmp(strlwr(vet[10].resp), "2 cestas numa quadra de basquete")==0){
						cor[10]=2;
						tot++;
					}
					else{
						cor[10]=4;
					}
				}
			break;
			case 12:
				if(cor[11]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
				}
				else{
					gotoxy(22, 5);
					fflush(stdin);
					textbackground(6);gets(vet[11].resp);textbackground(0);
					strlwr(vet[11].resp);
					if(strcmp(strlwr(vet[11].resp), "2 goleiros em um campo de futebol")==0){
						cor[11]=2;
						tot++;
					}
					else{
						cor[11]=4;
					}
				}
			break;
			case 13:
				if(cor[12]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(22, 7);
					fflush(stdin);
					textbackground(6);gets(vet[12].resp);textbackground(0);
					strlwr(vet[12].resp);
					if(strcmp(strlwr(vet[12].resp), "5 jogadores em um time de basquete")==0){
						cor[12]=2;
						tot++;
					}
					else{
						cor[12]=4;
					}
				}
			break;
			case 14:
				if(cor[13]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(16, 9);
					fflush(stdin);
					textbackground(6);gets(vet[13].resp);textbackground(0);
					strlwr(vet[13].resp);
					if(strcmp(strlwr(vet[13].resp), "3 rodas num triciclo")==0){
						cor[13]=2;
						tot++;
					}
					else{
						cor[13]=4;
					}
				}
			break;
			case 15:
				if(cor[14]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(20, 11);
					fflush(stdin);
					textbackground(6);gets(vet[14].resp);textbackground(0);
					strlwr(vet[14].resp);
					if(strcmp(strlwr(vet[14].resp), "100 centavos em um real")==0){
						cor[14]=2;
						tot++;
					}
					else{
						cor[14]=4;
					}
				}
			break;
			case 16:
				if(cor[5]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(23, 13);
					fflush(stdin);
					textbackground(6);gets(vet[15].resp);textbackground(0);
					strlwr(vet[15].resp);
					if(strcmp(strlwr(vet[15].resp), "11 jogadores em um time de futebol")==0){
						cor[15]=2;
						tot++;
					}
					else{
						cor[15]=4;
					}
				}
			break;
			case 17:
				if(cor[16]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(17, 15);
					fflush(stdin);
					textbackground(6);gets(vet[16].resp);textbackground(0);
					strlwr(vet[16].resp);
					if(strcmp(strlwr(vet[16].resp), "4 rodas tem um carro")==0){
						cor[16]=2;
						tot++;
					}
					else{
						cor[16]=4;
					}
				}
			break;
			case 18:
				if(cor[17]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(26, 17);
					fflush(stdin);
					textbackground(6);gets(vet[17].resp);textbackground(0);
					strlwr(vet[17].resp);
					if(strcmp(strlwr(vet[17].resp), "29 dias em fevereiro em um ano bissexto")==0){
						cor[17]=2;
						tot++;
					}
					else{
						cor[17]=4;
					}
				}
			break;
			case 19:
				if(cor[18]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(18, 19);
					fflush(stdin);
					textbackground(6);gets(vet[18].resp);textbackground(0);
					strlwr(vet[18].resp);
					if(strcmp(strlwr(vet[18].resp), "27 livros no novo testamento")==0){
						cor[18]=2;
						tot++;
					}
					else{
						cor[18]=4;
					}
				}
			break;
			case 20:
				if(cor[19]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(17, 21);
					fflush(stdin);
					textbackground(6);gets(vet[19].resp);textbackground(0);
					strlwr(vet[19].resp);
					if(strcmp(strlwr(vet[19].resp), "365 dias no ano")==0){
						cor[19]=2;
						tot++;
					}
					else{
						cor[19]=4;
					}
				}
			break;
		}	
		system("cls");
		for(int i=1; i<=120; i++){
			printf(" ");
		}
		textbackground(8);
		textcolor(WHITE);
		textbackground(4);gotoxy(1, 1);printf("N I V E L:  2");textbackground(8);
		gotoxy(50, 1);
		printf("TESTE DE INTELIGENCIA");
		textbackground(0);
		printf("\nDigite a charada que você deseja descobrir: ");
		printf("\n11 | 2 C numa Q de B:");textbackground(cor[10]);printf("%s", vet[10].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n12 | 2 G em um C D F:");textbackground(cor[11]);printf("%s", vet[11].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n13 | 5 J em um T D B:");textbackground(cor[12]);printf("%s", vet[12].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n14 | 3 R num T:");textbackground(cor[13]);printf("%s", vet[13].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n15 | 100 C em um R:");textbackground(cor[14]);printf("%s", vet[14].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n16 | 11 J em um T D F:");textbackground(cor[15]);printf("%s", vet[15].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n17 | 4 R T um C:");textbackground(cor[16]);printf("%s", vet[16].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n18 | 29 D em F em um A B:");textbackground(cor[17]);printf("%s", vet[17].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n19 | 27 L no N T:");textbackground(cor[18]);printf("%s", vet[18].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n20 | 365 D no A:");textbackground(cor[19]);printf("%s", vet[19].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		textbackground(2);printf("\nPontuação: %d", tot);textbackground(0);
		if(tot!=20){
			gotoxy(45, 2);
			scanf("%d", &num);
		}
		else{
			getch();
		}
	}
	system("cls");
	textbackground(4);gotoxy(50, 12);printf("N I V E L :  3");textbackground(0);
	Sleep(3000);
	system("cls");
	for(int i=1; i<=120; i++){
		printf(" ");
	}
	textbackground(8);
	textcolor(WHITE);
	textbackground(4);gotoxy(1, 1);printf("N I V E L:  3");textbackground(8);
	gotoxy(50, 1);
	printf("TESTE DE INTELIGENCIA");
	textbackground(0);
	printf("\nDigite a charada que você deseja descobrir: ");
	printf("\n21 | 12 M num A:");textbackground(cor[20]);printf("%s", vet[20].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n22 | 52 S em um A:");textbackground(cor[21]);printf("%s", vet[21].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n23 | 7 V T um G:");textbackground(cor[22]);printf("%s", vet[22].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n24 | 60 M N H:");textbackground(cor[23]);printf("%s", vet[23].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n25 | 64 C num T de X:");textbackground(cor[24]);printf("%s", vet[24].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n26 | L c:");textbackground(cor[25]);printf("%s", vet[25].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n27 | R Q de 81 = 9:");textbackground(cor[26]);printf("%s", vet[26].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n28 | 1 B B em um J de S:");textbackground(cor[27]);printf("%s", vet[27].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n29 | 3 L de N:");textbackground(cor[28]);printf("%s", vet[28].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n30 | 2 R T uma M:");textbackground(cor[29]);printf("%s", vet[29].resp);textbackground(0);
	printf("\n-------------------------------------------------------------------------------------------------");
	textbackground(2);printf("\nPontuação: %d", tot);textbackground(0);
	gotoxy(45, 2);
	scanf("%d", &num);
	while(tot!=30){
		switch(num){
			case 21:
				if(cor[20]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(17, 3);
					fflush(stdin);
					textbackground(6);gets(vet[20].resp);textbackground(0);
					strlwr(vet[20].resp);
					if(strcmp(strlwr(vet[20].resp), "12 meses num ano")==0){
						cor[20]=2;
						tot++;
					}
					else{
						cor[20]=4;
					}
				}
			break;
			case 22:
				if(cor[21]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
				}
				else{
					gotoxy(19, 5);
					fflush(stdin);
					textbackground(6);gets(vet[21].resp);textbackground(0);
					strlwr(vet[21].resp);
					if(strcmp(strlwr(vet[21].resp), "52 semanas em um ano")==0){
						cor[21]=2;
						tot++;
					}
					else{
						cor[21]=4;
					}
				}
			break;
			case 23:
				if(cor[22]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(17, 7);
					fflush(stdin);
					textbackground(6);gets(vet[22].resp);textbackground(0);
					strlwr(vet[22].resp);
					if(strcmp(strlwr(vet[22].resp), "7 vidas tem um gato")==0){
						cor[22]=2;
						tot++;
					}
					else{
						cor[22]=4;
					}
				}
			break;
			case 24:
				if(cor[23]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(15, 9);
					fflush(stdin);
					textbackground(6);gets(vet[23].resp);textbackground(0);
					strlwr(vet[23].resp);
					if(strcmp(strlwr(vet[23].resp), "60 minutos numa hora")==0){
						cor[23]=2;
						tot++;
					}
					else{
						cor[23]=4;
					}
				}
			break;
			case 25:
				if(cor[24]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(22, 11);
					fflush(stdin);
					textbackground(6);gets(vet[24].resp);textbackground(0);
					strlwr(vet[24].resp);
					if(strcmp(strlwr(vet[24].resp), "64 casas num tabuleiro de xadrez")==0){
						cor[24]=2;
						tot++;
					}
					else{
						cor[24]=4;
					}
				}
			break;
			case 26:
				if(cor[25]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(10, 13);
					fflush(stdin);
					textbackground(6);gets(vet[25].resp);textbackground(0);
					strlwr(vet[25].resp);
					if(strcmp(strlwr(vet[25].resp), "linguagem c")==0){
						cor[25]=2;
						tot++;
					}
					else{
						cor[25]=4;
					}
				}
			break;
			case 27:
				if(cor[26]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(20, 15);
					fflush(stdin);
					textbackground(6);gets(vet[26].resp);textbackground(0);
					strlwr(vet[26].resp);
					if(strcmp(strlwr(vet[26].resp), "raiz quadrada de 81 = 9")==0){
						cor[26]=2;
						tot++;
					}
					else{
						cor[26]=4;
					}
				}
			break;
			case 28:
				if(cor[27]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(25, 17);
					fflush(stdin);
					textbackground(6);gets(vet[27].resp);textbackground(0);
					strlwr(vet[27].resp);
					if(strcmp(strlwr(vet[27].resp), "1 bola branca em um jogo de sinuca")==0){
						cor[27]=2;
						tot++;
					}
					else{
						cor[27]=4;
					}
				}
			break;
			case 29:
				if(cor[28]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(15, 19);
					fflush(stdin);
					textbackground(6);gets(vet[28].resp);textbackground(0);
					strlwr(vet[28].resp);
					if(strcmp(strlwr(vet[28].resp), "3 lei de newto")==0){
						cor[28]=2;
						tot++;
					}
					else{
						cor[28]=4;
					}
				}
			break;
			case 30:
				if(cor[29]==2){
					gotoxy(45, 2);printf("Charada já respondida :)");
					getch();
					break;
				}
				else{
					gotoxy(18, 21);
					fflush(stdin);
					textbackground(6);gets(vet[29].resp);textbackground(0);
					strlwr(vet[29].resp);
					if(strcmp(strlwr(vet[29].resp), "2 rodas tem uma moto")==0){
						cor[29]=2;
						tot++;
					}
					else{
						cor[29]=4;
					}
				}
			break;
		}
		system("cls");
		for(int i=1; i<=120; i++){
			printf(" ");
		}
		textbackground(8);
		textcolor(WHITE);
		textbackground(4);gotoxy(1, 1);printf("N I V E L:  3");textbackground(8);
		gotoxy(50, 1);
		printf("TESTE DE INTELIGENCIA");
		textbackground(0);
		printf("\nDigite a charada que você deseja descobrir: ");
		printf("\n21 | 12 M num A:");textbackground(cor[20]);printf("%s", vet[20].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n22 | 52 S em um A:");textbackground(cor[21]);printf("%s", vet[21].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n23 | 7 V T um G:");textbackground(cor[22]);printf("%s", vet[22].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n24 | 60 M N H:");textbackground(cor[23]);printf("%s", vet[23].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n25 | 64 C num T de X:");textbackground(cor[24]);printf("%s", vet[24].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n26 | L c:");textbackground(cor[25]);printf("%s", vet[25].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n27 | R Q de 81 = 9:");textbackground(cor[26]);printf("%s", vet[26].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n28 | 1 B B em um J de S:");textbackground(cor[27]);printf("%s", vet[27].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n29 | 3 L de N:");textbackground(cor[28]);printf("%s", vet[28].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		printf("\n30 | 2 R T uma M:");textbackground(cor[29]);printf("%s", vet[29].resp);textbackground(0);
		printf("\n-------------------------------------------------------------------------------------------------");
		textbackground(2);printf("\nPontuação: %d", tot);textbackground(0);
		if(tot!=30){
			gotoxy(45, 2);
			scanf("%d", &num);
		}
		else{
			getch();
		}
	}
	system("cls");
	textbackground(2);gotoxy(20, 12);printf("Parabéns, você conseguiu completar os 3 níveis do teste de inteligencia...");
	gotoxy(20, 13);printf("Como prêmio você ganhou um tambaqui assado.");textbackground(0);
	Sleep(10000);
return 0;
}

