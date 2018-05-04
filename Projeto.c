#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int bool;
#define true 1
#define false 0

#define PROGRAMA 100
#define PROCEDIMENTO 101
#define FIMPROCEDIMENTO 102
#define INTEIRO 103
#define BOOLEANO 104
#define SE 105
#define ENTAO 106
#define SENAO 107
#define FIMSE 108
#define ESCREVA 109
#define VERDADEIRO 110
#define FALSO 111
#define ENQUANTO 112
#define FACA 113
#define FIMENQUANTO 115
#define FIMPROGRAMA 116
#define IDENTIFICADOR 117
#define PONTOEVIRGULA 118
#define DOISPONTOS 119
#define VIRGULA 120
#define PARENTESEESQ 121
#define PARENTESEDIR 122
#define MAIS 123
#define MENOS 124
#define IGUAL 125
#define MAIOR 126
#define MENOR 127
#define MENORIGUAL 128
#define MAIORIGUAL 129
#define DIFERENTE 130
#define COMPARACAO 131
#define ATRIBUICAO 132
#define DIV 133
#define MUL 134
#define NUMERO 135
#define ERROR 666

int scanner(char cod[], int *pos){
	q0: 
		if(cod[*pos] == 'p'){
			//printf("\n %c", cod[*pos] );
			goto q1;
		}else if(cod[*pos] == 's'){
			//printf("\n %c", cod[*pos] );
			goto q10;
		}else if(cod[*pos] == 'd'){
			//printf("\n %c", cod[*pos] );
			goto q150;
		}else if(cod[*pos] == 'm'){
			//printf("\n %c", cod[*pos] );
			goto q154;
		}else if(cod[*pos] == 'b'){
			//printf("\n %c", cod[*pos] );
			goto q27;
		}else if(cod[*pos] == 'e'){
			//printf("\n %c", cod[*pos] );
			goto q36;
		}else if(cod[*pos] == 'f'){
			//printf("\n %c", cod[*pos] );
			goto q56;
		}else if(cod[*pos] == 'i'){
			//printf("\n %c", cod[*pos] );
			goto q98;
		}else if(cod[*pos] == 'v'){
			//printf("\n %c", cod[*pos] );
			goto q106;
		}else if(cod[*pos] == ';'){
			//printf("\n %c", cod[*pos] );
			goto q120;
		}else if(cod[*pos] == ':'){
			//printf("\n %c", cod[*pos] );
			goto q122;
		}else if(cod[*pos] == ','){
			//printf("\n %c", cod[*pos] );
			goto q124;
		}else if(cod[*pos] == ')'){
			//printf("\n %c", cod[*pos] );
			goto q126;
		}else if(cod[*pos] == '('){
			//printf("\n %c", cod[*pos] );
			goto q128;
		}else if(cod[*pos] == '+'){
			//printf("\n %c", cod[*pos] );
			goto q130;
		}else if(cod[*pos] == '-'){
			//printf("\n %c", cod[*pos] );
			goto q132;
		}else if(cod[*pos] == '<'){
			//printf("\n %c", cod[*pos] );
			goto q136;
		}else if(cod[*pos] == '>'){
			//printf("\n %c", cod[*pos] );
			goto q142;
		}else if(cod[*pos] == '='){
			goto q146;
		}else if(cod[*pos] == '1'){
			goto q158;
		}else if(cod[*pos] == '2'){
			goto q158;
		}else if(cod[*pos] == '3'){
			goto q158;
		}else if(cod[*pos] == '4'){
			goto q158;
		}else if(cod[*pos] == '5'){
			goto q158;
		}else if(cod[*pos] == '6'){
			goto q158;
		}else if(cod[*pos] == '7'){
			goto q158;
		}else if(cod[*pos] == '8'){
			goto q158;
		}else if(cod[*pos] == '9'){
			goto q158;
		}else if(cod[*pos] == '0'){
			goto q158;
		}
		
		
		
		
		else if((cod[*pos] == 'A') ||  (cod[*pos] == 'B') ||  (cod[*pos] == 'C') ||  (cod[*pos] == 'D') ||  (cod[*pos] == 'E') ||  (cod[*pos] == 'F') ||  (cod[*pos] == 'G') ||  (cod[*pos] == 'H') ||  (cod[*pos] == 'I') ||  (cod[*pos] == 'J') ||  (cod[*pos] == 'K') ||  (cod[*pos] == 'L') ||  (cod[*pos] == 'M') ||  (cod[*pos] == 'N') ||  (cod[*pos] == 'O') ||  (cod[*pos] == 'P') ||  (cod[*pos] == 'Q') ||  (cod[*pos] == 'R') ||  (cod[*pos] == 'S') ||  (cod[*pos] == 'T') ||  (cod[*pos] == 'U') ||  (cod[*pos] == 'V') ||  (cod[*pos] == 'W') ||  (cod[*pos] == 'X') ||  (cod[*pos] == 'Y') ||  (cod[*pos] == 'Z') ||  (cod[*pos] == 'a') ||   (cod[*pos] == 'c') || (cod[*pos] == 'g') ||  (cod[*pos] == 'h') ||    (cod[*pos] == 'j') ||  (cod[*pos] == 'k') ||  (cod[*pos] == 'l') || (cod[*pos] == 'n') ||  (cod[*pos] == 'o') ||  (cod[*pos] == 'q') ||  (cod[*pos] == 'r') ||   (cod[*pos] == 't') ||  (cod[*pos] == 'u') ||  (cod[*pos] == 'w') ||  (cod[*pos] == 'x') ||  (cod[*pos] == 'y') ||  (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;			
		}


	q1: (*pos)++;
		if(cod[*pos] == 'r'){
			//printf("\n %c", cod[*pos] );
			goto q2;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z') ){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		else {
			//printf("\n %c", cod[*pos] );
			goto q666;
		}

  	q2: (*pos)++;
		if(cod[*pos] == 'o'){
			//printf("\n %c", cod[*pos] );
			goto q3;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		else {
			//printf("\n %c", cod[*pos] );
			goto q666;
		}

  	q3: (*pos)++;
  	
		if(cod[*pos] == 'g'){
			//printf("\n %c", cod[*pos] );
			goto q4;
		}else if(cod[*pos] == 'c'){
			//printf("\n %c", cod[*pos] );
			goto q17;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q4: (*pos)++;
  	
		if(cod[*pos] == 'r'){
			//printf("\n %c", cod[*pos] );
			goto q5;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q5: (*pos)++;
  	
		if(cod[*pos] == 'a'){
			//printf("\n %c", cod[*pos] );
			goto q6;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q6: (*pos)++;
  	
		if(cod[*pos] == 'm'){
			//printf("\n %c", cod[*pos] );
			goto q7;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q7: (*pos)++;
  	
		if(cod[*pos] == 'a'){
			//printf("\n %c", cod[*pos] );
			goto q8;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q8: (*pos)++;
  	
		if(cod[*pos] == ' '){
			//printf("\n %c", cod[*pos] );
			goto q9;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}
  	q9: (*pos)++;
  	 return PROGRAMA;

  	q10: (*pos)++;
  	
  	 	if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q11;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q11: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q12;
  	 	}else if(cod[*pos] == 'n'){
			//printf("\n %c", cod[*pos] );
			goto q13;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}
  	 q12: (*pos)++;
  	  return SE;

  	 q13: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q14;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q14: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q15;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q15: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q16;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q16: (*pos)++;
  	 	return SENAO;	

  	 q17: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q18;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q18: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q19;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q19: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q20;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q20: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q21;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q21: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q22;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q22: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q23;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q23: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q24;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q24: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q25;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q25: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q26;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}
  	 q26: (*pos)++;
  	 return PROCEDIMENTO;

  	 q27: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q28;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q28: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q29;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q29: (*pos)++;
  	 if (cod[*pos] == 'l'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q30;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
		//	printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q30: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q31;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	q31:(*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q32;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	q32:(*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q33;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	q33:(*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q34;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q34:(*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q35;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}
		
  	 q35:(*pos)++;
  	 return BOOLEANO;

  	 q36: (*pos)++;
  	 if (cod[*pos] == 's'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q37;
  	 	}else if(cod[*pos] == 'n'){
			//printf("\n %c", cod[*pos] );
			goto q44;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q37: (*pos)++;
  	 if (cod[*pos] == 'c'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q38;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q38: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q39;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 	
  	 q39: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q40;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q40: (*pos)++;
  	 if (cod[*pos] == 'v'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q41;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q41: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q42;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q42: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q43;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}
  	 q43: (*pos)++;
 		return ESCREVA;

  	 q44: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q45;
  	 	}else if(cod[*pos] == 'q'){
			//printf("\n %c", cod[*pos] );
			goto q49;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q45: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q46;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q46: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q47;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q47: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q48;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q48: (*pos)++;
 		return ENTAO;

  	 q49: (*pos)++;
  	 if (cod[*pos] == 'u'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q50;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q50: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q51;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q51: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q52;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q52: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q53;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q53: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q54;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q54: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q55;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q55: (*pos)++;
	  	 return ENQUANTO;

  	 q56: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q57;
  	 	}else if(cod[*pos] == 'i'){
			//printf("\n %c", cod[*pos] );
			goto q65;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q57: (*pos)++;
  	 if (cod[*pos] == 'c'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q58;
  	 	}else if(cod[*pos] == 'l'){
			//printf("\n %c", cod[*pos] );
			goto q61;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q58: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q59;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q59: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q60;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q60: (*pos)++;
  	 	return FACA;

  	 q61: (*pos)++;
  	 if (cod[*pos] == 's'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q62;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q62: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q63;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q63: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q64;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q64: (*pos)++;
  		return FALSO;

  	 q65: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q66;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q66: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q67;
  	 	}else if(cod[*pos] == 'p'){
			//printf("\n %c", cod[*pos] );
			goto q76;
		}else if(cod[*pos] == 's'){
			//printf("\n %c", cod[*pos] );
			goto q95;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q67: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q68;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q68: (*pos)++;
  	 if (cod[*pos] == 'q'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q69;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q69: (*pos)++;
  	 if (cod[*pos] == 'u'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q70;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q70: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q71;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q71: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q72;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q72: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q73;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q73: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q74;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q74: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q75;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q75: (*pos)++;
  	  return FIMENQUANTO;

  	 q76: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q77;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q77: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q78;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q78: (*pos)++;
  	 if (cod[*pos] == 'c'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q79;
  	 	}else if(cod[*pos] == 'g'){
			//printf("\n %c", cod[*pos] );
			goto q89;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q79: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q80;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q80: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q81;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q81: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q82;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q82: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q83;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l')  || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
		//	printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q83: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q84;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q84: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 	//	printf("\n %c", cod[*pos] );
  	 		goto q85;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q85: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 	//	printf("\n %c", cod[*pos] );
  	 		goto q86;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q86: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q87;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q87: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q88;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
		//	printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q88: (*pos)++;
  	 	return FIMPROCEDIMENTO;

  	 q89: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 	//	printf("\n %c", cod[*pos] );
  	 		goto q90;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q90: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q91;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q91: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q92;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q92: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q93;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q93: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q94;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q94: (*pos)++;
 		return FIMPROGRAMA;

  	 q95: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q96;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q96: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q97;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q97: (*pos)++;
  	 	return FIMSE;

  	 q98: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q99;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q99: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q100;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q100: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q101;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q101: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q102;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q102: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q103;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q103: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q104;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q104: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q105;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q105: (*pos)++;
		return INTEIRO;

	 q106: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q107;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q107: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q108;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q108: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q109;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q109: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q110;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q110: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q111;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
	 q111: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q112;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
	 q112: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q113;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
	 q113: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q114;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
	 q114: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q115;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q115: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q116;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}

	 q116: (*pos)++;
  	 	return VERDADEIRO;

  	 q117:(*pos)++;
  	 if ((cod[*pos] == 'A') ||  (cod[*pos] == 'B') ||  (cod[*pos] == 'C') ||  (cod[*pos] == 'D') ||  (cod[*pos] == 'E') ||  (cod[*pos] == 'F') ||  (cod[*pos] == 'G') ||  (cod[*pos] == 'H') ||  (cod[*pos] == 'I') ||  (cod[*pos] == 'J') ||  (cod[*pos] == 'K') ||  (cod[*pos] == 'L') ||  (cod[*pos] == 'M') ||  (cod[*pos] == 'N') ||  (cod[*pos] == 'O') ||  (cod[*pos] == 'P') ||  (cod[*pos] == 'Q') ||  (cod[*pos] == 'R') ||  (cod[*pos] == 'S') ||  (cod[*pos] == 'T') ||  (cod[*pos] == 'U') ||  (cod[*pos] == 'V') ||  (cod[*pos] == 'W') ||  (cod[*pos] == 'X') ||  (cod[*pos] == 'Y') ||  (cod[*pos] == 'Z') ||  (cod[*pos] == 'a') ||  (cod[*pos] == 'b') ||  (cod[*pos] == 'c') ||  (cod[*pos] == 'd') ||  (cod[*pos] == 'e') ||  (cod[*pos] == 'f') ||  (cod[*pos] == 'g') ||  (cod[*pos] == 'h') ||  (cod[*pos] == 'i') ||  (cod[*pos] == 'j') ||  (cod[*pos] == 'k') ||  (cod[*pos] == 'l') ||  (cod[*pos] == 'm') ||  (cod[*pos] == 'n') ||  (cod[*pos] == 'o') ||  (cod[*pos] == 'p') ||  (cod[*pos] == 'q') ||  (cod[*pos] == 'r') ||  (cod[*pos] == 's') ||  (cod[*pos] == 't') ||  (cod[*pos] == 'u') ||  (cod[*pos] == 'v') ||  (cod[*pos] == 'w') ||  (cod[*pos] == 'x') ||  (cod[*pos] == 'y') ||  (cod[*pos] == 'z')){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q117;
  	 	}else if (cod[*pos] == ' '){
  	 		goto q118;
  	 	}

  	q118:(*pos)++;
  	 	return IDENTIFICADOR;

	 q120: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q121;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q121: (*pos)++;
  	 	return PONTOEVIRGULA;

	 q122: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 	//	printf("\n %c", cod[*pos] );
  	 		goto q123;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q123: (*pos)++;
  	 	return DOISPONTOS; 

	 q124: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q125;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q125: (*pos)++;
  	 	return VIRGULA; 

	 q126: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q127;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q127: (*pos)++;
  	 	return PARENTESEDIR; 

	 q128: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q129;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q129: (*pos)++;
  	 	return PARENTESEESQ; 

	 q130: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q131;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q131: (*pos)++;
  	 	return MAIS; 

	 q132: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q133;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q133: (*pos)++;
  	 	return MENOS; 

	 q134: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		goto q135;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q135: (*pos)++;
  	 	return IGUAL; 

	 q136: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q137;
        } else if ((cod[*pos] == '=')) {
  	 		//printf("\n %c", cod[*pos] );
            goto q138;
  	 	} else if ((cod[*pos] == '>')){
  	 		//printf("\n %c", cod[*pos] );
            goto q140;
        };

	 q137: (*pos)++;
  	 	return MENOR; 

	 q138: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q139;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q139: (*pos)++;
  	 	return MENORIGUAL; 

	 q140: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q141;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q141: (*pos)++;
  	 	return DIFERENTE; 

	 q142: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q143;
        } else if ((cod[*pos] == '=')) {
  	 		//printf("\n %c", cod[*pos] );
            goto q144;
        };

	 q143: (*pos)++;
  	 	return MAIOR; 

	 q144: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q145;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q145: (*pos)++;
  	 	return MAIORIGUAL; 

	 q146: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q147;
        } else if ((cod[*pos] == '=')) {
  	 		//printf("\n %c", cod[*pos] );
            goto q148;
        };

	 q147: (*pos)++;
  	 	return ATRIBUICAO; 

	 q148: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q149;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

	 q149: (*pos)++;
  	 	return COMPARACAO; 

	 q150: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q151;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			//printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q151: (*pos)++;
  	 if (cod[*pos] == 'v'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q152;
//	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
//			printf("\n %c", cod[*pos] );
//			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q152: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q153;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

    q153:
        return DIV;

	 q154: (*pos)++;
  	 if (cod[*pos] == 'u'){
  	 		
  	 		goto q155;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}


	 q155: (*pos)++;
  	 if (cod[*pos] == 'l'){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q156;
//	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
//			printf("\n %c", cod[*pos] );
//			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q156: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		//printf("\n %c", cod[*pos] );
  	 		goto q157;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}

        q157:
        return MUL;
        
        q158: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		goto q159;
  	 	}else if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			goto q666;
		}else if(cod[*pos] == '0'|| cod[*pos] == '0'|| cod[*pos] == '1'|| cod[*pos] == '2'|| cod[*pos] == '3'|| cod[*pos] == '4'|| cod[*pos] == '5'|| cod[*pos] == '6'|| cod[*pos] == '7'|| cod[*pos] == '8'|| cod[*pos] == '9'){
			goto q158;
		}

        q159:
        return NUMERO;
    

  q666:
  	return ERROR;

}

//Metodos do analisador sintatico 'aki nois controi fibra poha'

//Array com todos os token sequencialmente dispostos do programa
int SEQ_TOKENS[5000];

//Indice do token atual
int NUM_TOKEN_ATUAL=0;


//Verifica o proxima token sem "desempilha-lo"
char lookhead(){
	 int temp = NUM_TOKEN_ATUAL+ 1;
	 return SEQ_TOKENS[temp];
}

bool identificador(){
	if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == IDENTIFICADOR){
		return true;
	}
	printf("Erro! Identificador invalido");
	return false;
}

bool chamada_procedimento(){
	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL];
	
	if(temp == IDENTIFICADOR){
		NUM_TOKEN_ATUAL++;

		if(SEQ_TOKENS[NUM_TOKEN_ATUAL] == PONTOEVIRGULA){
			NUM_TOKEN_ATUAL++;
			return true;
		} else if(SEQ_TOKENS[NUM_TOKEN_ATUAL] == PARENTESEESQ){
			NUM_TOKEN_ATUAL++;
			if( lista_parametros() == true){
				if(SEQ_TOKENS[NUM_TOKEN_ATUAL] == PONTOEVIRGULA){
					NUM_TOKEN_ATUAL++;
					return true;
				}
				else{
					printf("Erro! esperava ';'");
					return false;	
				}
			}
				
		}
		else{
			printf("Erro! esperava ';' ou abertura dos parenteses");
			return false;	
		}
		
	}
	return false;
}

bool lista_parametros(){
	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL];
	int look = lookhead();
	
	if(temp == PARENTESEDIR){
		NUM_TOKEN_ATUAL++;
		return true;
	}else if(variavel(temp) && look != VIRGULA){
		NUM_TOKEN_ATUAL++;
		return true;
	}else if(numero(temp) && look != VIRGULA){
		NUM_TOKEN_ATUAL++;
		return true;
	}else if(bool1(temp) && look != VIRGULA){
		NUM_TOKEN_ATUAL++;
		return true;
	}else if(look == VIRGULA && (variavel(temp) || numero(temp) || bool1(temp))){
		NUM_TOKEN_ATUAL++;
		lista_parametros();
	}else{
		printf("Erro! lista de parametros invalida");
		return false;
	}
		
}

bool numero(int temp){
	if(temp == NUMERO)
		return true;
	else{
		printf("Erro! esperava um numero");
		return false;
	}
}

bool bool1(int temp){
	if(temp == FALSO || temp == VERDADEIRO)
		return true;
	else{
		printf("Erro! esperava um booleano");
		return false;
	}
}

bool variavel(int temp){
	if(temp == IDENTIFICADOR)
		return true;
	else{
		printf("Erro! esperava-se um identificador");
		return false;
	}
}

bool expressao(){
	if(expressao_simples() == true){
		int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
		if(relacao(temp) == true){
			if(expressao_simples() == true){
				return true;
			}else{
				return false;
			}
		}else{
			return true;
		}
	}
	return false;
}

bool atribuicao(){
	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
	if(variavel(temp) == true) {
		if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == ATRIBUICAO){
			if(expressao() == true){
				return true;
			}
		}
		else{
			printf("Erro! esperava o simbolo de atribuicao '='");
			return false;
		}
	}
	return false;
}

bool comando_condicional(){	
	if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == SE){
		if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEESQ){
			if(expressao() == true){
				if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEDIR){
					if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == ENTAO){
						if(comando() == true){
							if(lookhead() == SENAO){
								if(comando() == true){
									if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == FIMSE)
										return true;
								}
							}
							else if(lookhead() == FIMSE)
								return true;
						}
					}
					else{
						printf("Erro! esperava palavra reservada 'entao'");
						return false;	
					}
				}
				else{
					printf("Erro! esperava palavra reservada ')'");
					return false;	
				}
			}
		}
		else{
			printf("Erro! esperava palavra reservada '('");
			return false;	
		}
	}
	else{
		printf("Erro! esperava palavra reservada 'se'");
		return false;	
	}
	
	return false;
}

