#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int main(){
setlocale(LC_ALL, "ptb");
	int a=30, b=0, c=4, load=0, errou=0, acertou=0;
	char resp, nome[50], entra1[50], entra2[50];
	
	fflush(stdin);
	strcpy(entra1, "\xDB");
	fflush(stdin);
	strcpy(entra2, entra1);

	printf("\n\n\t\t\t\t Seja bem vindo ao quiz de Pedro Lucas :)\n\n\n\n");
	printf("\t\t\t\t");
	system("pause");
	system("cls");
	printf("\n\t\t\t Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	system("cls");
	
	while(b<100){
		setlocale(LC_ALL, "C");
		printf("\n\n\n\n\n\t\t\t\t %s Loading %d%%\n", entra1, b);
		Sleep(100);
		strcat(entra1, entra2);
		a--;
		b+=4;
		system("cls");
		if (b==100){
			system("color 02");
			printf("\n\n\n\n\n\t\t\t\t %s Loading %d%%\n", entra1, b);
		}
	}
	a=30;
	printf("\t\t\t");
	system("cls");
	
    setlocale(LC_ALL, "ptb");
    system("color 07");
	printf("\n\t\t\t\t Ol� %s, a seguir voc� respondera quest�es sobre:\n", nome);
	printf("\t\t\t\tMat�ria: Historia\n");
	printf("\t\t\t\tAssunto: Mesopot�mia\n");
	printf("\t\t\t\tE tamb�m tera apenas 30 segundos para responder\n");
	printf("\t\t\t\tO quiz sera composto por:\n");
	printf("\t\t\t\t3 Quest�es faceis\n");
	printf("\t\t\t\t2 Quest�es m�dias\n");
	printf("\t\t\t\t2 Quest�es dif�ceis\n");
	printf("\n\n\t\t\t\tVoc� est� pronto?\n");
	printf("\t\t\t");
	system("pause");
	system("cls");

	//PERGUNTA UM
	while(a>0){
	system("cls");
	printf("\t\t\tErros: %d\t\tAcertos: %d\n", errou, acertou);
	printf("\n\t\t\tQuest�o 01 - N�vel f�cil:");
	printf("\n\n\t\t\t(Crescer Consultorias � adaptado) A Mesopot�mia hist�rica � comumente confundida como \n\t\t\tuma civiliza��o e cultura ordenada e centralizada, mas na realidade � o \n\t\t\tber�o de diversas culturas e povos ao longo da hist�ria. Dos povos que \n\t\t\thabitaram na regi�o, qual deles promoveu o surgimento da escrita cuneiforme?\n");
    printf("\t\t\ta) Sum�rios.\n");
	printf("\t\t\tb) Ass�rios.\n");
	printf("\t\t\tc) Caldeus.\n");
	printf("\t\t\td) Amoritas.\n");
	printf("\t\t\te) Acadianos.\n");
	printf("\n\t\t\tFaltam %d segundos\n\n", a); //segundos
		Sleep(1000);
		a--;
		if (kbhit()){
			resp = getch();
			break;
		}
    }
    a=30;
    printf("\t\t\tSua resposta foi letra: %c\n", resp);

    if (resp=='A' || resp=='a'){
		system("color 02");
		printf("\t\t\tVoc� Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVoc� errou ou voc� perdeu para o tempo :(\n");
		printf("\t\t\tResposta dada como incorreta.\n");
		errou++;
	} 
	printf("\n\t\t\t");
	system("pause");
	system("cls");
	system("color 07");
	while(c>0){
	printf("\n\n\t\t\tVamos para a proxima em %d Segundos", c);
	Sleep(1000);
	c--;
	system("cls");
    }
    c=4;
	//FINAL UM
	
	//PERGUNTA dois
	while(a>0){
	system("cls");
	printf("\t\t\tErros: %d\t\tAcertos: %d\n", errou, acertou);
	printf("\n\t\t\tQuest�o 02 - N�vel f�cil:");
	printf("\n\n\t\t\tQuais dos povos abaixo n�o faziam parte da Mesopot�mia?\n");
    printf("\t\t\ta) Sum�rios.\n");
	printf("\t\t\tb) Amoritas.\n");
	printf("\t\t\tc) Caldeus.\n");
	printf("\t\t\td) Ass�rios.\n");
	printf("\t\t\te) Hicsos.\n");
	printf("\n\t\t\tFaltam %d segundos\n", a); //segundos
		Sleep(1000);
		a--;
		if (kbhit()){
			resp = getch();
			break;
		}
    }
    a=30;
    printf("\t\t\tSua resposta foi letra: %c\n\n", resp);

    if (resp=='E' || resp=='e'){
		system("color 02");
		printf("\t\t\tVoc� Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVoc� errou ou voc� perdeu para o tempo :(\n");
		printf("\t\t\tResposta dada como incorreta.\n");
		errou++;
	} 
	printf("\n\t\t\t");
	system("pause");
	system("cls");
	while(c>0){
		system("color 07");
		printf("\n\n\t\t\tVamos para a proxima em %d Segundos", c);
		Sleep(1000);
		c--;
		system("cls");
	//FINAL DOIS
    }
    c=4;
    //PERGUNTA TRES
	while(a>0){
	system("cls");
	printf("\t\t\tErros: %d\t\tAcertos: %d\n", errou, acertou);
	printf("\n\t\t\tQuest�o 03 - N�vel f�cil:");
	printf("\n\n\t\t\tQual obra da Antiguidade narra a hist�ria de um rei sum�rio em sua jornada\n\t\t\tem busca da humildade?\n");
    printf("\t\t\ta) Epopeia de Gilgamesh.\n");
	printf("\t\t\tb) B�blia.\n");
	printf("\t\t\tc) Talmud.\n");
	printf("\t\t\td) C�dice Ixtlilxochitl.\n");
	printf("\t\t\te) Nenhuma das alternativas.\n");
	printf("\n\t\t\tFaltam %d segundos\n", a); //segundos
		Sleep(1000);
		a--;
		if (kbhit()){
			resp = getch();
			break;
		}
    }
    a=30;
    printf("\t\t\tSua resposta foi letra: %c\n\n", resp);

    if (resp=='A' || resp=='a'){
		system("color 02");
		printf("\t\t\tVoc� Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVoc� errou ou voc� perdeu para o tempo :(\n");
		printf("\t\t\tResposta dada como incorreta.\n");
		errou++;
	} 
	printf("\n\t\t\t");
	system("pause");
	system("cls");
	while(c>0){
		system("color 07");
		printf("\n\n\t\t\tVamos para a proxima em %d Segundos", c);
		Sleep(1000);
		c--;
		system("cls");
	}
	c=4;
	//FINAL TRES
	
	//PERGUNTA quatro
	while(a>0){
	system("cls");
	printf("\t\t\tErros: %d\t\tAcertos: %d\n", errou, acertou);
	printf("\n\t\t\tQuest�o 04 - N�vel M�dio:");
	printf("\n\n\t\t\tSegundo registro dos gregos, uma constru��o mesopot�mica foi\n\t\t\tconsiderada uma das sete maravilhas do mundo antigo. Estamos falando de\n\t\t\tqual constru��o?\n");
    printf("\t\t\ta) Torre de Babel.\n");
	printf("\t\t\tb) Jardins Suspensos da Babil�nia.\n");
	printf("\t\t\tc) Colosso de Rodes.\n");
	printf("\t\t\td) Farol de Alexandria.\n");
	printf("\t\t\te) Estela do C�digo de Hamur�bi.\n");
	printf("\n\t\t\tFaltam %d segundos\n", a); //segundos
		Sleep(1000);
		a--;
		if (kbhit()){
			resp = getch();
			break;
		}
    }
    a=30;
    printf("\t\t\tSua resposta foi letra: %c\n\n", resp);

    if (resp=='B' || resp=='b'){
		system("color 02");
		printf("\t\t\tVoc� Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVoc� errou ou voc� perdeu para o tempo :(\n");
		printf("\t\t\tResposta dada como incorreta.\n");
		errou++;
	} 
	printf("\n\t\t\t");
	system("pause");
	system("cls");
	while(c>0){
		system("color 07");
		printf("\n\n\t\t\tVamos para a proxima em %d Segundos", c);
		Sleep(1000);
		c--;
		system("cls");
	}
	c=4;
	//FINAL QUATRO
	
	//PERGUNTA CINCO
	while(a>0){
	system("cls");
	printf("\t\t\tErros: %d\t\tAcertos: %d\n", errou, acertou);
	printf("\n\t\t\tQuest�o 05 - N�vel M�dio:");
	printf("\n\n\t\t\tQual rei mesopot�mico foi o respons�vel por formar um reino com um\n\t\t\tpoder unificado ap�s conquistar as principais cidades da Sum�ria?\n");
    printf("\t\t\ta) Hamur�bi\n");
	printf("\t\t\tb) Assurban�pal\n");
	printf("\t\t\tc) Sarg�o, o Grande\n");
	printf("\t\t\td) Enlil-Bani\n");
	printf("\t\t\te) Irra-Imiti\n");
	printf("\n\t\t\tFaltam %d segundos\n", a); //segundos
		Sleep(1000);
		a--;
		if (kbhit()){
			resp = getch();
			break;
		}
    }
    a=30;
    printf("\t\t\tSua resposta foi letra: %c\n\n", resp);

    if (resp=='C' || resp=='c'){
		system("color 02");
		printf("\t\t\tVoc� Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVoc� errou ou voc� perdeu para o tempo :(\n");
		printf("\t\t\tResposta dada como incorreta.\n");
		errou++;
	} 
	printf("\n\t\t\t");
	system("pause");
	system("cls");
	while(c>0){
		system("color 07");
		printf("\n\n\t\t\tVamos para a proxima em %d Segundos", c);
		Sleep(1000);
		c--;
		system("cls");
	}
	c=4;
	//FINAL CINCO
	
	//PERGUNTA SEIS
	while(a>0){
	system("cls");
	printf("\t\t\tErros: %d\t\tAcertos: %d\n", errou, acertou);
	printf("\n\t\t\tQuest�o 06 - N�vel Dif�cio:");
	printf("\n\n\t\t\tComo no Egito, a base da economia na Mesopot�mia era a agricultura. \n\t\t\tSobre a agricultura na Mesopot�mia, � correto afirmar que foi marcada:\n");
    printf("\t\t\ta) Pelo uso de um sistema de rod�zio nas planta��es, associado ao emprego\n\t\t\t de adubos artificiais, proporcionados pelos avan�os nas t�cnicas de cultivo.\n");
	printf("\t\t\tb) Por uma localiza��o geogr�fica muito favorecida pelas chuvas constantes,\n\t\t\t o que lhe proporcionava boas condi��es � planta��o.\n");
	printf("\t\t\tc) Pela presen�a da cheias do Rio Nilo, fator determinante para defini��o das\n\t\t\t �pocas de plantio e colheita.\n");
	printf("\t\t\td) Pelo emprego da tra��o animal, como o alce e o lhama.\n");
	printf("\t\t\te) Pelo controle das cheias dos rios Tigre e Eufrates. Esse controle exigia \n\t\t\tuma a��o coletiva intensa.\n");
	printf("\n\t\t\tFaltam %d segundos\n", a); //segundos
		Sleep(1000);
		a--;
		if (kbhit()){
			resp = getch();
			break;
		}
    }
    a=30;
    printf("\t\t\tSua resposta foi letra: %c\n\n", resp);

    if (resp=='E' || resp=='e'){
		system("color 02");
		printf("\t\t\tVoc� Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVoc� errou ou voc� perdeu para o tempo :(\n");
		printf("\t\t\tResposta dada como incorreta.\n");
		errou++;
	} 
	printf("\n\t\t\t");
	system("pause");
	system("cls");
	while(c>0){
		system("color 07");
		printf("\n\n\t\t\tVamos para a proxima em %d Segundos", c);
		Sleep(1000);
		c--;
		system("cls");
	}
	c=4;
	//FINAL seis
	
	//PERGUNTA sete
	while(a>0){
	system("cls");
	printf("\t\t\tErros: %d\t\tAcertos: %d\n", errou, acertou);
	printf("\n\t\t\tQuest�o 07 - N�vel Dif�cio:");
	printf("\n\n\t\t\tOs Estados Teocr�ticos da Mesopot�mia e do Egito evolu�ram acumulando\n\t\t\t caracter�sticas comuns e\n\t\t\tpeculiaridades culturais. Os eg�pcios desenvolveram a pr�tica de embalsamar o corpo humano porque:\n");
    printf("\t\t\ta) acreditavam que a preserva��o do corpo de um fara� poderia torna-lo mais \n\t\t\trico e poderoso que os outros far�os do Egito.\n");
	printf("\t\t\tb) os seus deuses, sempre prontos para castigar os pecadores, desencadearam\n\t\t\t o dil�vio.\n");
	printf("\t\t\tc) os camponeses constitu�am categoria social inferior.\n");
	printf("\t\t\td) depois da morte, a alma podia voltar ao corpo mumificado.\n");
	printf("\t\t\te) se opunham ao polite�smo dominante na �poca.\n");
	printf("\n\t\t\tFaltam %d segundos\n", a); //segundos
		Sleep(1000);
		a--;
		if (kbhit()){
			resp = getch();
			break;
		}
    }
    a=30;
    printf("\t\t\tSua resposta foi letra: %c\n\n", resp);

    if (resp=='D' || resp=='d'){
		system("color 02");
		printf("\t\t\tVoc� Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVoc� errou ou voc� perdeu para o tempo :(\n");
		printf("\t\t\tResposta dada como incorreta.\n");
		errou++;
	} 
	printf("\n\t\t\t");
	system("pause");
	system("cls");
	
	if (acertou>=4 && acertou<7){
		printf("\n\n\n\t\t\tEncerramos por aqui :)\n");
		printf("\n\t\t\tVoc� teve %d erros e %d acertos\n", errou, acertou);
	}
	else if (acertou==7){
		printf("\n\n\n\t\t\tEncerramos por aqui :)\n");
		printf("\n\t\t\tVoc� conseguiu a pontua��o maxima de %d acertos, muito bem\n\t\t\tcontinue assim e voc� ganhara 100z�o do professor Renato ;)\n", acertou);
	}
	else if (acertou>-1 && acertou<4){
		printf("\n\n\n\t\t\tEncerramos por aqui :)\n");
		printf("\n\t\t\tVoc� obteve %d erros e %d acertos\n\n\t\t\tVAMOS ESTUDAR MAIS!!!", errou, acertou);
	}
return 0;
}

