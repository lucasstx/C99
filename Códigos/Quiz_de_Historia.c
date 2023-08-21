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
	printf("\n\t\t\t\t Olá %s, a seguir você respondera questões sobre:\n", nome);
	printf("\t\t\t\tMatéria: Historia\n");
	printf("\t\t\t\tAssunto: Mesopotãmia\n");
	printf("\t\t\t\tE também tera apenas 30 segundos para responder\n");
	printf("\t\t\t\tO quiz sera composto por:\n");
	printf("\t\t\t\t3 Questões faceis\n");
	printf("\t\t\t\t2 Questões médias\n");
	printf("\t\t\t\t2 Questões difíceis\n");
	printf("\n\n\t\t\t\tVocê está pronto?\n");
	printf("\t\t\t");
	system("pause");
	system("cls");

	//PERGUNTA UM
	while(a>0){
	system("cls");
	printf("\t\t\tErros: %d\t\tAcertos: %d\n", errou, acertou);
	printf("\n\t\t\tQuestão 01 - Nível fácil:");
	printf("\n\n\t\t\t(Crescer Consultorias – adaptado) A Mesopotâmia histórica é comumente confundida como \n\t\t\tuma civilização e cultura ordenada e centralizada, mas na realidade é o \n\t\t\tberço de diversas culturas e povos ao longo da história. Dos povos que \n\t\t\thabitaram na região, qual deles promoveu o surgimento da escrita cuneiforme?\n");
    printf("\t\t\ta) Sumérios.\n");
	printf("\t\t\tb) Assírios.\n");
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
		printf("\t\t\tVocê Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVocê errou ou você perdeu para o tempo :(\n");
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
	printf("\n\t\t\tQuestão 02 - Nível fácil:");
	printf("\n\n\t\t\tQuais dos povos abaixo não faziam parte da Mesopotâmia?\n");
    printf("\t\t\ta) Sumérios.\n");
	printf("\t\t\tb) Amoritas.\n");
	printf("\t\t\tc) Caldeus.\n");
	printf("\t\t\td) Assírios.\n");
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
		printf("\t\t\tVocê Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVocê errou ou você perdeu para o tempo :(\n");
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
	printf("\n\t\t\tQuestão 03 - Nível fácil:");
	printf("\n\n\t\t\tQual obra da Antiguidade narra a história de um rei sumério em sua jornada\n\t\t\tem busca da humildade?\n");
    printf("\t\t\ta) Epopeia de Gilgamesh.\n");
	printf("\t\t\tb) Bíblia.\n");
	printf("\t\t\tc) Talmud.\n");
	printf("\t\t\td) Códice Ixtlilxochitl.\n");
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
		printf("\t\t\tVocê Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVocê errou ou você perdeu para o tempo :(\n");
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
	printf("\n\t\t\tQuestão 04 - Nível Médio:");
	printf("\n\n\t\t\tSegundo registro dos gregos, uma construção mesopotâmica foi\n\t\t\tconsiderada uma das sete maravilhas do mundo antigo. Estamos falando de\n\t\t\tqual construção?\n");
    printf("\t\t\ta) Torre de Babel.\n");
	printf("\t\t\tb) Jardins Suspensos da Babilônia.\n");
	printf("\t\t\tc) Colosso de Rodes.\n");
	printf("\t\t\td) Farol de Alexandria.\n");
	printf("\t\t\te) Estela do Código de Hamurábi.\n");
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
		printf("\t\t\tVocê Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVocê errou ou você perdeu para o tempo :(\n");
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
	printf("\n\t\t\tQuestão 05 - Nível Médio:");
	printf("\n\n\t\t\tQual rei mesopotâmico foi o responsável por formar um reino com um\n\t\t\tpoder unificado após conquistar as principais cidades da Suméria?\n");
    printf("\t\t\ta) Hamurábi\n");
	printf("\t\t\tb) Assurbanípal\n");
	printf("\t\t\tc) Sargão, o Grande\n");
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
		printf("\t\t\tVocê Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVocê errou ou você perdeu para o tempo :(\n");
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
	printf("\n\t\t\tQuestão 06 - Nível Difício:");
	printf("\n\n\t\t\tComo no Egito, a base da economia na Mesopotâmia era a agricultura. \n\t\t\tSobre a agricultura na Mesopotâmia, é correto afirmar que foi marcada:\n");
    printf("\t\t\ta) Pelo uso de um sistema de rodízio nas plantações, associado ao emprego\n\t\t\t de adubos artificiais, proporcionados pelos avanços nas técnicas de cultivo.\n");
	printf("\t\t\tb) Por uma localização geográfica muito favorecida pelas chuvas constantes,\n\t\t\t o que lhe proporcionava boas condições à plantação.\n");
	printf("\t\t\tc) Pela presença da cheias do Rio Nilo, fator determinante para definição das\n\t\t\t épocas de plantio e colheita.\n");
	printf("\t\t\td) Pelo emprego da tração animal, como o alce e o lhama.\n");
	printf("\t\t\te) Pelo controle das cheias dos rios Tigre e Eufrates. Esse controle exigia \n\t\t\tuma ação coletiva intensa.\n");
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
		printf("\t\t\tVocê Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVocê errou ou você perdeu para o tempo :(\n");
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
	printf("\n\t\t\tQuestão 07 - Nível Difício:");
	printf("\n\n\t\t\tOs Estados Teocráticos da Mesopotâmia e do Egito evoluíram acumulando\n\t\t\t características comuns e\n\t\t\tpeculiaridades culturais. Os egípcios desenvolveram a prática de embalsamar o corpo humano porque:\n");
    printf("\t\t\ta) acreditavam que a preservação do corpo de um faraó poderia torna-lo mais \n\t\t\trico e poderoso que os outros faráos do Egito.\n");
	printf("\t\t\tb) os seus deuses, sempre prontos para castigar os pecadores, desencadearam\n\t\t\t o dilúvio.\n");
	printf("\t\t\tc) os camponeses constituíam categoria social inferior.\n");
	printf("\t\t\td) depois da morte, a alma podia voltar ao corpo mumificado.\n");
	printf("\t\t\te) se opunham ao politeísmo dominante na época.\n");
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
		printf("\t\t\tVocê Acertou\n");
		acertou++;
	}
	else{
		system("color 04");
		printf("\t\t\tVocê errou ou você perdeu para o tempo :(\n");
		printf("\t\t\tResposta dada como incorreta.\n");
		errou++;
	} 
	printf("\n\t\t\t");
	system("pause");
	system("cls");
	
	if (acertou>=4 && acertou<7){
		printf("\n\n\n\t\t\tEncerramos por aqui :)\n");
		printf("\n\t\t\tVocê teve %d erros e %d acertos\n", errou, acertou);
	}
	else if (acertou==7){
		printf("\n\n\n\t\t\tEncerramos por aqui :)\n");
		printf("\n\t\t\tVocê conseguiu a pontuação maxima de %d acertos, muito bem\n\t\t\tcontinue assim e você ganhara 100zão do professor Renato ;)\n", acertou);
	}
	else if (acertou>-1 && acertou<4){
		printf("\n\n\n\t\t\tEncerramos por aqui :)\n");
		printf("\n\t\t\tVocê obteve %d erros e %d acertos\n\n\t\t\tVAMOS ESTUDAR MAIS!!!", errou, acertou);
	}
return 0;
}