bool comando_repetitivo(){
	if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == ENQUANTO){
		if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEESQ){
			if(expressao() == true){
					if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEDIR){
						if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == FACA){
							if(comando_composto() == true){
								if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == FIMENQUANTO){
									return true;
								}
								else{
									printf("Erro! esperava palavra reservada 'fimenquanto'");
									return false;
								}
							}
						}
					}
					else{
						printf("Erro! esperava  '('");
						return false;
					}
		  }
	 }
		else{
			printf("Erro! esperava  '('");
			return false;
		}
  }
	else{
		printf("Erro! esperava palavra reservada 'enquanto'");
		return false;
	}
}

bool comando(){
	//Não sei quando é atribuição , chamada de procedimento ou comando condicional
	if(lookhead()  == IDENTIFICADOR)
		return atribuicao();
	else if(lookhead() == IDENTIFICADOR)
		return chamada_procedimento();
	else if(lookhead() == IDENTIFICADOR)
		return comando_condicional();
	else if(lookhead() == ENQUANTO)
		return comando_repetitivo();
	else if (lookhead() == ESCREVA){
		NUM_TOKEN_ATUAL++;
		if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEESQ){
			if(identificador() == true){
				if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEDIR){
					if(comando() && SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PONTOEVIRGULA){
						return true;
					}
				}
				else{
					printf("Erro! esperava ')'");
					return false;
				}
				
			}
		}
		else{
			printf("Erro! esperava ')'");
			return false;
		}
	}
	return false;	
}

