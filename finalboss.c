#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
float F1(char I[3], float V, char F[3]){
//A fun��o F1 ser� responsavel por fazer a convers�o de �rea
	float R;
	int i;
	char PI[3], PF[3];
	system("cls");
	printf("\t============================\n\t  === CONVERSOR DE �REA ===\n\t============================\n");
	//Se o valor da variavel I for igual ao valor de F o valor exibido ser� o mesmo que o usuario colocou
	//Os ifs s�o utilizados para identificar de qual e para qual unidade de medida o valor � convertido
	I[0]=toupper(I[0]);
	F[0]=toupper(F[0]);
	if(I[0]=='K'){
    if(F[0]=='K'){
     R=V;
    }
    if(F[0]=='H'){
     R=V*pow(10,2);
     //A fun��o pow � utilizada para fazer a potencializa��o de 10 que ser� pelo valor de V
    }
    if (F[0]=='M'){
      R=V*pow(10,6);
    }
    if(F[0]=='C'){
          R=V*pow(10,10);
    }
    if(F[0]=='M'){
          R=V*pow(10,12);
    }
    if(F[0]=='U'){
          R=V*pow(10,18);
    }
    if(F[0]=='N'){
          R=V*pow(10,24);
    }
}
if (I[0]=='H'){
  if(F[0]=='K'){
          R=V*pow(10,-2);
    }
    if(F[0]=='H'){
    V=R;
    }
    if (F[0]=='M'){
          R=V*pow(10,4);
    }
    if(F[0]=='C'){
          R=V*pow(10,8);
    }
    if(F[0]=='M'){
          R=V*pow(10,10);
    }
    if(F[0]=='U'){
          R=V*pow(10,16);
    }
    if(F[0]=='N'){
          R=V*pow(10,22);
    }
}
if(I[0]=='M'){
  if(F[0]=='K'){
          R=V*pow(10,-6);
    }
    if(F[0]=='H'){
          R=V*pow(10,-4);
    }
    if (F[0]=='M'){
    R=V;
    }
    if(F[0]=='C'){
          R=V*pow(10,4);
    }
    if(F[0]=='M'){
          R=V*pow(10,6);
    }
    if(F[0]=='U'){
          R=V*pow(10,12);
    }
    if(F[0]=='N'){
          R=V*pow(10,18);
    }
}
	if(I[0]=='C'){
	    if(F[0]=='K'){
	     R=V*pow(10,-10);
	    }
	    if(F[0]=='H'){
	   	R=V*pow(10,-8);
	    }
	    if (F[0]=='M'){
	    R=V*pow(10,-4);
	    }
	    if(F[0]=='C'){
                R=V;
	    }
	    if(F[0]=='M'){
	    R=V*pow(100,1);
	    }
	    if(F[0]=='U'){
	    R=V*pow(10,8);
	    }
	    if(F[0]=='N'){
	    R=V*pow(10,14);
	    }
	}
	if(I[0]=='M'){
	    if(F[0]=='K'){
	     R=V*pow(10,-12);
	    }
	    if(F[0]=='H'){
	   	R=V*pow(10,-10);
	    }
	    if (F[0]=='M'){
	    R=V*pow(10,-6);
	    }
	    if(F[0]=='C'){
	    R=V*pow(10,-2);
		}
	    if(F[0]=='M'){
                R=V;
	    }
	    if(F[0]=='U'){
	    R=V*pow(10,6);
	    }
	    if(F[0]=='N'){
	    R=V*pow(10,12);
	    }
	}
	if(I[0]=='U'){
	    if(F[0]=='K'){
	     R=V*pow(10,-18);
	    }
	    if(F[0]=='H'){
	   	R=V*pow(10,-16);
	    }
	    if (F[0]=='M'){
	    R=V*pow(10,-12);
	    }
	    if(F[0]=='C'){
	    R=V*pow(10,-8);
		}
	    if(F[0]=='M'){
	    R=V*pow(10,-6);
	    }
	    if(F[0]=='U'){
        R=V;
	    }
	    if(F[0]=='N'){
	    R=V*pow(10,6);
	    }
	}
	if(I[0]=='N'){
     if(F[0]=='K'){
          R=V*pow(10,-24);
    }
    if(F[0]=='H'){
          R=V*pow(10,-22);
    }
    if (F[0]=='M'){
        R=V*pow(10,-18);
    }
    if(F[0]=='C'){
          R=V*pow(10,-14);
    }
    if(F[0]=='M'){
          R=V*pow(10,-12);
    }
    if(F[0]=='M'){
          R=V*pow(10,-6);
    }
    if(F[0]=='M'){
          R=V;
    }
}	
	for(i=0;i<2;i++){
		I[i]=tolower(I[i]);
		F[i]=tolower(F[i]);
	}
	strcpy(PI,I);
  	strcpy(PF,F);
	printf("\t\t%f%s� = %f%s�\n", V,I, R, F);
	printf("\n\t=============================\n\n");
  return R;
}
int main(){
      setlocale(LC_ALL,"Portuguese");
      int MENU, I2,I3=0,J;
      char I[3], F[3];
       //A variavel MENU � utilizada para fazer o menu do progama com switch //A variavel I representa a unidade de medida do valor inserido //A variavel F representa para qual unidade de medida o valor ser� convertido
       //A variael I2 representa as linhas da matriz //A variavel I3 � utilizada para contabilizar quantas vezes o processo de convers�o foi feito //A variavel J representa as colunas da matriz  
      float V, V2[100], V3[100], M[100][100];
      //A variavel V armazena o valor digitado pelo usuario
      //A variavel V2 � um vetor que guarda os valores digitados pelo usuario
      //A variavel V3 � um vetor que armazena os valores convertidos
      inicio:
	  system("cls");
      printf("\t============================\n\t  === CONVERSOR DE �REA ===\n\t============================\n");
      do{
	      printf("[1] - Sobre os desenvolvedores\n[2] - Sobre o conversor de �rea\n[3] - Conversor de �rea\n[4] - Dados Inseridos\n[5] - Dados Convertidos\n[6] - Dados Armazenados\n[7] - Sair\nDigite a op��o: ");
	      scanf ("%d", &MENU);
	      system("cls");
	      switch (MENU){
	      case 1: system("cls");
					printf("\t============================\n\t  === CONVERSOR DE �REA ===\n\t============================\n");
					printf ("\n============================================================\nNome dos autores:\nJo�o Victor Araujo Bruzetti Prontuario: GU3006336\nRodrigo dos Santos Serrano Prontuario: GU3006387\nTurma:B\nInstituto Federal de Educa��o, Ci�ncia e Tecnologia S�o Paulo, campus Guarulhos\nDiciplina: Algoritmos e Progama��o\nOs direitos autorais desse progama pertence aos dois alunos: Jo�o Victor Araujo Bruzetti e Rodrigo dos Santos Serrano\nO progama funciona com o usuario especificando de qual e para qual unidade de\nmedida o valor deve ser convertido, logo depois o usuario insere o valor a\nconvers�o � realizada.\nOs valores inseridos s�o armazenados em uma matriz onde a primeira coluna guardaos valores digitados pelo usuario e a segunda coluna os valores convertidos\n============================================================\n\n");
		  break;
	      case 2: system("cls");
					printf("\t============================\n\t  === CONVERSOR DE �REA ===\n\t============================\n");
					printf("\n============================================================\nHist�rico: O c�lculo de �reas iniciou-se possivelmente pela pr�tica da\narrecada��o de impostos pelos sacerdotes, os quais calculavam intuitivamente a\nextens�o dos campos s� pela observa��o visual, com o tempo observaram\ntrabalhadores revestindo uma parte retangular do ch�o com pedras quadradas e\nperceberam que para determinar aquantidade de pedras, seria suficiente contar a quantidade de quadrados de uma fileira e multiplicar pelo n�mero de fileiras\nexistentes, dando origem assim � f�rmula para o c�lculo da �rea de um ret�ngulo,sendo esta obtida a partir produto da base pela altura.\n\nDefini��o: �rea � um conceito matem�tico que pode ser definida como quantidade\nde espa�o bidimensional, ou seja, de superf�cie.\n\nProcesso de Convers�o: A convers�o entre duas unidades quadradas � o quadrado dofator de convers�o entre as unidades de comprimento correspondentes.\nPor exemplo: 1m� = 10000cm�\n============================================================\n\n");
	      break;
		  case 3: system("cls");
	      			printf("\t============================\n\t  === CONVERSOR DE �REA ===\n\t============================\n");
		  		  	printf("\n=== Converter de: ===\n");
					printf("[KM] - Quil�metro quadrado\n[HA] - Hectare\n[M] - Metro quadrado\n[CM] - Cent�metro quadrado\n[MM] - Mil�metro quadrado\n[UM] - Micrometro quadrado\n[NM] - Nan�metro quadrado\n[8] - Inicio\nDigite uma op��o: ");
	              	scanf("%s", I);
	             	printf("\n=== Converter para: ===\n");
					printf("[KM] - Quil�metro quadrado\n[HA] - Hectare\n[M] - Metro quadrado\n[CM] - Cent�metro quadrado\n[MM] - Mil�metro quadrado\n[UM] - Micrometro quadrado\n[NM] - Nan�metro quadrado\n[8] - Inicio\nDigite uma op��o: ");
	              	scanf("%s", F);
					printf("Valor a ser convertido: ");
					scanf("%f", &V);
					V2[I3]=V;
					M[I3][0]=V2[I3];
	              	F1(I, V, F);
	              	//A fun��o � chamada com as variaveis sendos substituidas por I,V,F
	              	V3[I3]=F1(I,V,F);
	              	M[I3][1]=V3[I3];
	              	I3++;
	      break;
	       case 4: system("cls");
	      			printf("\t============================\n\t=== VALORES INSERIDOS ===\n\t============================\n");
		  			//O case 4 atrava�s das variaveis I2 e J ir� mostrar uma matriz onde a primeira coluna ira mostrar os valores inseridos pelo usuario (o vetor V2) e a segunda coluna os valores convertidos (o vetor V3)
		  			for(I2=0;I2<I3;I2++){
	              	printf("\t| %2.f |", V2[I2]);
	              	 printf("\n\t============================");
	              printf("\n");
	              }
            break;
            case 5: system("cls");
	      			printf("\t============================\n\t=== VALORES CONVERTIDOS ===\n\t============================\n");
		  			//O case 4 atrava�s das variaveis I2 e J ir� mostrar uma matriz onde a primeira coluna ira mostrar os valores inseridos pelo usuario (o vetor V2) e a segunda coluna os valores convertidos (o vetor V3)
		  			for(I2=0;I2<I3;I2++){
	              	printf("\t| %f |", V3[I2]);
	              	 printf("\n\t============================");
	              printf("\n");
	              }
            break;
	      case 6: system("cls");
	      			printf("\t============================\n\t=== VALORES ARMAZENADOS ===\n\t============================\n");
		  			//O case 4 atrava�s das variaveis I2 e J ir� mostrar uma matriz onde a primeira coluna ira mostrar os valores inseridos pelo usuario (o vetor V2) e a segunda coluna os valores convertidos (o vetor V3)
		  			for(I2=0;I2<I3;I2++){
	              	for(J=0;J<2;J++){
                    printf("\t| %f |", M[I2][J]);
	              }
	              printf("\n\t============================");
	              printf("\n");
	      }
            break;
	      default: ;
	      }
      }while(MENU!=7);
	return 0;
}
