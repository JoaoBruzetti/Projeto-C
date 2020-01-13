#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
float F1(char I[3], float V, char F[3]){
//A função F1 será responsavel por fazer a conversão de área
	float R;
	int i;
	char PI[3], PF[3];
	system("cls");
	printf("\t============================\n\t  === CONVERSOR DE ÁREA ===\n\t============================\n");
	//Se o valor da variavel I for igual ao valor de F o valor exibido será o mesmo que o usuario colocou
	//Os ifs são utilizados para identificar de qual e para qual unidade de medida o valor é convertido
	I[0]=toupper(I[0]);
	F[0]=toupper(F[0]);
	if(I[0]=='K'){
    if(F[0]=='K'){
     R=V;
    }
    if(F[0]=='H'){
     R=V*pow(10,2);
     //A função pow é utilizada para fazer a potencialização de 10 que será pelo valor de V
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
	printf("\t\t%f%s² = %f%s²\n", V,I, R, F);
	printf("\n\t=============================\n\n");
  return R;
}
int main(){
      setlocale(LC_ALL,"Portuguese");
      int MENU, I2,I3=0,J;
      char I[3], F[3];
       //A variavel MENU é utilizada para fazer o menu do progama com switch //A variavel I representa a unidade de medida do valor inserido //A variavel F representa para qual unidade de medida o valor será convertido
       //A variael I2 representa as linhas da matriz //A variavel I3 é utilizada para contabilizar quantas vezes o processo de conversão foi feito //A variavel J representa as colunas da matriz  
      float V, V2[100], V3[100], M[100][100];
      //A variavel V armazena o valor digitado pelo usuario
      //A variavel V2 é um vetor que guarda os valores digitados pelo usuario
      //A variavel V3 é um vetor que armazena os valores convertidos
      inicio:
	  system("cls");
      printf("\t============================\n\t  === CONVERSOR DE ÁREA ===\n\t============================\n");
      do{
	      printf("[1] - Sobre os desenvolvedores\n[2] - Sobre o conversor de área\n[3] - Conversor de área\n[4] - Dados Inseridos\n[5] - Dados Convertidos\n[6] - Dados Armazenados\n[7] - Sair\nDigite a opção: ");
	      scanf ("%d", &MENU);
	      system("cls");
	      switch (MENU){
	      case 1: system("cls");
					printf("\t============================\n\t  === CONVERSOR DE ÁREA ===\n\t============================\n");
					printf ("\n============================================================\nNome dos autores:\nJoão Victor Araujo Bruzetti Prontuario: GU3006336\nRodrigo dos Santos Serrano Prontuario: GU3006387\nTurma:B\nInstituto Federal de Educação, Ciência e Tecnologia São Paulo, campus Guarulhos\nDiciplina: Algoritmos e Progamação\nOs direitos autorais desse progama pertence aos dois alunos: João Victor Araujo Bruzetti e Rodrigo dos Santos Serrano\nO progama funciona com o usuario especificando de qual e para qual unidade de\nmedida o valor deve ser convertido, logo depois o usuario insere o valor a\nconversão é realizada.\nOs valores inseridos são armazenados em uma matriz onde a primeira coluna guardaos valores digitados pelo usuario e a segunda coluna os valores convertidos\n============================================================\n\n");
		  break;
	      case 2: system("cls");
					printf("\t============================\n\t  === CONVERSOR DE ÁREA ===\n\t============================\n");
					printf("\n============================================================\nHistórico: O cálculo de áreas iniciou-se possivelmente pela prática da\narrecadação de impostos pelos sacerdotes, os quais calculavam intuitivamente a\nextensão dos campos só pela observação visual, com o tempo observaram\ntrabalhadores revestindo uma parte retangular do chão com pedras quadradas e\nperceberam que para determinar aquantidade de pedras, seria suficiente contar a quantidade de quadrados de uma fileira e multiplicar pelo número de fileiras\nexistentes, dando origem assim à fórmula para o cálculo da área de um retângulo,sendo esta obtida a partir produto da base pela altura.\n\nDefinição: Área é um conceito matemático que pode ser definida como quantidade\nde espaço bidimensional, ou seja, de superfície.\n\nProcesso de Conversão: A conversão entre duas unidades quadradas é o quadrado dofator de conversão entre as unidades de comprimento correspondentes.\nPor exemplo: 1m² = 10000cm²\n============================================================\n\n");
	      break;
		  case 3: system("cls");
	      			printf("\t============================\n\t  === CONVERSOR DE ÁREA ===\n\t============================\n");
		  		  	printf("\n=== Converter de: ===\n");
					printf("[KM] - Quilômetro quadrado\n[HA] - Hectare\n[M] - Metro quadrado\n[CM] - Centímetro quadrado\n[MM] - Milímetro quadrado\n[UM] - Micrometro quadrado\n[NM] - Nanômetro quadrado\n[8] - Inicio\nDigite uma opção: ");
	              	scanf("%s", I);
	             	printf("\n=== Converter para: ===\n");
					printf("[KM] - Quilômetro quadrado\n[HA] - Hectare\n[M] - Metro quadrado\n[CM] - Centímetro quadrado\n[MM] - Milímetro quadrado\n[UM] - Micrometro quadrado\n[NM] - Nanômetro quadrado\n[8] - Inicio\nDigite uma opção: ");
	              	scanf("%s", F);
					printf("Valor a ser convertido: ");
					scanf("%f", &V);
					V2[I3]=V;
					M[I3][0]=V2[I3];
	              	F1(I, V, F);
	              	//A função é chamada com as variaveis sendos substituidas por I,V,F
	              	V3[I3]=F1(I,V,F);
	              	M[I3][1]=V3[I3];
	              	I3++;
	      break;
	       case 4: system("cls");
	      			printf("\t============================\n\t=== VALORES INSERIDOS ===\n\t============================\n");
		  			//O case 4 atravaés das variaveis I2 e J irá mostrar uma matriz onde a primeira coluna ira mostrar os valores inseridos pelo usuario (o vetor V2) e a segunda coluna os valores convertidos (o vetor V3)
		  			for(I2=0;I2<I3;I2++){
	              	printf("\t| %2.f |", V2[I2]);
	              	 printf("\n\t============================");
	              printf("\n");
	              }
            break;
            case 5: system("cls");
	      			printf("\t============================\n\t=== VALORES CONVERTIDOS ===\n\t============================\n");
		  			//O case 4 atravaés das variaveis I2 e J irá mostrar uma matriz onde a primeira coluna ira mostrar os valores inseridos pelo usuario (o vetor V2) e a segunda coluna os valores convertidos (o vetor V3)
		  			for(I2=0;I2<I3;I2++){
	              	printf("\t| %f |", V3[I2]);
	              	 printf("\n\t============================");
	              printf("\n");
	              }
            break;
	      case 6: system("cls");
	      			printf("\t============================\n\t=== VALORES ARMAZENADOS ===\n\t============================\n");
		  			//O case 4 atravaés das variaveis I2 e J irá mostrar uma matriz onde a primeira coluna ira mostrar os valores inseridos pelo usuario (o vetor V2) e a segunda coluna os valores convertidos (o vetor V3)
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