bool termo(){
	if(fator() == true){
		if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEESQ){
			int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
			if(temp == MUL || temp == DIV){
				if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEDIR){
					if(fator() == true){
						return true;
					}
				}else{
					printf("Erro! esperava ')'");
					return false;
				}
			}else{
				printf("Erro! esperava 'mul' ou 'div'");
				return false;
			}
		}else{
			return true;
		}
	}
	return false;
}

bool expressao_simples(){
	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
	
	if(temp == MAIS){
		if(termo() == true){
			int temp2 = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
			if(temp2 == MAIS){
				if(termo() == true)
					return true;
				else
					return false;
			}
			else if(temp2 == MENOS){
				if(termo() == true)
					return true;
				else
					return false;
			}
			else{
				return true;
			}
		}
	}else if(temp == MENOS){
		if(termo() == true){
			int temp2 = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
			if(temp2 == MAIS){
				if(termo() == true)
					return true;
				else
					return false;
			}
			else if(temp2 == MENOS){
				if(termo() == true)
					return true;
				else
					return false;
			}
			else{
				return true;
			}
		}
	}
	return false;
}

bool relacao(int temp){
	if(temp == COMPARACAO){
		return true;
	}else if(temp == MAIOR){
		return true;
	}else if(temp == MENOR){
		return true;
	}else if(temp == MENORIGUAL){
		return true;
	}else if(temp == MAIORIGUAL){
		return true;
	}else if(temp == DIFERENTE){
		return true;
	}else{
		printf("Erro! relacao invalida");
		return false;
	}
}

bool fator(){
	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
	
	if(variavel(temp))
		return true;
	else if(numero(temp))
		return true;
	else if(bool1(temp))
		return true;
	else if(temp == PARENTESEESQ) return true;
	//ver aki
}

bool comando_composto(){
	if(comando() && SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PONTOEVIRGULA){
			
	}
}

bool bloco(){
    //Pelo que entendi aqui tem 4 possibilidades:
    // 1 -> ter declaracao de variaveis, de procedimentos e (obrigatorio) comando composto
    // 2 -> ter declaracao de variaveis, e (obrigatorio) comando composto
    // 3 -> ter declaracao de procedimentos e (obrigatorio) comando composto
    // 4 -> ter só o comando composto

//	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];

    //Possibilidade 1
    //Como é opcional, faz um lookahead pra olhar sem desempilhar
    if(lookhead() == declaracao_variavel()) {
        //Faz outro para identificar a segunda camada de opcionais
	    if(lookhead() == chamada_procedimento()) {
	        //Se chegou até aqui, agora temos que realmente desempilhar 2 vezes.
	        int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
	        //Verifica se é comando composto e retorna true
	        if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == comando_composto()){
	            return true;
	        }
	    }
	}
    //Possibilidade 2
    //Como é opcional, faz um lookahead pra olhar sem desempilhar
    if(lookhead() == declaracao_variavel()) {
        //Aqui só estamos uma camada dentro então só desempilha uma vez
        //Verifica se é comando composto e retorna true
        if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == comando_composto()){
            return true;
        }
    }
    //Possibilidade 3
    //Quase a mesma coisa da possiblidade 3, só troca declaracao_variavel por chamada_procedimento
    if(lookhead() == chamada_procedimento()) {
        //Verifica se é comando composto e retorna true
        if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == comando_composto()){
            return true;
        }
    }
    //Possibilidade 4
    //Só checa o comando_composto
    if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == comando_composto()) {
        return true;
    }

    //Se não caiu em nenhuma das probabiidades de cima, retorna falso;
    return false;
}

bool declaracao_procedimento(){
	if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PROCEDIMENTO){
		if(identificador() == true){
			if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEESQ){
				if(parametros_formais() == true){
					if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PARENTESEDIR){
						if(bloco() == true){
							if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == FIMPROCEDIMENTO)
								return true;
						}
					}
				}
			}
		}
	}
}

bool parametros_formais(){
	if(parametro_formal() == true){
	if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == VIRGULA){
			parametros_formais();
		}
		else{
			return true;
		}
	}
	
}

bool parametro_formal(){
	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
	if(tipo(temp) == true){
		if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == DOISPONTOS){
			if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == IDENTIFICADOR)
				return true;
		}
		else{
			printf("Erro! esperava um ':'");
			return false;
		}
	}
	return false;
}

bool tipo(int temp){
	if(temp == INTEIRO)
		return true;
	else if(temp == BOOLEANO)
		return true;
	else{
		printf("Erro! esperva um tipo");
		return false;
	}
}

bool declaracao_variaveis(){
	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL++];
	if(tipo(temp) == true){
		if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == DOISPONTOS){
			if(lista_identificadores() == true){
				if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PONTOEVIRGULA)
					return true;
				else{
					printf("Erro! esperava ';'");
					return false;
				}
			}
		}else{
			printf("Erro! esperava ':'");
			return false;
		}
	}
	return false;
}

bool parte_declaracao_variavel(){
	if(declaracao_variaveis() == true){
		int look = lookhead();
		if(tipo(look) == true)
			parte_declaracao_variavel();
		else{
			return true;
		}
		
	}
	return false;
}

bool lista_identificadores(){
	int temp = SEQ_TOKENS[NUM_TOKEN_ATUAL];
	if(identificador(temp) == true){
		if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == VIRGULA ){
			lista_identificadores();
		}
		else{
			return true;
		}
	}
	return false;
}

bool programa(){
	if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == PROGRAMA){
		if(identificador() == true){
			if(bloco() == true){
				if(SEQ_TOKENS[NUM_TOKEN_ATUAL++] == FIMPROGRAMA){
					return true;
				}
				else{
					printf("Erro! esperava palavra reservada 'Fimprograma'");
					return false;
				}
			}	
		} 
	}
	printf("Erro! esperava palavra reservada 'Programa'");
	return false;
}


int main(){
	
    FILE *arq;
    FILE *arqGrava;
    arq = fopen("analise_lexica.txt", "r");
    arqGrava = fopen("ArqGrava.txt", "wt");

    int result;
    char buf[40];
    int ch, i=0;
	result = fprintf(arqGrava, "LOG DE EXECUÇÃO\n\n");
    while (EOF != (ch = fgetc(arq))) {
    	
    	if (isspace(ch)) {
    		buf[i] = ch;
    		int p = 0;
        	int cod = scanner(buf, &p);
        	printf("\nPALAVRA: |%s|\n", buf);
		
			if(cod == 666)
				result = fprintf(arqGrava, "PALAVRA: %s - CODIGO: %d - ERRO LEXICO\n ", buf, cod);
			else{
				result = fprintf(arqGrava, "PALAVRA: %s - CODIGO: %d - PALAVRA ACEITA\n", buf, cod);
				//strcpy(SEQ_TOKENS[NUM_TOKEN_ATUAL++], buf);
				SEQ_TOKENS[NUM_TOKEN_ATUAL++] = cod;
			}
        		
        	
    		i=0;
			memset(&buf[0], 0, sizeof(buf));	
		}
		else{
			buf[i] = ch;
			printf("%c",buf[i]);
			i++;
			
		}
    	
    }
    
    //Aqui começa o identificador sintatico
    NUM_TOKEN_ATUAL=0;
    
    bool is_valid = comando_condicional();
    if(is_valid == true)
    	printf("Sintaxe valida!");
    else
    	printf("Sintaxe invalida!");
}
