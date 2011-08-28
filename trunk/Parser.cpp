#include "Parser.h"
/**
*  llenarTabla
*/
/*---------------------------------------------------------
/---------------ALGORITMO LR(1)----------------------------
/
/
/*---------------------------------------------------------*/
void Parser::llenarTabla2()
{

	tableG[0][0]=P;// tamaño del lado derecho de las gramaticas  S->CC tableG[0]= length(CC)
	tableG[1][0]=C_N;// tamaño del lado derecho de las gramaticas  C->cC tableG[0]= length(cC)
	tableG[2][0]=C_N;// .....
	tableG[0][1]=2;
	tableG[1][1]=2;
	tableG[2][1]=1;
	//tableG[3]=;
	//tableG[4]=;


	/*llenado por heverd y luis*/

	for(int i=0;i<220;i++)
		for(int j=0;j<25;j++)
			for(int k=0;k<2;k++)
				table[i][j][k]=ERROR_SYNTAX;
	
	//empezando desde fila 0
	
	tableLR[0][REGION][0]=Des;
	tableLR[0][REGION][1]=3;

	tableLR[1][DOLARFIN][0]=ACCEPT;
	
	tableLR[2][CLASS][0]=Des;
	tableLR[2][CLASS][1]=5;

	tableLR[3][ID][0]=Des;
	tableLR[3][ID][1]=6;

	tableLR[4][DOLARFIN][0]=Red;
	tableLR[4][DOLARFIN][1]=2;

	tableLR[5][ID][0]=Des;
	tableLR[5][ID][1]=7;

	tableLR[6][PUNTOYCOMA][0]=Red;
	tableLR[6][PUNTOYCOMA][1]=5;
	tableLR[6][COMA][0]=Des;
	tableLR[6][COMA][1]=9;

	tableLR[7][LLAVE_A][0]=Des;
	tableLR[7][LLAVE_A][1]=10;

	tableLR[8][PUNTOYCOMA][0]=Des;
	tableLR[8][PUNTOYCOMA][1]=11;

	tableLR[9][ID][0]=Des;
	tableLR[9][ID][1]=12;

	tableLR[10][ID][0]=Red;
	tableLR[10][ID][1]=9;
	tableLR[10][DOUBLE][0]=Red;
	tableLR[10][DOUBLE][1]=9;
	tableLR[10][VOID][0]=Red;
	tableLR[10][VOID][1]=9;
	tableLR[10][LLAVE_C][0]=Red;
	tableLR[10][LLAVE_C][1]=9;

	tableLR[11][CLASS][0]=Red;
	tableLR[11][CLASS][1]=3;
	tableLR[11][DOLARFIN][0]=Red;
	tableLR[11][DOLARFIN][1]=3;

	tableLR[12][PUNTOYCOMA][0]=Red;
	tableLR[12][PUNTOYCOMA][1]=5;
	tableLR[12][COMA][0]=Des;
	tableLR[12][COMA][1]=3;

	tableLR[13][ID][0]=Des;
	tableLR[13][ID][1]=17;
	tableLR[13][DOUBLE][0]=Des;
	tableLR[13][DOUBLE][1]=18;
	tableLR[13][VOID][0]=Des;
	tableLR[13][VOID][1]=19;
	tableLR[13][LLAVE_C][0]=Red;
	tableLR[13][LLAVE_C][1]=14;

	tableLR[14][PUNTOYCOMA][0]=Red;
	tableLR[14][PUNTOYCOMA][1]=4;

	tableLR[15][LLAVE_C][0]=Des;
	tableLR[15][LLAVE_C][1]=20;

	tableLR[16][ID][0]=Des;
	tableLR[16][ID][1]=21;

	tableLR[17][ID][0]=Red;
	tableLR[17][ID][1]=10;

	tableLR[18][ID][0]=Red;
	tableLR[18][ID][1]=11;

	tableLR[19][ID][0]=Red;
	tableLR[19][ID][1]=12;

	tableLR[20][CLASS][0]=Des;
	tableLR[20][CLASS][1]=5;
	tableLR[20][DOLARFIN][0]=Red;
	tableLR[20][DOLARFIN][1]=7;

	tableLR[21][IN][0]=Des;
	tableLR[21][IN][1]=23;
	tableLR[21][PAR_A][0]=Des;
	tableLR[21][PAR_A][1]=24;

	tableLR[22][DOLARFIN][0]=Red;
	tableLR[22][DOLARFIN][1]=6;

	tableLR[23][ID][0]=Des;
	tableLR[23][ID][1]=25;

	tableLR[24][ID][0]=Des;
	tableLR[24][ID][1]=17;
	tableLR[24][DOUBLE][0]=Des;
	tableLR[24][DOUBLE][1]=18;
	tableLR[24][VOID][0]=Des;
	tableLR[24][VOID][1]=19;

	tableLR[25][PUNTOYCOMA][0]=Des;
	tableLR[25][PUNTOYCOMA][1]=27;

	tableLR[26][ID][0]=Des;
	tableLR[26][ID][1]=28;

	tableLR[27][ID][0]=Red;
	tableLR[27][ID][1]=8;
	tableLR[27][DOUBLE][0]=Red;
	tableLR[27][DOUBLE][1]=8;
	tableLR[27][VOID][0]=Red;
	tableLR[27][VOID][1]=8;
	tableLR[27][LLAVE_C][0]=Red;
	tableLR[27][LLAVE_C][1]=8;

	tableLR[28][COMA][0]=Des;
	tableLR[28][COMA][1]=30;
	tableLR[28][PAR_C][0]=Red;
	tableLR[28][PAR_C][1]=16;

	tableLR[29][PAR_C][0]=Des;
	tableLR[29][PAR_C][1]=31;

	tableLR[30][ID][0]=Des;
	tableLR[30][ID][1]=17;
	tableLR[30][DOUBLE][0]=Des;
	tableLR[30][DOUBLE][1]=18;
	tableLR[30][VOID][0]=Des;
	tableLR[30][VOID][1]=19;

	tableLR[31][READS][0]=Des;
	tableLR[31][READS][1]=34;
	tableLR[31][WRITES][0]=Des;
	tableLR[31][WRITES][1]=35;
	tableLR[31][LLAVE_A][0]=Red;
	tableLR[31][LLAVE_A][1]=19;

	tableLR[32][ID][0]=Des;
	tableLR[32][ID][1]=36;

	tableLR[33][LLAVE_A][0]=Des;
	tableLR[33][LLAVE_A][1]=37;

	tableLR[34][ID][0]=Des;
	tableLR[34][ID][1]=38;

	tableLR[35][ID][0]=Des;
	tableLR[35][ID][1]=39;

	tableLR[36][PAR_C][0]=Red;
	tableLR[36][PAR_C][1]=15;

	tableLR[37][ID][0]=Des;
	tableLR[37][ID][1]=46;
	tableLR[37][THIS][0]=Des;
	tableLR[37][THIS][1]=47;
	tableLR[37][NEW][0]=Des;
	tableLR[37][NEW][1]=43;
	tableLR[37][LET][0]=Des;
	tableLR[37][LET][1]=41;
	tableLR[37][SEQ][0]=Des;
	tableLR[37][SEQ][1]=44;
	tableLR[37][COBEGIN][0]=Des;
	tableLR[37][COBEGIN][1]=45;

	tableLR[38][COMA][0]=Des;
	tableLR[38][COMA][1]=49;
	tableLR[38][LLAVE_A][0]=Red;
	tableLR[38][LLAVE_A][1]=5;

	tableLR[39][LLAVE_A][0]=Red;
	tableLR[39][LLAVE_A][1]=5;

	tableLR[40][ID][0]=Des;
	tableLR[40][ID][1]=46;
	tableLR[40][THIS][0]=Des;
	tableLR[40][THIS][1]=47;
	tableLR[40][NEW][0]=Des;
	tableLR[40][NEW][1]=43;
	tableLR[40][LET][0]=Des;
	tableLR[40][LET][1]=41;
	tableLR[40][SEQ][0]=Des;
	tableLR[40][SEQ][1]=44;
	tableLR[40][COBEGIN][0]=Des;
	tableLR[40][COBEGIN][1]=45;
	tableLR[40][LLAVE_C][0]=Red;
	tableLR[40][LLAVE_C][1]=31;

	tableLR[41][ID][0]=Des;
	tableLR[41][ID][1]=53;

	tableLR[42][PUNTOYCOMA][0]=Des;
	tableLR[42][PUNTOYCOMA][1]=56;
	tableLR[42][PUNTO][0]=Des;
	tableLR[42][PUNTO][1]=54;
	tableLR[42][COR_A][0]=Des;
	tableLR[42][COR_A][1]=55;

	tableLR[43][ID][0]=Des;
	tableLR[43][ID][1]=58;
	tableLR[43][DOUBLE][0]=Des;
	tableLR[43][DOUBLE][1]=59;
	tableLR[43][VOID][0]=Des;
	tableLR[43][VOID][1]=60;

	tableLR[44][PAR_A][0]=Des;
	tableLR[44][PAR_A][1]=61;

	tableLR[45][LLAVE_A][0]=Des;
	tableLR[45][LLAVE_A][1]=46;

	tableLR[46][PUNTOYCOMA][0]=Red;
	tableLR[46][PUNTOYCOMA][1]=32;
	tableLR[46][PUNTO][0]=Red;
	tableLR[46][PUNTO][1]=32;
	tableLR[46][COR_A][0]=Red;
	tableLR[46][COR_A][1]=32;

	tableLR[47][PUNTOYCOMA][0]=Red;
	tableLR[44][PUNTOYCOMA][1]=33;
	tableLR[47][PUNTO][0]=Red;
	tableLR[47][PUNTO][1]=33;
	tableLR[47][COR_A][0]=Red;
	tableLR[47][COR_A][1]=33;

	tableLR[48][LLAVE_A][0]=Red;
	tableLR[48][LLAVE_A][1]=17;

	tableLR[49][ID][0]=Des;
	tableLR[49][ID][1]=63;

	tableLR[50][LLAVE_A][0]=Red;
	tableLR[50][LLAVE_A][1]=18;

	tableLR[51][LLAVE_C][0]=Des;
	tableLR[51][LLAVE_C][1]=64;

	tableLR[52][ID][0]=Des;
	tableLR[52][ID][1]=46;
	tableLR[52][THIS][0]=Des;
	tableLR[52][THIS][1]=47;
	tableLR[52][NEW][0]=Des;
	tableLR[52][NEW][1]=43;
	tableLR[52][LET][0]=Des;
	tableLR[52][LET][1]=41;
	tableLR[52][SEQ][0]=Des;
	tableLR[52][SEQ][1]=44;
	tableLR[52][COBEGIN][0]=Des;
	tableLR[52][COBEGIN][1]=45;
	tableLR[52][LLAVE_C][0]=Red;
	tableLR[52][LLAVE_C][1]=31;

	tableLR[53][IGUAL][0]=Des;
	tableLR[53][IGUAL][1]=66;

	tableLR[54][ID][0]=Des;
	tableLR[54][ID][1]=67;

	tableLR[55][NUM][0]=Des;
	tableLR[55][NUM][1]=68;

	tableLR[56][ID][0]=Red;
	tableLR[56][ID][1]=27;
	tableLR[56][THIS][0]=Red;
	tableLR[56][THIS][1]=27;
	tableLR[56][NEW][0]=Red;
	tableLR[56][NEW][1]=27;
	tableLR[56][LET][0]=Red;
	tableLR[56][LET][1]=27;
	tableLR[56][SEQ][0]=Red;
	tableLR[56][SEQ][1]=27;
	tableLR[56][COBEGIN][0]=Red;
	tableLR[56][COBEGIN][1]=27;
	tableLR[56][LLAVE_C][0]=Red;
	tableLR[56][LLAVE_C][1]=27;

	tableLR[57][PUNTOYCOMA][0]=Des;
	tableLR[57][PUNTOYCOMA][1]=69;

	tableLR[58][PUNTOYCOMA][0]=Red;
	tableLR[58][PUNTOYCOMA][1]=10;

	tableLR[59][PUNTOYCOMA][0]=Red;
	tableLR[59][PUNTOYCOMA][1]=11;

	tableLR[60][PUNTOYCOMA][0]=Red;
	tableLR[60][PUNTOYCOMA][1]=12;

	tableLR[61][ID][0]=Des;
	tableLR[61][ID][1]=46;
	tableLR[61][THIS][0]=Des;
	tableLR[61][THIS][1]=47;
	tableLR[61][NEW][0]=Des;
	tableLR[61][NEW][1]=73;
	tableLR[61][LET][0]=Des;
	tableLR[61][LET][1]=71;
	tableLR[61][SEQ][0]=Des;
	tableLR[61][SEQ][1]=74;
	tableLR[61][COBEGIN][0]=Des;
	tableLR[61][COBEGIN][1]=75;
	
	tableLR[62][ID][0]=Des;
	tableLR[62][ID][1]=46;
	tableLR[62][THIS][0]=Des;
	tableLR[62][THIS][1]=47;
	tableLR[62][NEW][0]=Des;
	tableLR[62][NEW][1]=43;
	tableLR[62][LET][0]=Des;
	tableLR[62][LET][1]=41;
	tableLR[62][SEQ][0]=Des;
	tableLR[62][SEQ][1]=44;
	tableLR[62][COBEGIN][0]=Des;
	tableLR[62][COBEGIN][1]=45;
	
	tableLR[66][ID][0]=Des;
	tableLR[66][ID][1]=46;
	tableLR[66][THIS][0]=Des;
	tableLR[52][THIS][1]=47;
	tableLR[52][NEW][0]=Des;
	tableLR[52][NEW][1]=43;
	tableLR[52][LET][0]=Des;
	tableLR[52][LET][1]=41;
	tableLR[52][SEQ][0]=Des;
	tableLR[52][SEQ][1]=44;
	tableLR[52][COBEGIN][0]=Des;
	tableLR[52][COBEGIN][1]=45;
	tableLR[52][LLAVE_C][0]=Red;
	tableLR[52][LLAVE_C][1]=31;






	//terminando hasta fila 108
	
	tableLR[0][C_T][0]=Des;  // 0 -> C_T= D3
	tableLR[0][C_T][1]=3;
	
	tableLR[0][D_T][0]=Des;	 // 0 -> D_T= D4
	tableLR[0][D_T][1]=4;

	tableLR[0][P][0]=1;
	tableLR[0][C_N][0]=2;
	
	tableLR[1][DOLARFIN][0]=ACCEPT;

	tableLR[0][C_T][0]=Des;
	tableLR[0][C_T][1]=3;
	tableLR[0][D_T][0]=Des;
	tableLR[0][D_T][1]=4;
	tableLR[0][P][0]=1;
	tableLR[0][C_N][0]=2;

	tableLR[2][C_T][0]=Des;
	tableLR[2][C_T][1]=6;
	tableLR[2][D_T][0]=Des;
	tableLR[2][D_T][1]=7;
	tableLR[2][C_N][0]=5;
	
	tableLR[109][PUNTOYCOMA][0]=Des;
	tableLR[109][PUNTOYCOMA][1]=138;

	tableLR[3][D_T][0]=Des;
	tableLR[3][D_T][1]=4;
	tableLR[3][C_N][0]=8;
	
	tableLR[4][C_T][0]=Red;
	tableLR[4][C_T][1]=3;
	tableLR[4][D_T][0]=Red;
	tableLR[4][D_T][1]=3;
	//tableLR[2][C_N][0]=8;
	
	tableLR[5][DOLARFIN][0]=Red;
	tableLR[5][DOLARFIN][1]=1;
	//tableLR[2][D_T][0]=D;
	//tableLR[2][D_T][1]=4;
	//tableLR[2][C_N][0]=8;
	
	tableLR[6][C_T][0]=Des;
	tableLR[6][C_T][1]=6;
	tableLR[6][D_T][0]=Des;
	tableLR[6][D_T][1]=7;
	tableLR[6][C_N][0]=9;
	
	tableLR[7][DOLARFIN][0]=Red;
	tableLR[7][DOLARFIN][1]=3;
	
	tableLR[8][C_T][0]=Red;
	tableLR[8][C_T][1]=2;
	tableLR[8][D_T][0]=Red;
	tableLR[8][D_T][1]=2;
	
	tableLR[9][DOLARFIN][0]=Red;
	tableLR[9][DOLARFIN][1]=2; 
	
}



void Parser::llenarTabla(){

	for(int i=0;i<70;i++)
		for(int j=0;j<70;j++)
			for(int k=0;k<9;k++)
				table[i][j][k]=ERROR_SYNTAX;

/**  Se llena la tabla con las producciones, segun la gramatica*/
/*PRIMERA FILA */
/**   P->DEC_LIST*/


	table[P-71][PROCEDURE][0]=DEC_LIST;
	table[P-71][PROCEDURE][1]=-1;
	table[P-71][PROCEDURE][2]=-1;
	table[P-71][PROCEDURE][3]=-1;
	table[P-71][PROCEDURE][4]=-1;
	table[P-71][PROCEDURE][5]=-1;
	table[P-71][PROCEDURE][6]=-1;
	table[P-71][PROCEDURE][7]=-1;
	table[P-71][PROCEDURE][8]=-1;

  	table[P-71][INTEGER][0]=DEC_LIST;
  	table[P-71][INTEGER][1]=-1;
  	table[P-71][INTEGER][2]=-1;
  	table[P-71][INTEGER][3]=-1;
  	table[P-71][INTEGER][4]=-1;
  	table[P-71][INTEGER][5]=-1;
  	table[P-71][INTEGER][6]=-1;
  	table[P-71][INTEGER][7]=-1;
  	table[P-71][INTEGER][8]=-1;
	//table[P-71][INTEGER][1]=-1;
	//table[P-71][SHOW][2]=P;
	//table[P-71][INTEGER][2]=-1;
	//table[P-71][INTEGER][3]=-1;

	table[P-71][STRING][0]=DEC_LIST;
	table[P-71][STRING][1]=-1;
	table[P-71][STRING][2]=-1;
	table[P-71][STRING][3]=-1;
	table[P-71][STRING][4]=-1;
	table[P-71][STRING][5]=-1;
	table[P-71][STRING][6]=-1;
	table[P-71][STRING][7]=-1;
	table[P-71][STRING][8]=-1;

  	table[P-71][REAL][0]=DEC_LIST;
	//table[P-71][REAL][1]=-1;
	//table[P-71][DROP][2]=P;
	//table[P-71][REAL][2]=-1;
	//table[P-71][REAL][3]=-1;

    table[P-71][COMPLEJO][0]=DEC_LIST;
	//table[P-71][COMPLEJO][1]=-1;
	//table[P-71][USE][2]=P;
	//table[P-71][COMPLEJO][2]=-1;
	//table[P-71][COMPLEJO][3]=-1;

    table[P-71][OPERATOR][0]=DEC_LIST;
	//table[P-71][OPERATOR][1]=-1;
	//table[P-71][OPERATOR][2]=P;
	//table[P-71][OPERATOR][2]=-1;
	//table[P-71][OPERATOR][3]=-1;

	 table[P-71][QUFUNCT][0]=DEC_LIST;
	//table[P-71][QUFUNCT][1]=-1;
	//table[P-71][QUFUNCT][2]=P;
	//table[P-71][QUFUNCT][2]=-1;
	//table[P-71][QUFUNCT][3]=-1;

	 table[P-71][EXTERN][0]=DEC_LIST;
	//table[P-71][EXTERN][1]=-1;
	//table[P-71][EXTERN][2]=P;
	//table[P-71][EXTERN][2]=-1;
	//table[P-71][EXTERN][3]=-1;

	 table[P-71][QUREG][0]=DEC_LIST;
	//table[P-71][QUREG][1]=-1;
	//table[P-71][QUREG][2]=P;
	//table[P-71][QUREG][2]=-1;
	//table[P-71][QUREG][3]=-1;

    table[P-71][QUVOID][0]=DEC_LIST;
	//table[P-71][QUVOID][1]=-1;
	//table[P-71][QUVOID][2]=P;
	//table[P-71][QUVOID][2]=-1;
	//table[P-71][QUVOID][3]=-1;

	table[P-71][QUCONST][0]=DEC_LIST;
	//table[P-71][QUCONST][1]=-1;
	//table[P-71][QUCONST][2]=P;
	//table[P-71][QUCONST][2]=-1;
	//table[P-71][QUCONST][3]=-1;

	table[P-71][QUSCRATCH][0]=DEC_LIST;
	//table[P-71][QUSCRATCH][1]=-1;
	//table[P-71][QUSCRATCH][2]=P;
	//table[P-71][QUSCRATCH][2]=-1;
	//table[P-71][QUSCRATCH][3]=-1;

	table[P-71][QUCOND][0]=DEC_LIST;
	//table[P-71][QUCOND][1]=-1;
	//table[P-71][QUCOND][2]=P;
	//table[P-71][QUCOND][2]=-1;
	//table[P-71][QUCOND][3]=-1;

/* SEGUNDA FILA*/


/*
   table[P-71][INSERT][0]=DML;
	table[P-71][INSERT][1]=PUNTOYCOMA;
	//table[P-71][INSERT][2]=P;
	table[P-71][INSERT][2]=-1;
	table[P-71][INSERT][3]=-1;

   table[P-71][DOLARFIN][0]=-1;
	table[P-71][DOLARFIN][1]=-1;
	table[P-71][DOLARFIN][2]=-1;
	table[P-71][DOLARFIN][3]=-1;
*/

	table[DEC_LIST-71][PROCEDURE][0]=DEC;
	table[DEC_LIST-71][PROCEDURE][1]=DEC_LIST2;
	table[DEC_LIST-71][PROCEDURE][2]=-1;
	table[DEC_LIST-71][PROCEDURE][3]=-1;
	table[DEC_LIST-71][PROCEDURE][4]=-1;
	table[DEC_LIST-71][PROCEDURE][5]=-1;
	table[DEC_LIST-71][PROCEDURE][6]=-1;
	table[DEC_LIST-71][PROCEDURE][7]=-1;
	table[DEC_LIST-71][PROCEDURE][8]=-1;
	//table[DEC_LIST-71][PROCEDURE][2]=P;
	//table[DEC_LIST-71][PROCEDURE][2]=-1;
	//table[DEC_LIST-71][PROCEDURE][3]=-1;

  	table[DEC_LIST-71][INTEGER][0]=DEC;
	table[DEC_LIST-71][INTEGER][1]=DEC_LIST2;
	table[DEC_LIST-71][INTEGER][2]=-1;
	table[DEC_LIST-71][INTEGER][3]=-1;
	table[DEC_LIST-71][INTEGER][4]=-1;
	table[DEC_LIST-71][INTEGER][5]=-1;
	table[DEC_LIST-71][INTEGER][6]=-1;
	table[DEC_LIST-71][INTEGER][7]=-1;
	table[DEC_LIST-71][INTEGER][8]=-1;
	//table[DEC_LIST-71][INTEGER][2]=-1;
	//table[DEC_LIST-71][SHOW][2]=P;
	//table[DEC_LIST-71][INTEGER][2]=-1;
	//table[DEC_LIST-71][INTEGER][3]=-1;

	table[DEC_LIST-71][STRING][0]=DEC;
	table[DEC_LIST-71][STRING][1]=DEC_LIST2;
	//table[DEC_LIST-71][STRING][2]=P;
	//table[DEC_LIST-71][STRING][2]=-1;
	//table[DEC_LIST-71][STRING][3]=-1;

  	table[DEC_LIST-71][REAL][0]=DEC;
	table[DEC_LIST-71][REAL][1]=DEC_LIST2;
	//table[DEC_LIST-71][DROP][2]=P;
	table[DEC_LIST-71][REAL][2]=-1;
	table[DEC_LIST-71][REAL][3]=-1;

    table[DEC_LIST-71][COMPLEJO][0]=DEC;
	table[DEC_LIST-71][COMPLEJO][1]=DEC_LIST2;
	//table[DEC_LIST-71][USE][2]=P;
	table[DEC_LIST-71][COMPLEJO][2]=-1;
	table[DEC_LIST-71][COMPLEJO][3]=-1;

    table[DEC_LIST-71][OPERATOR][0]=DEC;
	table[DEC_LIST-71][OPERATOR][1]=DEC_LIST2;
	//table[DEC_LIST-71][OPERATOR][2]=P;
	table[DEC_LIST-71][OPERATOR][2]=-1;
	table[DEC_LIST-71][OPERATOR][3]=-1;

	 table[DEC_LIST-71][QUFUNCT][0]=DEC;
	table[DEC_LIST-71][QUFUNCT][1]=DEC_LIST2;
	//table[DEC_LIST-71][QUFUNCT][2]=P;
	table[DEC_LIST-71][QUFUNCT][2]=-1;
	table[DEC_LIST-71][QUFUNCT][3]=-1;

	 table[DEC_LIST-71][EXTERN][0]=DEC;
	table[DEC_LIST-71][EXTERN][1]=DEC_LIST2;
	//table[DEC_LIST-71][EXTERN][2]=P;
	table[DEC_LIST-71][EXTERN][2]=-1;
	table[DEC_LIST-71][EXTERN][3]=-1;

	 table[DEC_LIST-71][QUREG][0]=DEC;
	table[DEC_LIST-71][QUREG][1]=DEC_LIST2;
	//table[DEC_LIST-71][QUREG][2]=P;
	table[DEC_LIST-71][QUREG][2]=-1;
	table[DEC_LIST-71][QUREG][3]=-1;

    table[DEC_LIST-71][QUVOID][0]=DEC;
	table[DEC_LIST-71][QUVOID][1]=DEC_LIST2;
	//table[DEC_LIST-71][QUVOID][2]=P;
	table[DEC_LIST-71][QUVOID][2]=-1;
	table[DEC_LIST-71][QUVOID][3]=-1;

	table[DEC_LIST-71][QUCONST][0]=DEC;
	table[DEC_LIST-71][QUCONST][1]=DEC_LIST2;
	//table[DEC_LIST-71][QUCONST][2]=P;
	table[DEC_LIST-71][QUCONST][2]=-1;
	table[DEC_LIST-71][QUCONST][3]=-1;

	table[DEC_LIST-71][QUSCRATCH][0]=DEC;
	table[DEC_LIST-71][QUSCRATCH][1]=DEC_LIST2;
	//table[DEC_LIST-71][QUSCRATCH][2]=P;
	table[DEC_LIST-71][QUSCRATCH][2]=-1;
	table[DEC_LIST-71][QUSCRATCH][3]=-1;

	table[DEC_LIST-71][QUCOND][0]=DEC;
	table[DEC_LIST-71][QUCOND][1]=DEC_LIST2;
	//table[DEC_LIST-71][QUCOND][2]=P;
	table[DEC_LIST-71][QUCOND][2]=-1;
	table[DEC_LIST-71][QUCOND][3]=-1;


/*TERCERFA FILA.....*/



  	table[DEC-71][INTEGER][0]=VAR_DEC;
	table[DEC-71][INTEGER][1]=-1;
	table[DEC-71][INTEGER][2]=-1;
	table[DEC-71][INTEGER][3]=-1;
	table[DEC-71][INTEGER][4]=-1;
	table[DEC-71][INTEGER][5]=-1;
	table[DEC-71][INTEGER][6]=-1;
	table[DEC-71][INTEGER][7]=-1;
	table[DEC-71][INTEGER][8]=-1;


  	table[DEC-71][REAL][0]=VAR_DEC;
	table[DEC-71][REAL][1]=-1;
	table[DEC-71][REAL][2]=-1;
	table[DEC-71][REAL][3]=-1;

  	table[DEC-71][BOOLEAN][0]=VAR_DEC;
	table[DEC-71][BOOLEAN][1]=-1;
	table[DEC-71][BOOLEAN][2]=-1;
	table[DEC-71][BOOLEAN][3]=-1;

	table[DEC-71][COMPLEJO][0]=VAR_DEC;
	table[DEC-71][COMPLEJO][1]=-1;
	table[DEC-71][COMPLEJO][2]=-1;
	table[DEC-71][COMPLEJO][3]=-1;

  	table[DEC-71][STRING][0]=VAR_DEC;
	table[DEC-71][STRING][1]=-1;
	table[DEC-71][STRING][2]=-1;
	table[DEC-71][STRING][3]=-1;

  	table[DEC-71][PROCEDURE][0]=FUN_DEF;
	table[DEC-71][PROCEDURE][1]=-1;
	table[DEC-71][PROCEDURE][2]=-1;
	table[DEC-71][PROCEDURE][3]=-1;
	table[DEC-71][PROCEDURE][4]=-1;
	table[DEC-71][PROCEDURE][5]=-1;
	table[DEC-71][PROCEDURE][6]=-1;
	table[DEC-71][PROCEDURE][7]=-1;
	table[DEC-71][PROCEDURE][8]=-1;
	//table[DEC-71][PROCEDURE][3]=-1;


	table[DEC-71][OPERATOR][0]=FUN_DEF;
	table[DEC-71][OPERATOR][1]=-1;
	//table[DEC-71][OPERATOR][2]=P;
	table[DEC-71][OPERATOR][2]=-1;
	table[DEC-71][OPERATOR][3]=-1;

	 table[DEC-71][QUFUNCT][0]=FUN_DEF;
	table[DEC-71][QUFUNCT][1]=-1;
	//table[DEC-71][QUFUNCT][2]=P;
	table[DEC-71][QUFUNCT][2]=-1;
	table[DEC-71][QUFUNCT][3]=-1;

	 table[DEC-71][EXTERN][0]=FUN_DEF;
	table[DEC-71][EXTERN][1]=-1;
	//table[DEC-71][EXTERN][2]=P;
	table[DEC-71][EXTERN][2]=-1;
	table[DEC-71][EXTERN][3]=-1;

	 table[DEC-71][QUREG][0]=VAR_DEC;
	table[DEC-71][QUREG][1]=-1;
	//table[DEC-71][QUREG][2]=P;
	table[DEC-71][QUREG][2]=-1;
	table[DEC-71][QUREG][3]=-1;

    table[DEC-71][QUVOID][0]=VAR_DEC;
	table[DEC-71][QUVOID][1]=-1;
	//table[DEC-71][QUVOID][2]=P;
	table[DEC-71][QUVOID][2]=-1;
	table[DEC-71][QUVOID][3]=-1;

	table[DEC-71][QUCONST][0]=VAR_DEC;
	table[DEC-71][QUCONST][1]=-1;
	//table[DEC-71][QUCONST][2]=P;
	table[DEC-71][QUCONST][2]=-1;
	table[DEC-71][QUCONST][3]=-1;

	table[DEC-71][QUSCRATCH][0]=VAR_DEC;
	table[DEC-71][QUSCRATCH][1]=-1;
	//table[DEC-71][QUSCRATCH][2]=P;
	table[DEC-71][QUSCRATCH][2]=-1;
	table[DEC-71][QUSCRATCH][3]=-1;

	table[DEC-71][QUCOND][0]=VAR_DEC;
	table[DEC-71][QUCOND][1]=-1;
	//table[DEC-71][QUCOND][2]=P;
	table[DEC-71][QUCOND][2]=-1;
	table[DEC-71][QUCOND][3]=-1;

	/*CUARTA FILA*/




	table[ID_NT-71][ID][0]=ID;
	table[ID_NT-71][ID][1]=-1;
	//table[ID_NT-71][ID][2]=P;
	table[ID_NT-71][ID][2]=-1;
	table[ID_NT-71][ID][3]=-1;
	table[ID_NT-71][ID][4]=-1;
	table[ID_NT-71][ID][5]=-1;
	table[ID_NT-71][ID][6]=-1;
	table[ID_NT-71][ID][7]=-1;
	table[ID_NT-71][ID][8]=-1;

	/*QUINTA FILA*/





	table[VAR_DEC-71][INTEGER][0]=TYPE_SPEC;
	table[VAR_DEC-71][INTEGER][1]=ID_LIST;
	table[VAR_DEC-71][INTEGER][2]=PUNTOYCOMA;
	table[VAR_DEC-71][INTEGER][3]=-1;
	table[VAR_DEC-71][INTEGER][4]=-1;
    table[VAR_DEC-71][INTEGER][5]=-1;
    table[VAR_DEC-71][INTEGER][6]=-1;
    table[VAR_DEC-71][INTEGER][7]=-1;
    table[VAR_DEC-71][INTEGER][8]=-1;


	table[VAR_DEC-71][REAL][0]=TYPE_SPEC;
	table[VAR_DEC-71][REAL][1]=ID_LIST;
	table[VAR_DEC-71][REAL][2]=PUNTOYCOMA;
	table[VAR_DEC-71][REAL][3]=-1;

	table[VAR_DEC-71][COMPLEJO][0]=TYPE_SPEC;
	table[VAR_DEC-71][COMPLEJO][1]=ID_LIST;
	table[VAR_DEC-71][COMPLEJO][2]=PUNTOYCOMA;
	table[VAR_DEC-71][COMPLEJO][3]=-1;

	table[VAR_DEC-71][STRING][0]=TYPE_SPEC;
	table[VAR_DEC-71][STRING][1]=ID_LIST;
	table[VAR_DEC-71][STRING][2]=PUNTOYCOMA;
	table[VAR_DEC-71][STRING][3]=-1;

	table[VAR_DEC-71][BOOLEAN][0]=TYPE_SPEC;
	table[VAR_DEC-71][BOOLEAN][1]=ID_LIST;
	table[VAR_DEC-71][BOOLEAN][2]=PUNTOYCOMA;
	table[VAR_DEC-71][BOOLEAN][3]=-1;

	table[VAR_DEC-71][QUREG][0]=TYPE_SPEC;
	table[VAR_DEC-71][QUREG][1]=ID_LIST;
	//table[VAR_DEC-71][QUREG][2]=P;
	table[VAR_DEC-71][QUREG][2]=PUNTOYCOMA;
	table[VAR_DEC-71][QUREG][3]=-1;

    table[VAR_DEC-71][QUVOID][0]=TYPE_SPEC;
	table[VAR_DEC-71][QUVOID][1]=ID_LIST;
	//table[VAR_DEC-71][QUVOID][2]=P;
	table[VAR_DEC-71][QUVOID][2]=PUNTOYCOMA;
	table[VAR_DEC-71][QUVOID][3]=-1;

	table[VAR_DEC-71][QUCONST][0]=TYPE_SPEC;
	table[VAR_DEC-71][QUCONST][1]=ID_LIST;
	//table[VAR_DEC-71][QUCONST][2]=P;
	table[VAR_DEC-71][QUCONST][2]=PUNTOYCOMA;
	table[VAR_DEC-71][QUCONST][3]=-1;

	table[VAR_DEC-71][QUSCRATCH][0]=TYPE_SPEC;
	table[VAR_DEC-71][QUSCRATCH][1]=ID_LIST;
	//table[VAR_DEC-71][QUSCRATCH][2]=P;
	table[VAR_DEC-71][QUSCRATCH][2]=PUNTOYCOMA;
	table[VAR_DEC-71][QUSCRATCH][3]=-1;

	table[VAR_DEC-71][QUCOND][0]=TYPE_SPEC;
	table[VAR_DEC-71][QUCOND][1]=ID_LIST;
	//table[VAR_DEC-71][QUCOND][2]=P;
	table[VAR_DEC-71][QUCOND][2]=PUNTOYCOMA;
	table[VAR_DEC-71][QUCOND][3]=-1;



/*SEXTA FILA*/



  	table[ID_LIST-71][ID][0]=VAR;
	table[ID_LIST-71][ID][1]=ID_LIST2;
	table[ID_LIST-71][ID][2]=-1;
	table[ID_LIST-71][ID][3]=-1;
	table[ID_LIST-71][ID][4]=-1;
    table[ID_LIST-71][ID][5]=-1;
    table[ID_LIST-71][ID][6]=-1;
    table[ID_LIST-71][ID][7]=-1;
    table[ID_LIST-71][ID][8]=-1;


/*SEPTIMA FILA*/

  	table[TYPE_SPEC-71][INTEGER][0]=SCALARTYPE;
	table[TYPE_SPEC-71][INTEGER][1]=-1;
	table[TYPE_SPEC-71][INTEGER][2]=-1;
	table[TYPE_SPEC-71][INTEGER][3]=-1;
	table[TYPE_SPEC-71][INTEGER][4]=-1;
    table[TYPE_SPEC-71][INTEGER][5]=-1;
    table[TYPE_SPEC-71][INTEGER][6]=-1;
    table[TYPE_SPEC-71][INTEGER][7]=-1;
    table[TYPE_SPEC-71][INTEGER][8]=-1;

	table[TYPE_SPEC-71][COMPLEJO][0]=SCALARTYPE;
	table[TYPE_SPEC-71][COMPLEJO][1]=-1;
	table[TYPE_SPEC-71][COMPLEJO][2]=-1;
	table[TYPE_SPEC-71][COMPLEJO][3]=-1;

	table[TYPE_SPEC-71][REAL][0]=SCALARTYPE;
	table[TYPE_SPEC-71][REAL][1]=-1;
	table[TYPE_SPEC-71][REAL][2]=-1;
	table[TYPE_SPEC-71][REAL][3]=-1;

	table[TYPE_SPEC-71][STRING][0]=OTHERTYPE;
	table[TYPE_SPEC-71][STRING][1]=-1;
	table[TYPE_SPEC-71][STRING][2]=-1;
	table[TYPE_SPEC-71][STRING][3]=-1;

	table[TYPE_SPEC-71][BOOLEAN][0]=OTHERTYPE;
	table[TYPE_SPEC-71][BOOLEAN][1]=-1;
	table[TYPE_SPEC-71][BOOLEAN][2]=-1;
	table[TYPE_SPEC-71][BOOLEAN][3]=-1;

	table[TYPE_SPEC-71][QUREG][0]=QUANTUMTYPE;
	table[TYPE_SPEC-71][QUREG][1]=-1;
	//table[TYPE_SPEC-71][QUREG][2]=P;
	table[TYPE_SPEC-71][QUREG][2]=-1;
	table[TYPE_SPEC-71][QUREG][3]=-1;

    table[TYPE_SPEC-71][QUVOID][0]=QUANTUMTYPE;
	table[TYPE_SPEC-71][QUVOID][1]=-1;
	//table[TYPE_SPEC-71][QUVOID][2]=P;
	table[TYPE_SPEC-71][QUVOID][2]=-1;
	table[TYPE_SPEC-71][QUVOID][3]=-1;

	table[TYPE_SPEC-71][QUCONST][0]=QUANTUMTYPE;
	table[TYPE_SPEC-71][QUCONST][1]=-1;
	//table[TYPE_SPEC-71][QUCONST][2]=P;
	table[TYPE_SPEC-71][QUCONST][2]=-1;
	table[TYPE_SPEC-71][QUCONST][3]=-1;

	table[TYPE_SPEC-71][QUSCRATCH][0]=QUANTUMTYPE;
	table[TYPE_SPEC-71][QUSCRATCH][1]=-1;
	//table[TYPE_SPEC-71][QUSCRATCH][2]=P;
	table[TYPE_SPEC-71][QUSCRATCH][2]=-1;
	table[TYPE_SPEC-71][QUSCRATCH][3]=-1;

	table[TYPE_SPEC-71][QUCOND][0]=OTHERTYPE;
	table[TYPE_SPEC-71][QUCOND][1]=-1;
	//table[TYPE_SPEC-71][QUCOND][2]=P;
	table[TYPE_SPEC-71][QUCOND][2]=-1;
	table[TYPE_SPEC-71][QUCOND][3]=-1;





/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


    table[SCALARTYPE-71][INTEGER][0]=INTEGER;
	table[SCALARTYPE-71][INTEGER][1]=-1;
	table[SCALARTYPE-71][INTEGER][2]=-1;
	table[SCALARTYPE-71][INTEGER][3]=-1;
	table[SCALARTYPE-71][INTEGER][4]=-1;
    table[SCALARTYPE-71][INTEGER][5]=-1;
    table[SCALARTYPE-71][INTEGER][6]=-1;
    table[SCALARTYPE-71][INTEGER][7]=-1;
    table[SCALARTYPE-71][INTEGER][8]=-1;



	table[SCALARTYPE-71][COMPLEJO][0]=COMPLEJO;
	table[SCALARTYPE-71][COMPLEJO][1]=-1;
	table[SCALARTYPE-71][COMPLEJO][2]=-1;
	table[SCALARTYPE-71][COMPLEJO][3]=-1;

	table[SCALARTYPE-71][REAL][0]=REAL;
	table[SCALARTYPE-71][REAL][1]=-1;
	table[SCALARTYPE-71][REAL][2]=-1;
	table[SCALARTYPE-71][REAL][3]=-1;

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

    table[QUANTUMTYPE-71][QUREG][0]=QUREG;
	table[QUANTUMTYPE-71][QUREG][1]=-1;
	//table[QUANTUMTYPE-71][QUREG][2]=P;
	table[QUANTUMTYPE-71][QUREG][2]=-1;
	table[QUANTUMTYPE-71][QUREG][3]=-1;

    table[QUANTUMTYPE-71][QUVOID][0]=QUVOID;
	table[QUANTUMTYPE-71][QUVOID][1]=-1;
	//table[QUANTUMTYPE-71][QUVOID][2]=P;
	table[QUANTUMTYPE-71][QUVOID][2]=-1;
	table[QUANTUMTYPE-71][QUVOID][3]=-1;

	table[QUANTUMTYPE-71][QUCONST][0]=QUCONST;
	table[QUANTUMTYPE-71][QUCONST][1]=-1;
	//table[QUANTUMTYPE-71][QUCONST][2]=P;
	table[QUANTUMTYPE-71][QUCONST][2]=-1;
	table[QUANTUMTYPE-71][QUCONST][3]=-1;

	table[QUANTUMTYPE-71][QUSCRATCH][0]=QUSCRATCH;
	table[QUANTUMTYPE-71][QUSCRATCH][1]=-1;
	//table[QUANTUMTYPE-71][QUSCRATCH][2]=P;
	table[QUANTUMTYPE-71][QUSCRATCH][2]=-1;
	table[QUANTUMTYPE-71][QUSCRATCH][3]=-1;

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[OTHERTYPE-71][STRING][0]=STRING;
	table[OTHERTYPE-71][STRING][1]=-1;
	table[OTHERTYPE-71][STRING][2]=-1;
	table[OTHERTYPE-71][STRING][3]=-1;
	table[OTHERTYPE-71][STRING][4]=-1;
	table[OTHERTYPE-71][STRING][5]=-1;
	table[OTHERTYPE-71][STRING][6]=-1;
	table[OTHERTYPE-71][STRING][7]=-1;
	table[OTHERTYPE-71][STRING][8]=-1;
	//table[OTHERTYPE-71][STRING][3]=-1;

	table[OTHERTYPE-71][BOOLEAN][0]=BOOLEAN;
	table[OTHERTYPE-71][BOOLEAN][1]=-1;
	table[OTHERTYPE-71][BOOLEAN][2]=-1;
	table[OTHERTYPE-71][BOOLEAN][3]=-1;



table[OTHERTYPE-71][QUCOND][0]=QUCOND;
	table[OTHERTYPE-71][QUCOND][1]=-1;
	//table[OTHERTYPE-71][QUCOND][2]=P;
	table[OTHERTYPE-71][QUCOND][2]=-1;
	table[OTHERTYPE-71][QUCOND][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[FUN_DEF-71][PROCEDURE][0]=PROCEDURE;
	table[FUN_DEF-71][PROCEDURE][1]=ID_NT;
	table[FUN_DEF-71][PROCEDURE][2]=PAR_A;
	table[FUN_DEF-71][PROCEDURE][3]=PARAMS;
	table[FUN_DEF-71][PROCEDURE][4]=PAR_C;
	table[FUN_DEF-71][PROCEDURE][5]=COMP_STMT;
	table[FUN_DEF-71][PROCEDURE][6]=-1;
	table[FUN_DEF-71][PROCEDURE][7]=-1;
	table[FUN_DEF-71][PROCEDURE][8]=-1;


	table[FUN_DEF-71][OPERATOR][0]=OPERATOR;
	table[FUN_DEF-71][OPERATOR][1]=ID_NT;
	//table[FUN_DEF-71][OPERATOR][2]=P;
	table[FUN_DEF-71][OPERATOR][2]=PAR_A;
	table[FUN_DEF-71][OPERATOR][3]=PARAMS;
    table[FUN_DEF-71][OPERATOR][4]=PAR_C;
    table[FUN_DEF-71][OPERATOR][5]=COMP_STMT;

	 table[FUN_DEF-71][QUFUNCT][0]=QUFUNCT;
	table[FUN_DEF-71][QUFUNCT][1]=ID_NT;
	//table[FUN_DEF-71][QUFUNCCT][2]=P;
	table[FUN_DEF-71][QUFUNCT][2]=PAR_A;
	table[FUN_DEF-71][QUFUNCT][3]=PARAMS;
    table[FUN_DEF-71][QUFUNCT][4]=PAR_C;
    table[FUN_DEF-71][QUFUNCT][5]=COMP_STMT;

	 table[FUN_DEF-71][EXTERN][0]=EXTERN;
	table[FUN_DEF-71][EXTERN][1]=FUN_DEF2;
	//table[FUN_DEF-71][EXTERN][2]=P;
	table[FUN_DEF-71][EXTERN][2]=-1;
	table[FUN_DEF-71][EXTERN][3]=-1;



/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



    table[PARAMS-71][INTEGER][0]=PARAM_LIST;
	table[PARAMS-71][INTEGER][1]=-1;
	table[PARAMS-71][INTEGER][2]=-1;
	table[PARAMS-71][INTEGER][3]=-1;
	table[PARAMS-71][INTEGER][4]=-1;
	table[PARAMS-71][INTEGER][5]=-1;
	table[PARAMS-71][INTEGER][6]=-1;
	table[PARAMS-71][INTEGER][7]=-1;
	table[PARAMS-71][INTEGER][8]=-1;


	table[PARAMS-71][COMPLEJO][0]=PARAM_LIST;
	table[PARAMS-71][COMPLEJO][1]=-1;
	table[PARAMS-71][COMPLEJO][2]=-1;
	table[PARAMS-71][COMPLEJO][3]=-1;

	table[PARAMS-71][REAL][0]=PARAM_LIST;
	table[PARAMS-71][REAL][1]=-1;
	table[PARAMS-71][REAL][2]=-1;
	table[PARAMS-71][REAL][3]=-1;

	table[PARAMS-71][STRING][0]=PARAM_LIST;
	table[PARAMS-71][STRING][1]=-1;
	table[PARAMS-71][STRING][2]=-1;
	table[PARAMS-71][STRING][3]=-1;

	table[PARAMS-71][BOOLEAN][0]=PARAM_LIST;
	table[PARAMS-71][BOOLEAN][1]=-1;
	table[PARAMS-71][BOOLEAN][2]=-1;
	table[PARAMS-71][BOOLEAN][3]=-1;

	table[PARAMS-71][QUREG][0]=PARAM_LIST;
	table[PARAMS-71][QUREG][1]=-1;
	//table[PARAMS-71][QUREG][2]=P;
	table[PARAMS-71][QUREG][2]=-1;
	table[PARAMS-71][QUREG][3]=-1;

    table[PARAMS-71][QUVOID][0]=PARAM_LIST;
	table[PARAMS-71][QUVOID][1]=-1;
	//table[PARAMS-71][QUVOID][2]=P;
	table[PARAMS-71][QUVOID][2]=-1;
	table[PARAMS-71][QUVOID][3]=-1;

	table[PARAMS-71][QUCONST][0]=PARAM_LIST;
	table[PARAMS-71][QUCONST][1]=-1;
	//table[PARAMS-71][QUCONST][2]=P;
	table[PARAMS-71][QUCONST][2]=-1;
	table[PARAMS-71][QUCONST][3]=-1;

	table[PARAMS-71][QUSCRATCH][0]=PARAM_LIST;
	table[PARAMS-71][QUSCRATCH][1]=-1;
	//table[PARAMS-71][QUSCRATCH][2]=P;
	table[PARAMS-71][QUSCRATCH][2]=-1;
	table[PARAMS-71][QUSCRATCH][3]=-1;

	table[PARAMS-71][QUCOND][0]=PARAM_LIST;
	table[PARAMS-71][QUCOND][1]=-1;
	//table[PARAMS-71][QUCOND][2]=P;
	table[PARAMS-71][QUCOND][2]=-1;
	table[PARAMS-71][QUCOND][3]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[PARAM_LIST-71][INTEGER][0]=PARAM;
	table[PARAM_LIST-71][INTEGER][1]=PARAM_LIST2;
	table[PARAM_LIST-71][INTEGER][2]=-1;
	table[PARAM_LIST-71][INTEGER][3]=-1;
	table[PARAM_LIST-71][INTEGER][4]=-1;
	table[PARAM_LIST-71][INTEGER][5]=-1;
	table[PARAM_LIST-71][INTEGER][6]=-1;
	table[PARAM_LIST-71][INTEGER][7]=-1;
	table[PARAM_LIST-71][INTEGER][8]=-1;


	table[PARAM_LIST-71][COMPLEJO][0]=PARAM;
	table[PARAM_LIST-71][COMPLEJO][1]=PARAM_LIST2;
	table[PARAM_LIST-71][COMPLEJO][2]=-1;
	table[PARAM_LIST-71][COMPLEJO][3]=-1;

	table[PARAM_LIST-71][REAL][0]=PARAM;
	table[PARAM_LIST-71][REAL][1]=PARAM_LIST2;
	table[PARAM_LIST-71][REAL][2]=-1;
	table[PARAM_LIST-71][REAL][3]=-1;

	table[PARAM_LIST-71][STRING][0]=PARAM;
	table[PARAM_LIST-71][STRING][1]=PARAM_LIST2;
	table[PARAM_LIST-71][STRING][2]=-1;
	table[PARAM_LIST-71][STRING][3]=-1;

	table[PARAM_LIST-71][BOOLEAN][0]=PARAM;
	table[PARAM_LIST-71][BOOLEAN][1]=PARAM_LIST2;
	table[PARAM_LIST-71][BOOLEAN][2]=-1;
	table[PARAM_LIST-71][BOOLEAN][3]=-1;

	table[PARAM_LIST-71][QUREG][0]=PARAM;
	table[PARAM_LIST-71][QUREG][1]=PARAM_LIST2;
	//table[PARAM_LIST-71][QUREG][2]=P;
	table[PARAM_LIST-71][QUREG][2]=-1;
	table[PARAM_LIST-71][QUREG][3]=-1;

    table[PARAM_LIST-71][QUVOID][0]=PARAM;
	table[PARAM_LIST-71][QUVOID][1]=PARAM_LIST2;
	//table[PARAM_LIST-71][QUVOID][2]=P;
	table[PARAM_LIST-71][QUVOID][2]=-1;
	table[PARAM_LIST-71][QUVOID][3]=-1;

	table[PARAM_LIST-71][QUCONST][0]=PARAM;
	table[PARAM_LIST-71][QUCONST][1]=PARAM_LIST2;
	//table[PARAM_LIST-71][QUCONST][2]=P;
	table[PARAM_LIST-71][QUCONST][2]=-1;
	table[PARAM_LIST-71][QUCONST][3]=-1;

	table[PARAM_LIST-71][QUSCRATCH][0]=PARAM;
	table[PARAM_LIST-71][QUSCRATCH][1]=PARAM_LIST2;
	//table[PARAM_LIST-71][QUSCRATCH][2]=P;
	table[PARAM_LIST-71][QUSCRATCH][2]=-1;
	table[PARAM_LIST-71][QUSCRATCH][3]=-1;

	table[PARAM_LIST-71][QUCOND][0]=PARAM;
	table[PARAM_LIST-71][QUCOND][1]=PARAM_LIST2;
	//table[PARAM_LIST-71][QUCOND][2]=P;
	table[PARAM_LIST-71][QUCOND][2]=-1;
	table[PARAM_LIST-71][QUCOND][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[PARAM-71][INTEGER][0]=SCALARTYPE;
	table[PARAM-71][INTEGER][1]=PARAM2;
	table[PARAM-71][INTEGER][2]=-1;
	table[PARAM-71][INTEGER][3]=-1;
	table[PARAM-71][INTEGER][4]=-1;
	table[PARAM-71][INTEGER][5]=-1;
	table[PARAM-71][INTEGER][6]=-1;
	table[PARAM-71][INTEGER][7]=-1;
	table[PARAM-71][INTEGER][8]=-1;


	table[PARAM-71][COMPLEJO][0]=SCALARTYPE;
	table[PARAM-71][COMPLEJO][1]=PARAM2;
	table[PARAM-71][COMPLEJO][2]=-1;
	table[PARAM-71][COMPLEJO][3]=-1;

	table[PARAM-71][REAL][0]=SCALARTYPE;
	table[PARAM-71][REAL][1]=PARAM2;
	table[PARAM-71][REAL][2]=-1;
	table[PARAM-71][REAL][3]=-1;

	table[PARAM-71][STRING][0]=OTHERTYPE;
	table[PARAM-71][STRING][1]=PARAM3;
	table[PARAM-71][STRING][2]=-1;
	table[PARAM-71][STRING][3]=-1;
	table[PARAM-71][STRING][4]=-1;
	table[PARAM-71][STRING][5]=-1;
	table[PARAM-71][STRING][6]=-1;
	table[PARAM-71][STRING][7]=-1;
	table[PARAM-71][STRING][8]=-1;

	table[PARAM-71][BOOLEAN][0]=OTHERTYPE;
	table[PARAM-71][BOOLEAN][1]=PARAM3;
	table[PARAM-71][BOOLEAN][2]=-1;
	table[PARAM-71][BOOLEAN][3]=-1;

	table[PARAM-71][QUREG][0]=QUANTUMTYPE;
	table[PARAM-71][QUREG][1]=PARAM2;
	//table[PARAM-71][QUREG][2]=P;
	table[PARAM-71][QUREG][2]=-1;
	table[PARAM-71][QUREG][3]=-1;

    table[PARAM-71][QUVOID][0]=QUANTUMTYPE;
	table[PARAM-71][QUVOID][1]=PARAM2;
	//table[PARAM-71][QUVOID][2]=P;
	table[PARAM-71][QUVOID][2]=-1;
	table[PARAM-71][QUVOID][3]=-1;

	table[PARAM-71][QUCONST][0]=QUANTUMTYPE;
	table[PARAM-71][QUCONST][1]=PARAM2;
	//table[PARAM-71][QUCONST][2]=P;
	table[PARAM-71][QUCONST][2]=-1;
	table[PARAM-71][QUCONST][3]=-1;

	table[PARAM-71][QUSCRATCH][0]=QUANTUMTYPE;
	table[PARAM-71][QUSCRATCH][1]=PARAM2;
	//table[PARAM-71][QUSCRATCH][2]=P;
	table[PARAM-71][QUSCRATCH][2]=-1;
	table[PARAM-71][QUSCRATCH][3]=-1;

	table[PARAM-71][QUCOND][0]=OTHERTYPE;
	table[PARAM-71][QUCOND][1]=PARAM3;
	//table[PARAM-71][QUCOND][2]=P;
	table[PARAM-71][QUCOND][2]=-1;
	table[PARAM-71][QUCOND][3]=-1;




/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[COMP_STMT-71][LLAVE_A][0]=LLAVE_A;
	table[COMP_STMT-71][LLAVE_A][1]=LOCAL_DEC;
	//table[COMP_STMT-71][QUCOND][2]=P;
	table[COMP_STMT-71][LLAVE_A][2]=STMT_LIST;
	table[COMP_STMT-71][LLAVE_A][3]=LLAVE_C;
	table[COMP_STMT-71][LLAVE_A][4]=-1;
	table[COMP_STMT-71][LLAVE_A][5]=-1;
	table[COMP_STMT-71][LLAVE_A][6]=-1;
	table[COMP_STMT-71][LLAVE_A][7]=-1;
	table[COMP_STMT-71][LLAVE_A][8]=-1;



/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



table[LOCAL_DEC-71][INTEGER][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][INTEGER][1]=-1;
	table[LOCAL_DEC-71][INTEGER][2]=-1;
	table[LOCAL_DEC-71][INTEGER][3]=-1;
	table[LOCAL_DEC-71][INTEGER][4]=-1;
	table[LOCAL_DEC-71][INTEGER][5]=-1;
	table[LOCAL_DEC-71][INTEGER][6]=-1;
	table[LOCAL_DEC-71][INTEGER][7]=-1;
	table[LOCAL_DEC-71][INTEGER][8]=-1;
	//table[LOCAL_DEC-71][INTEGER][3]=-1;

	table[LOCAL_DEC-71][COMPLEJO][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][COMPLEJO][1]=-1;
	table[LOCAL_DEC-71][COMPLEJO][2]=-1;
	table[LOCAL_DEC-71][COMPLEJO][3]=-1;

	table[LOCAL_DEC-71][REAL][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][REAL][1]=-1;
	table[LOCAL_DEC-71][REAL][2]=-1;
	table[LOCAL_DEC-71][REAL][3]=-1;

	table[LOCAL_DEC-71][STRING][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][STRING][1]=-1;
	table[LOCAL_DEC-71][STRING][2]=-1;
	table[LOCAL_DEC-71][STRING][3]=-1;

	table[LOCAL_DEC-71][BOOLEAN][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][BOOLEAN][1]=-1;
	table[LOCAL_DEC-71][BOOLEAN][2]=-1;
	table[LOCAL_DEC-71][BOOLEAN][3]=-1;

	table[LOCAL_DEC-71][QUREG][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][QUREG][1]=-1;
	//table[LOCAL_DEC-71][QUREG][2]=P;
	table[LOCAL_DEC-71][QUREG][2]=-1;
	table[LOCAL_DEC-71][QUREG][3]=-1;

    table[LOCAL_DEC-71][QUVOID][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][QUVOID][1]=-1;
	//table[LOCAL_DEC-71][QUVOID][2]=P;
	table[LOCAL_DEC-71][QUVOID][2]=-1;
	table[LOCAL_DEC-71][QUVOID][3]=-1;

	table[LOCAL_DEC-71][QUCONST][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][QUCONST][1]=-1;
	//table[LOCAL_DEC-71][QUCONST][2]=P;
	table[LOCAL_DEC-71][QUCONST][2]=-1;
	table[LOCAL_DEC-71][QUCONST][3]=-1;

	table[LOCAL_DEC-71][QUSCRATCH][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][QUSCRATCH][1]=-1;
	//table[LOCAL_DEC-71][QUSCRATCH][2]=P;
	table[LOCAL_DEC-71][QUSCRATCH][2]=-1;
	table[LOCAL_DEC-71][QUSCRATCH][3]=-1;

	table[LOCAL_DEC-71][QUCOND][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][QUCOND][1]=-1;
	//table[LOCAL_DEC-71][QUCOND][2]=P;
	table[LOCAL_DEC-71][QUCOND][2]=-1;
	table[LOCAL_DEC-71][QUCOND][3]=-1;

	table[LOCAL_DEC-71][IF][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][IF][1]=-1;
	table[LOCAL_DEC-71][IF][2]=-1;
	table[LOCAL_DEC-71][IF][3]=-1;

	table[LOCAL_DEC-71][WHILE][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][WHILE][1]=-1;
	table[LOCAL_DEC-71][WHILE][2]=-1;
	table[LOCAL_DEC-71][WHILE][3]=-1;

	table[LOCAL_DEC-71][RETURN][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][RETURN][1]=-1;
	table[LOCAL_DEC-71][RETURN][2]=-1;
	table[LOCAL_DEC-71][RETURN][3]=-1;

	table[LOCAL_DEC-71][BREAK][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][BREAK][1]=-1;
	table[LOCAL_DEC-71][BREAK][2]=-1;
	table[LOCAL_DEC-71][BREAK][3]=-1;

	table[LOCAL_DEC-71][CONTINUE][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][CONTINUE][1]=-1;
	table[LOCAL_DEC-71][CONTINUE][2]=-1;
	table[LOCAL_DEC-71][CONTINUE][3]=-1;

	table[LOCAL_DEC-71][FOR][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][FOR][1]=-1;
	table[LOCAL_DEC-71][FOR][2]=-1;
	table[LOCAL_DEC-71][FOR][3]=-1;

	table[LOCAL_DEC-71][INPUT][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][INPUT][1]=-1;
	table[LOCAL_DEC-71][INPUT][2]=-1;
	table[LOCAL_DEC-71][INPUT][3]=-1;

	table[LOCAL_DEC-71][PRINT][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][PRINT][1]=-1;
	table[LOCAL_DEC-71][PRINT][2]=-1;
	table[LOCAL_DEC-71][PRINT][3]=-1;

	table[LOCAL_DEC-71][MEASURE][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][MEASURE][1]=-1;
	table[LOCAL_DEC-71][MEASURE][2]=-1;
	table[LOCAL_DEC-71][MEASURE][3]=-1;

	table[LOCAL_DEC-71][ID_NT][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][ID_NT][1]=-1;
	table[LOCAL_DEC-71][ID_NT][2]=-1;
	table[LOCAL_DEC-71][ID_NT][3]=-1;

	table[LOCAL_DEC-71][NUM][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][NUM][1]=-1;
	table[LOCAL_DEC-71][NUM][2]=-1;
	table[LOCAL_DEC-71][NUM][3]=-1;

	table[LOCAL_DEC-71][NUMERAL][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][NUMERAL][1]=-1;
	table[LOCAL_DEC-71][NUMERAL][2]=-1;
	table[LOCAL_DEC-71][NUMERAL][3]=-1;

	table[LOCAL_DEC-71][PUNTOYCOMA][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][PUNTOYCOMA][1]=-1;
	table[LOCAL_DEC-71][PUNTOYCOMA][2]=-1;
	table[LOCAL_DEC-71][PUNTOYCOMA][3]=-1;

	table[LOCAL_DEC-71][LLAVE_A][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][LLAVE_A][1]=-1;
	table[LOCAL_DEC-71][LLAVE_A][2]=-1;
	table[LOCAL_DEC-71][LLAVE_A][3]=-1;

	table[LOCAL_DEC-71][LLAVE_C][0]=LOCAL_DEC2;
	table[LOCAL_DEC-71][LLAVE_C][1]=-1;
	table[LOCAL_DEC-71][LLAVE_C][2]=-1;
	table[LOCAL_DEC-71][LLAVE_C][3]=-1;











/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



table[STMT_LIST-71][IF][0]=STMT_LIST2;
	table[STMT_LIST-71][IF][1]=-1;
	table[STMT_LIST-71][IF][2]=-1;
	table[STMT_LIST-71][IF][3]=-1;

	table[STMT_LIST-71][WHILE][0]=STMT_LIST2;
	table[STMT_LIST-71][WHILE][1]=-1;
	table[STMT_LIST-71][WHILE][2]=-1;
	table[STMT_LIST-71][WHILE][3]=-1;

	table[STMT_LIST-71][RETURN][0]=STMT_LIST2;
	table[STMT_LIST-71][RETURN][1]=-1;
	table[STMT_LIST-71][RETURN][2]=-1;
	table[STMT_LIST-71][RETURN][3]=-1;
	table[STMT_LIST-71][RETURN][4]=-1;
	table[STMT_LIST-71][RETURN][5]=-1;
	table[STMT_LIST-71][RETURN][6]=-1;
	table[STMT_LIST-71][RETURN][7]=-1;
	table[STMT_LIST-71][RETURN][8]=-1;
	//table[STMT_LIST-71][RETURN][3]=-1;

	table[STMT_LIST-71][BREAK][0]=STMT_LIST2;
	table[STMT_LIST-71][BREAK][1]=-1;
	table[STMT_LIST-71][BREAK][2]=-1;
	table[STMT_LIST-71][BREAK][3]=-1;

	table[STMT_LIST-71][CONTINUE][0]=STMT_LIST2;
	table[STMT_LIST-71][CONTINUE][1]=-1;
	table[STMT_LIST-71][CONTINUE][2]=-1;
	table[STMT_LIST-71][CONTINUE][3]=-1;

	table[STMT_LIST-71][FOR][0]=STMT_LIST2;
	table[STMT_LIST-71][FOR][1]=-1;
	table[STMT_LIST-71][FOR][2]=-1;
	table[STMT_LIST-71][FOR][3]=-1;

	table[STMT_LIST-71][INPUT][0]=STMT_LIST2;
	table[STMT_LIST-71][INPUT][1]=-1;
	table[STMT_LIST-71][INPUT][2]=-1;
	table[STMT_LIST-71][INPUT][3]=-1;

	table[STMT_LIST-71][PRINT][0]=STMT_LIST2;
	table[STMT_LIST-71][PRINT][1]=-1;
	table[STMT_LIST-71][PRINT][2]=-1;
	table[STMT_LIST-71][PRINT][3]=-1;

	table[STMT_LIST-71][MEASURE][0]=STMT_LIST2;
	table[STMT_LIST-71][MEASURE][1]=-1;
	table[STMT_LIST-71][MEASURE][2]=-1;
	table[STMT_LIST-71][MEASURE][3]=-1;

	table[STMT_LIST-71][ID_NT][0]=STMT_LIST2;
	table[STMT_LIST-71][ID_NT][1]=-1;
	table[STMT_LIST-71][ID_NT][2]=-1;
	table[STMT_LIST-71][ID_NT][3]=-1;

	table[STMT_LIST-71][NUM][0]=STMT_LIST2;
	table[STMT_LIST-71][NUM][1]=-1;
	table[STMT_LIST-71][NUM][2]=-1;
	table[STMT_LIST-71][NUM][3]=-1;

	table[STMT_LIST-71][NUMERAL][0]=STMT_LIST2;
	table[STMT_LIST-71][NUMERAL][1]=-1;
	table[STMT_LIST-71][NUMERAL][2]=-1;
	table[STMT_LIST-71][NUMERAL][3]=-1;

	table[STMT_LIST-71][PUNTOYCOMA][0]=STMT_LIST2;
	table[STMT_LIST-71][PUNTOYCOMA][1]=-1;
	table[STMT_LIST-71][PUNTOYCOMA][2]=-1;
	table[STMT_LIST-71][PUNTOYCOMA][3]=-1;

	table[STMT_LIST-71][LLAVE_A][0]=STMT_LIST2;
	table[STMT_LIST-71][LLAVE_A][1]=-1;
	table[STMT_LIST-71][LLAVE_A][2]=-1;
	table[STMT_LIST-71][LLAVE_A][3]=-1;

	table[STMT_LIST-71][LLAVE_C][0]=STMT_LIST2;
	table[STMT_LIST-71][LLAVE_C][1]=-1;
	table[STMT_LIST-71][LLAVE_C][2]=-1;
	table[STMT_LIST-71][LLAVE_C][3]=-1;





/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[STMT-71][IF][0]=SELE_STMT;
	table[STMT-71][IF][1]=-1;
	table[STMT-71][IF][2]=-1;
	table[STMT-71][IF][3]=-1;

	table[STMT-71][WHILE][0]=ITER_STMT;
	table[STMT-71][WHILE][1]=-1;
	table[STMT-71][WHILE][2]=-1;
	table[STMT-71][WHILE][3]=-1;

	table[STMT-71][RETURN][0]=RETURN_STMT;
	table[STMT-71][RETURN][1]=-1;
	table[STMT-71][RETURN][2]=-1;
	table[STMT-71][RETURN][3]=-1;
	table[STMT-71][RETURN][4]=-1;
	table[STMT-71][RETURN][5]=-1;
	table[STMT-71][RETURN][6]=-1;
	table[STMT-71][RETURN][7]=-1;
	table[STMT-71][RETURN][8]=-1;
	//table[STMT-71][RETURN][3]=-1;

	table[STMT-71][BREAK][0]=BREAK;
	table[STMT-71][BREAK][1]=PUNTOYCOMA;
	table[STMT-71][BREAK][2]=-1;
	table[STMT-71][BREAK][3]=-1;

	table[STMT-71][CONTINUE][0]=CONTINUE;
	table[STMT-71][CONTINUE][1]=PUNTOYCOMA;
	table[STMT-71][CONTINUE][2]=-1;
	table[STMT-71][CONTINUE][3]=-1;

	table[STMT-71][FOR][0]=FOR_STMT;
	table[STMT-71][FOR][1]=-1;
	table[STMT-71][FOR][2]=-1;
	table[STMT-71][FOR][3]=-1;

	table[STMT-71][INPUT][0]=INPUT;
	table[STMT-71][INPUT][1]=ID_NT;
	table[STMT-71][INPUT][2]=-1;
	table[STMT-71][INPUT][3]=-1;

	table[STMT-71][PRINT][0]=PRINT;
	table[STMT-71][PRINT][1]=EXP;
	table[STMT-71][PRINT][2]=-1;
	table[STMT-71][PRINT][3]=-1;

	table[STMT-71][MEASURE][0]=MEASURE;
	table[STMT-71][MEASURE][1]=EXP;
	table[STMT-71][MEASURE][2]=-1;
	table[STMT-71][MEASURE][3]=-1;

	table[STMT-71][ID_NT][0]=EXP_STMT;
	table[STMT-71][ID_NT][1]=-1;
	table[STMT-71][ID_NT][2]=-1;
	table[STMT-71][ID_NT][3]=-1;

	table[STMT-71][NUM][0]=EXP_STMT;
	table[STMT-71][NUM][1]=-1;
	table[STMT-71][NUM][2]=-1;
	table[STMT-71][NUM][3]=-1;

	table[STMT-71][NUMERAL][0]=EXP_STMT;
	table[STMT-71][NUMERAL][1]=-1;
	table[STMT-71][NUMERAL][2]=-1;
	table[STMT-71][NUMERAL][3]=-1;

	table[STMT-71][PUNTOYCOMA][0]=EXP_STMT;
	table[STMT-71][PUNTOYCOMA][1]=-1;
	table[STMT-71][PUNTOYCOMA][2]=-1;
	table[STMT-71][PUNTOYCOMA][3]=-1;

	table[STMT-71][LLAVE_A][0]=LLAVE_A;
	table[STMT-71][LLAVE_A][1]=LOCAL_DEC;
	table[STMT-71][LLAVE_A][2]=STMT_LIST;
	table[STMT-71][LLAVE_A][3]=LLAVE_C;



/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[EXP_STMT-71][ID_NT][0]=EXP;
	table[EXP_STMT-71][ID_NT][1]=PUNTOYCOMA;
	table[EXP_STMT-71][ID_NT][2]=-1;
	table[EXP_STMT-71][ID_NT][3]=-1;

	table[EXP_STMT-71][NUM][0]=EXP;
	table[EXP_STMT-71][NUM][1]=PUNTOYCOMA;
	table[EXP_STMT-71][NUM][2]=-1;
	table[EXP_STMT-71][NUM][3]=-1;

	table[EXP_STMT-71][NUMERAL][0]=EXP;
	table[EXP_STMT-71][NUMERAL][1]=PUNTOYCOMA;
	table[EXP_STMT-71][NUMERAL][2]=-1;
	table[EXP_STMT-71][NUMERAL][3]=-1;

	table[EXP_STMT-71][PUNTOYCOMA][0]=PUNTOYCOMA;
	table[EXP_STMT-71][PUNTOYCOMA][1]=-1;
	table[EXP_STMT-71][PUNTOYCOMA][2]=-1;
	table[EXP_STMT-71][PUNTOYCOMA][3]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[ITER_STMT-71][WHILE][0]=WHILE;
	table[ITER_STMT-71][WHILE][1]=EXP;
	table[ITER_STMT-71][WHILE][2]=STMT;
	table[ITER_STMT-71][WHILE][3]=UNTIL;
	table[ITER_STMT-71][WHILE][4]=EXP;
	table[ITER_STMT-71][WHILE][5]=PUNTOYCOMA;





/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[FOR_STMT-71][FOR][0]=FOR;
	table[FOR_STMT-71][FOR][1]=ID;
	table[FOR_STMT-71][FOR][2]=IGUAL2;
	table[FOR_STMT-71][FOR][3]=EXP;
	table[FOR_STMT-71][FOR][4]=TO;
	table[FOR_STMT-71][FOR][5]=EXP;
    table[FOR_STMT-71][FOR][6]=EXP22;
    table[FOR_STMT-71][FOR][7]=STMT;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


    table[EXP22-71][IF][0]=-1;
	table[EXP22-71][IF][1]=-1;
	table[EXP22-71][IF][2]=-1;
	table[EXP22-71][IF][3]=-1;

	table[EXP22-71][WHILE][0]=-1;
	table[EXP22-71][WHILE][1]=-1;
	table[EXP22-71][WHILE][2]=-1;
	table[EXP22-71][WHILE][3]=-1;

	table[EXP22-71][RETURN][0]=-1;
	table[EXP22-71][RETURN][1]=-1;
	table[EXP22-71][RETURN][2]=-1;
	table[EXP22-71][RETURN][3]=-1;

	table[EXP22-71][BREAK][0]=-1;
	table[EXP22-71][BREAK][1]=-1;
	table[EXP22-71][BREAK][2]=-1;
	table[EXP22-71][BREAK][3]=-1;

	table[EXP22-71][FOR][0]=-1;
	table[EXP22-71][FOR][1]=-1;
	table[EXP22-71][FOR][2]=-1;
	table[EXP22-71][FOR][3]=-1;

	table[EXP22-71][CONTINUE][0]=-1;
	table[EXP22-71][CONTINUE][1]=-1;
	table[EXP22-71][CONTINUE][2]=-1;
	table[EXP22-71][CONTINUE][3]=-1;

	table[EXP22-71][INPUT][0]=-1;
	table[EXP22-71][INPUT][1]=-1;
	table[EXP22-71][INPUT][2]=-1;
	table[EXP22-71][INPUT][3]=-1;

	table[EXP22-71][PRINT][0]=-1;
	table[EXP22-71][PRINT][1]=-1;
	table[EXP22-71][PRINT][2]=-1;
	table[EXP22-71][PRINT][3]=-1;


	table[EXP22-71][MEASURE][0]=-1;
	table[EXP22-71][MEASURE][1]=-1;
	table[EXP22-71][MEASURE][2]=-1;
	table[EXP22-71][MEASURE][3]=-1;

	table[EXP22-71][ID_NT][0]=-1;
	table[EXP22-71][ID_NT][1]=-1;
	table[EXP22-71][ID_NT][2]=-1;
	table[EXP22-71][ID_NT][3]=-1;

	table[EXP22-71][NUM][0]=-1;
	table[EXP22-71][NUM][1]=-1;
	table[EXP22-71][NUM][2]=-1;
	table[EXP22-71][NUM][3]=-1;

	table[EXP22-71][STEP][0]=STEP;
	table[EXP22-71][STEP][1]=NUM;
	table[EXP22-71][STEP][2]=-1;
	table[EXP22-71][STEP][3]=-1;

	table[EXP22-71][NUMERAL][0]=-1;
	table[EXP22-71][NUMERAL][1]=-1;
	table[EXP22-71][NUMERAL][2]=-1;
	table[EXP22-71][NUMERAL][3]=-1;

	table[EXP22-71][PUNTOYCOMA][0]=-1;
	table[EXP22-71][PUNTOYCOMA][1]=-1;
	table[EXP22-71][PUNTOYCOMA][2]=-1;
	table[EXP22-71][PUNTOYCOMA][3]=-1;

	table[EXP22-71][LLAVE_A][0]=-1;
	table[EXP22-71][LLAVE_A][1]=-1;
	table[EXP22-71][LLAVE_A][2]=-1;
	table[EXP22-71][LLAVE_A][3]=-1;









/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[SELE_STMT-71][IF][0]=IF;
	table[SELE_STMT-71][IF][1]=EXP;
	table[SELE_STMT-71][IF][2]=STMT;
	table[SELE_STMT-71][IF][3]=STMT;



/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
table[RETURN_STMT-71][RETURN][0]=RETURN;
	table[RETURN_STMT-71][RETURN][1]=RETURN_STMT2;
	table[RETURN_STMT-71][RETURN][2]=-1;
	table[RETURN_STMT-71][RETURN][3]=-1;
	table[RETURN_STMT-71][RETURN][4]=-1;
	table[RETURN_STMT-71][RETURN][5]=-1;
	table[RETURN_STMT-71][RETURN][6]=-1;
	table[RETURN_STMT-71][RETURN][7]=-1;
    table[RETURN_STMT-71][RETURN][8]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	table[EXP-71][ID][0]=VAR;
	table[EXP-71][ID][1]=EXP2;
	table[EXP-71][ID][2]=-1;
	table[EXP-71][ID][3]=-1;
	table[EXP-71][ID][4]=-1;
	table[EXP-71][ID][5]=-1;
	table[EXP-71][ID][6]=-1;
	table[EXP-71][ID][7]=-1;
	table[EXP-71][ID][8]=-1;
	//table[EXP-71][ID][3]=-1;

	table[EXP-71][NUM][0]=NUM;
	table[EXP-71][NUM][1]=-1;
	table[EXP-71][NUM][2]=-1;
	table[EXP-71][NUM][3]=-1;

    table[EXP-71][NUMERAL][0]=NUMERAL;
	table[EXP-71][NUMERAL][1]=EXP;
	table[EXP-71][NUMERAL][2]=-1;
	table[EXP-71][NUMERAL][3]=-1;



/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

 table[VAR-71][ID][0]=ID;
	table[VAR-71][ID][1]=VAR2;
	table[VAR-71][ID][2]=-1;
	table[VAR-71][ID][3]=-1;
	table[VAR-71][ID][4]=-1;
	table[VAR-71][ID][5]=-1;
	table[VAR-71][ID][6]=-1;
	table[VAR-71][ID][7]=-1;
	table[VAR-71][ID][8]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[SIMPLE_EXP-71][ID_NT][0]=TERMINO ;
	table[SIMPLE_EXP-71][ID_NT][1]=SIMPLE_EXP2;
	table[SIMPLE_EXP-71][ID_NT][2]=-1;
	table[SIMPLE_EXP-71][ID_NT][3]=-1;

	table[SIMPLE_EXP-71][NUM][0]=TERMINO;
	table[SIMPLE_EXP-71][NUM][1]=SIMPLE_EXP2;
	table[SIMPLE_EXP-71][NUM][2]=-1;
	table[SIMPLE_EXP-71][NUM][3]=-1;

	table[SIMPLE_EXP-71][PAR_A][0]=TERMINO;
	table[SIMPLE_EXP-71][PAR_A][1]=SIMPLE_EXP2;
	table[SIMPLE_EXP-71][PAR_A][2]=-1;
	table[SIMPLE_EXP-71][PAR_A][3]=-1;

	table[SIMPLE_EXP-71][FNUM][0]=TERMINO;
	table[SIMPLE_EXP-71][FNUM][1]=SIMPLE_EXP2;
	table[SIMPLE_EXP-71][FNUM][2]=-1;
	table[SIMPLE_EXP-71][FNUM][3]=-1;





/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[TERMINO-71][ID_NT][0]=FACTOR;
	table[TERMINO-71][ID_NT][1]=TERMINO2;
	table[TERMINO-71][ID_NT][2]=-1;
	table[TERMINO-71][ID_NT][3]=-1;

	table[TERMINO-71][NUM][0]=FACTOR;
	table[TERMINO-71][NUM][1]=TERMINO2;
	table[TERMINO-71][NUM][2]=-1;
	table[TERMINO-71][NUM][3]=-1;

	table[TERMINO-71][PAR_A][0]=FACTOR;
	table[TERMINO-71][PAR_A][1]=TERMINO2;
	table[TERMINO-71][PAR_A][2]=-1;
	table[TERMINO-71][PAR_A][3]=-1;

	table[TERMINO-71][FNUM][0]=FACTOR;
	table[TERMINO-71][FNUM][1]=TERMINO2;
	table[TERMINO-71][FNUM][2]=-1;
	table[TERMINO-71][FNUM][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[FACTOR-71][ID_NT][0]=CALL;
	table[FACTOR-71][ID_NT][1]=-1;
	table[FACTOR-71][ID_NT][2]=-1;
	table[FACTOR-71][ID_NT][3]=-1;

	table[FACTOR-71][NUM][0]=NUM;
	table[FACTOR-71][NUM][1]=-1;
	table[FACTOR-71][NUM][2]=-1;
	table[FACTOR-71][NUM][3]=-1;

	table[FACTOR-71][PAR_A][0]=PAR_A;
	table[FACTOR-71][PAR_A][1]=EXP;
	table[FACTOR-71][PAR_A][2]=PAR_C;
	table[FACTOR-71][PAR_A][3]=-1;

	table[FACTOR-71][FNUM][0]=FNUM;
	table[FACTOR-71][FNUM][1]=-1;
	table[FACTOR-71][FNUM][2]=-1;
	table[FACTOR-71][FNUM][3]=-1;

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[CALL-71][ID_NT][0]=ID_NT;
	table[CALL-71][ID_NT][1]=CALL2;
	table[CALL-71][ID_NT][2]=-1;
	table[CALL-71][ID_NT][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[ARGS-71][ID_NT][0]=ARGS_LIST;
	table[ARGS-71][ID_NT][1]=-1;
	table[ARGS-71][ID_NT][2]=-1;
	table[ARGS-71][ID_NT][3]=-1;

	table[ARGS-71][NUM][0]=ARGS_LIST;
	table[ARGS-71][NUM][1]=-1;
	table[ARGS-71][NUM][2]=-1;
	table[ARGS-71][NUM][3]=-1;

	table[ARGS-71][NUMERAL][0]=ARGS_LIST;
	table[ARGS-71][NUMERAL][1]=-1;
	table[ARGS-71][NUMERAL][2]=-1;
	table[ARGS-71][NUMERAL][3]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[ARGS_LIST-71][ID_NT][0]=VAR;
	table[ARGS_LIST-71][ID_NT][1]=ARGS_LIST3;
	table[ARGS_LIST-71][ID_NT][2]=-1;
	table[ARGS_LIST-71][ID_NT][3]=-1;

	table[ARGS_LIST-71][NUM][0]=NUM;
	table[ARGS_LIST-71][NUM][1]=ARGS_LIST2;
	table[ARGS_LIST-71][NUM][2]=-1;
	table[ARGS_LIST-71][NUM][3]=-1;

	table[ARGS_LIST-71][NUMERAL][0]=NUMERAL;
	table[ARGS_LIST-71][NUMERAL][1]=EXP;
	table[ARGS_LIST-71][NUMERAL][2]=ARGS_LIST2;
	table[ARGS_LIST-71][NUMERAL][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[ARGS_LIST2-71][COMA][0]=COMA;
	table[ARGS_LIST2-71][ID_NT][1]=ARGS_LIST2;
	table[ARGS_LIST2-71][ID_NT][2]=-1;
	table[ARGS_LIST2-71][ID_NT][3]=-1;

	table[ARGS_LIST2-71][PAR_C][0]=-1;
	table[ARGS_LIST2-71][PAR_C][1]=-1;
	table[ARGS_LIST2-71][PAR_C][2]=-1;
	table[ARGS_LIST2-71][PAR_C][3]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



table[DEC_LIST2-71][PROCEDURE][0]=DEC;
	table[DEC_LIST2-71][PROCEDURE][1]=DEC_LIST2;
	//table[DEC_LIST2-71][PROCEDURE][2]=P;
	table[DEC_LIST2-71][PROCEDURE][2]=-1;
	table[DEC_LIST2-71][PROCEDURE][3]=-1;

  	table[DEC_LIST2-71][INTEGER][0]=DEC;
	table[DEC_LIST2-71][INTEGER][1]=DEC_LIST2;
	//table[DEC_LIST2-71][SHOW][2]=P;
	table[DEC_LIST2-71][INTEGER][2]=-1;
	table[DEC_LIST2-71][INTEGER][3]=-1;

	table[DEC_LIST2-71][STRING][0]=DEC;
	table[DEC_LIST2-71][STRING][1]=DEC_LIST2;
	//table[DEC_LIST2-71][STRING][2]=P;
	table[DEC_LIST2-71][STRING][2]=-1;
	table[DEC_LIST2-71][STRING][3]=-1;

  	table[DEC_LIST2-71][REAL][0]=DEC;
	table[DEC_LIST2-71][REAL][1]=DEC_LIST2;
	//table[DEC_LIST2-71][DROP][2]=P;
	table[DEC_LIST2-71][REAL][2]=-1;
	table[DEC_LIST2-71][REAL][3]=-1;

    table[DEC_LIST2-71][COMPLEJO][0]=DEC;
	table[DEC_LIST2-71][COMPLEJO][1]=DEC_LIST2;
	//table[DEC_LIST2-71][USE][2]=P;
	table[DEC_LIST2-71][COMPLEJO][2]=-1;
	table[DEC_LIST2-71][COMPLEJO][3]=-1;

    table[DEC_LIST2-71][OPERATOR][0]=DEC;
	table[DEC_LIST2-71][OPERATOR][1]=DEC_LIST2;
	//table[DEC_LIST2-71][OPERATOR][2]=P;
	table[DEC_LIST2-71][OPERATOR][2]=-1;
	table[DEC_LIST2-71][OPERATOR][3]=-1;

	 table[DEC_LIST2-71][QUFUNCT][0]=DEC;
	table[DEC_LIST2-71][QUFUNCT][1]=DEC_LIST2;
	//table[DEC_LIST2-71][QUFUNCT][2]=P;
	table[DEC_LIST2-71][QUFUNCT][2]=-1;
	table[DEC_LIST2-71][QUFUNCT][3]=-1;

	 table[DEC_LIST2-71][EXTERN][0]=DEC;
	table[DEC_LIST2-71][EXTERN][1]=DEC_LIST2;
	//table[DEC_LIST2-71][EXTERN][2]=P;
	table[DEC_LIST2-71][EXTERN][2]=-1;
	table[DEC_LIST2-71][EXTERN][3]=-1;

	 table[DEC_LIST2-71][QUREG][0]=DEC;
	table[DEC_LIST2-71][QUREG][1]=DEC_LIST2;
	//table[DEC_LIST2-71][QUREG][2]=P;
	table[DEC_LIST2-71][QUREG][2]=-1;
	table[DEC_LIST2-71][QUREG][3]=-1;

    table[DEC_LIST2-71][QUVOID][0]=DEC;
	table[DEC_LIST2-71][QUVOID][1]=DEC_LIST2;
	//table[DEC_LIST2-71][QUVOID][2]=P;
	table[DEC_LIST2-71][QUVOID][2]=-1;
	table[DEC_LIST2-71][QUVOID][3]=-1;

	table[DEC_LIST2-71][QUCONST][0]=DEC;
	table[DEC_LIST2-71][QUCONST][1]=DEC_LIST2;
	//table[DEC_LIST2-71][QUCONST][2]=P;
	table[DEC_LIST2-71][QUCONST][2]=-1;
	table[DEC_LIST2-71][QUCONST][3]=-1;

	table[DEC_LIST2-71][QUSCRATCH][0]=DEC;
	table[DEC_LIST2-71][QUSCRATCH][1]=DEC_LIST2;
	//table[DEC_LIST2-71][QUSCRATCH][2]=P;
	table[DEC_LIST2-71][QUSCRATCH][2]=-1;
	table[DEC_LIST2-71][QUSCRATCH][3]=-1;

	table[DEC_LIST2-71][QUCOND][0]=DEC;
	table[DEC_LIST2-71][QUCOND][1]=DEC_LIST2;
	//table[DEC_LIST2-71][QUCOND][2]=P;
	table[DEC_LIST2-71][QUCOND][2]=-1;
	table[DEC_LIST2-71][QUCOND][3]=-1;

	table[DEC_LIST2-71][DOLARFIN][0]=-1;
	table[DEC_LIST2-71][DOLARFIN][1]=-1;
	//table[DEC_LIST2-71][QUCOND][2]=P;
	table[DEC_LIST2-71][DOLARFIN][2]=-1;
	table[DEC_LIST2-71][DOLARFIN][3]=-1;
	table[DEC_LIST2-71][DOLARFIN][4]=-1;
	table[DEC_LIST2-71][DOLARFIN][5]=-1;
	//table[DEC_LIST2-71][QUCOND][6]=P;
	table[DEC_LIST2-71][DOLARFIN][6]=-1;
	table[DEC_LIST2-71][DOLARFIN][7]=-1;
table[DEC_LIST2-71][DOLARFIN][8]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[ID_LIST2-71][PUNTOYCOMA][0]=-1;
	table[ID_LIST2-71][PUNTOYCOMA][1]=-1;
	table[ID_LIST2-71][PUNTOYCOMA][2]=-1;
	table[ID_LIST2-71][PUNTOYCOMA][3]=-1;
    table[ID_LIST2-71][PUNTOYCOMA][4]=-1;
    table[ID_LIST2-71][PUNTOYCOMA][5]=-1;
    table[ID_LIST2-71][PUNTOYCOMA][6]=-1;
    table[ID_LIST2-71][PUNTOYCOMA][7]=-1;
    table[ID_LIST2-71][PUNTOYCOMA][8]=-1;

	table[ID_LIST2-71][COMA][0]=COMA;
	table[ID_LIST2-71][COMA][1]=VAR;
	table[ID_LIST2-71][COMA][2]=ID_LIST2;
	table[ID_LIST2-71][COMA][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[PARAM_LIST2-71][PAR_C][0]=-1;
	table[PARAM_LIST2-71][PAR_C][1]=-1;
	table[PARAM_LIST2-71][PAR_C][2]=-1;
	table[PARAM_LIST2-71][PAR_C][3]=-1;
	table[PARAM_LIST2-71][PAR_C][4]=-1;
	table[PARAM_LIST2-71][PAR_C][5]=-1;
	table[PARAM_LIST2-71][PAR_C][6]=-1;
	table[PARAM_LIST2-71][PAR_C][7]=-1;
	table[PARAM_LIST2-71][PAR_C][8]=-1;
	//table[PARAM_LIST2-71][PAR_C][3]=-1;



	table[PARAM_LIST2-71][COMA][0]=COMA;
	table[PARAM_LIST2-71][COMA][1]=PARAM;
	table[PARAM_LIST2-71][COMA][2]=PARAM_LIST2;
	table[PARAM_LIST2-71][COMA][3]=-1;
	table[PARAM_LIST2-71][COMA][4]=-1;
    table[PARAM_LIST2-71][COMA][5]=-1;
    table[PARAM_LIST2-71][COMA][6]=-1;
    table[PARAM_LIST2-71][COMA][7]=-1;
    table[PARAM_LIST2-71][COMA][8]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



table[LOCAL_DEC2-71][INTEGER][0]=VAR_DEC;
	table[LOCAL_DEC2-71][INTEGER][1]=LOCAL_DEC2;
	table[LOCAL_DEC2-71][INTEGER][2]=-1;
	table[LOCAL_DEC2-71][INTEGER][3]=-1;
	table[LOCAL_DEC2-71][INTEGER][4]=-1;
	table[LOCAL_DEC2-71][INTEGER][5]=-1;
	table[LOCAL_DEC2-71][INTEGER][6]=-1;
	table[LOCAL_DEC2-71][INTEGER][7]=-1;
	table[LOCAL_DEC2-71][INTEGER][8]=-1;
	//table[LOCAL_DEC2-71][INTEGER][3]=-1;F

	table[LOCAL_DEC2-71][COMPLEJO][0]=VAR_DEC;
	table[LOCAL_DEC2-71][COMPLEJO][1]=LOCAL_DEC2;
	table[LOCAL_DEC2-71][COMPLEJO][2]=-1;
	table[LOCAL_DEC2-71][COMPLEJO][3]=-1;

	table[LOCAL_DEC2-71][REAL][0]=VAR_DEC;
	table[LOCAL_DEC2-71][REAL][1]=LOCAL_DEC2;
	table[LOCAL_DEC2-71][REAL][2]=-1;
	table[LOCAL_DEC2-71][REAL][3]=-1;

	table[LOCAL_DEC2-71][STRING][0]=VAR_DEC;
	table[LOCAL_DEC2-71][STRING][1]=LOCAL_DEC2;
	table[LOCAL_DEC2-71][STRING][2]=-1;
	table[LOCAL_DEC2-71][STRING][3]=-1;

	table[LOCAL_DEC2-71][BOOLEAN][0]=VAR_DEC;
	table[LOCAL_DEC2-71][BOOLEAN][1]=LOCAL_DEC2;
	table[LOCAL_DEC2-71][BOOLEAN][2]=-1;
	table[LOCAL_DEC2-71][BOOLEAN][3]=-1;


    table[LOCAL_DEC2-71][IF][0]=-1;
	table[LOCAL_DEC2-71][IF][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][IF][2]=-1;
	table[LOCAL_DEC2-71][IF][3]=-1;

	table[LOCAL_DEC2-71][WHILE][0]=-1;
	table[LOCAL_DEC2-71][WHILE][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][WHILE][2]=-1;
	table[LOCAL_DEC2-71][WHILE][3]=-1;

	table[LOCAL_DEC2-71][RETURN][0]=-1;
	table[LOCAL_DEC2-71][RETURN][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][RETURN][2]=-1;
	table[LOCAL_DEC2-71][RETURN][3]=-1;
	table[LOCAL_DEC2-71][RETURN][4]=-1;
	table[LOCAL_DEC2-71][RETURN][5]=-1;
	table[LOCAL_DEC2-71][RETURN][6]=-1;
	table[LOCAL_DEC2-71][RETURN][7]=-1;
	table[LOCAL_DEC2-71][RETURN][8]=-1;


	table[LOCAL_DEC2-71][BREAK][0]=-1;
	table[LOCAL_DEC2-71][BREAK][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][BREAK][2]=-1;
	table[LOCAL_DEC2-71][BREAK][3]=-1;

	table[LOCAL_DEC2-71][CONTINUE][0]=-1;
	table[LOCAL_DEC2-71][CONTINUE][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][CONTINUE][2]=-1;
	table[LOCAL_DEC2-71][CONTINUE][3]=-1;

	table[LOCAL_DEC2-71][FOR][0]=-1;
	table[LOCAL_DEC2-71][FOR][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][FOR][2]=-1;
	table[LOCAL_DEC2-71][FOR][3]=-1;

	table[LOCAL_DEC2-71][INPUT][0]=-1;
	table[LOCAL_DEC2-71][INPUT][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][INPUT][2]=-1;
	table[LOCAL_DEC2-71][INPUT][3]=-1;

	table[LOCAL_DEC2-71][PRINT][0]=-1;
	table[LOCAL_DEC2-71][PRINT][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][PRINT][2]=-1;
	table[LOCAL_DEC2-71][PRINT][3]=-1;

	table[LOCAL_DEC2-71][MEASURE][0]=-1;
	table[LOCAL_DEC2-71][MEASURE][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][MEASURE][2]=-1;
	table[LOCAL_DEC2-71][MEASURE][3]=-1;

	table[LOCAL_DEC2-71][ID][0]=-1;
	table[LOCAL_DEC2-71][ID][1]=-1;
	table[LOCAL_DEC2-71][ID][2]=-1;
	table[LOCAL_DEC2-71][ID][3]=-1;
	table[LOCAL_DEC2-71][ID][4]=-1;
	table[LOCAL_DEC2-71][ID][5]=-1;
	table[LOCAL_DEC2-71][ID][6]=-1;
	table[LOCAL_DEC2-71][ID][7]=-1;
	table[LOCAL_DEC2-71][ID][8]=-1;
	//table[LOCAL_DEC2-71][ID_NT][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][ID_NT][2]=-1;
	table[LOCAL_DEC2-71][ID_NT][3]=-1;

	table[LOCAL_DEC2-71][NUM][0]=-1;
	table[LOCAL_DEC2-71][NUM][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][NUM][2]=-1;
	table[LOCAL_DEC2-71][NUM][3]=-1;

	table[LOCAL_DEC2-71][NUMERAL][0]=-1;
	table[LOCAL_DEC2-71][NUMERAL][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][NUMERAL][2]=-1;
	table[LOCAL_DEC2-71][NUMERAL][3]=-1;

	table[LOCAL_DEC2-71][PUNTOYCOMA][0]=-1;
	table[LOCAL_DEC2-71][PUNTOYCOMA][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][PUNTOYCOMA][2]=-1;
	table[LOCAL_DEC2-71][PUNTOYCOMA][3]=-1;

	table[LOCAL_DEC2-71][LLAVE_A][0]=-1;
	table[LOCAL_DEC2-71][LLAVE_A][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][LLAVE_A][2]=-1;
	table[LOCAL_DEC2-71][LLAVE_A][3]=-1;

	table[LOCAL_DEC2-71][LLAVE_C][0]=-1;
	table[LOCAL_DEC2-71][LLAVE_C][1]=-1;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][LLAVE_C][2]=-1;
	table[LOCAL_DEC2-71][LLAVE_C][3]=-1;

	table[LOCAL_DEC2-71][QUREG][0]=VAR_DEC;
	table[LOCAL_DEC2-71][QUREG][1]=LOCAL_DEC2;
	//table[LOCAL_DEC2-71][QUREG][2]=P;
	table[LOCAL_DEC2-71][QUREG][2]=-1;
	table[LOCAL_DEC2-71][QUREG][3]=-1;

    table[LOCAL_DEC2-71][QUVOID][0]=VAR_DEC;
	table[LOCAL_DEC2-71][QUVOID][1]=LOCAL_DEC2;
	//table[LOCAL_DEC2-71][QUVOID][2]=P;
	table[LOCAL_DEC2-71][QUVOID][2]=-1;
	table[LOCAL_DEC2-71][QUVOID][3]=-1;

	table[LOCAL_DEC2-71][QUCONST][0]=VAR_DEC;
	table[LOCAL_DEC2-71][QUCONST][1]=LOCAL_DEC2;
	//table[LOCAL_DEC2-71][QUCONST][2]=P;
	table[LOCAL_DEC2-71][QUCONST][2]=-1;
	table[LOCAL_DEC2-71][QUCONST][3]=-1;

	table[LOCAL_DEC2-71][QUSCRATCH][0]=VAR_DEC;
	table[LOCAL_DEC2-71][QUSCRATCH][1]=LOCAL_DEC2;
	//table[LOCAL_DEC2-71][QUSCRATCH][2]=P;
	table[LOCAL_DEC2-71][QUSCRATCH][2]=-1;
	table[LOCAL_DEC2-71][QUSCRATCH][3]=-1;

	table[LOCAL_DEC2-71][QUCOND][0]=VAR_DEC;
	table[LOCAL_DEC2-71][QUCOND][1]=LOCAL_DEC2;
	//table[LOCAL_DEC2-71][QUCOND][2]=P;
	table[LOCAL_DEC2-71][QUCOND][2]=-1;
	table[LOCAL_DEC2-71][QUCOND][3]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[STMT_LIST2-71][IF][0]=STMT;
	table[STMT_LIST2-71][IF][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][IF][2]=-1;
	table[STMT_LIST2-71][IF][3]=-1;

	table[STMT_LIST2-71][WHILE][0]=STMT;
	table[STMT_LIST2-71][WHILE][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][WHILE][2]=-1;
	table[STMT_LIST2-71][WHILE][3]=-1;

	table[STMT_LIST2-71][RETURN][0]=STMT;
	table[STMT_LIST2-71][RETURN][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][RETURN][2]=-1;
	table[STMT_LIST2-71][RETURN][3]=-1;
	table[STMT_LIST2-71][RETURN][4]=-1;
	table[STMT_LIST2-71][RETURN][5]=-1;
	table[STMT_LIST2-71][RETURN][6]=-1;
	table[STMT_LIST2-71][RETURN][7]=-1;
	table[STMT_LIST2-71][RETURN][8]=-1;
	//table[STMT_LIST2-71][RETURN][3]=-1;

	table[STMT_LIST2-71][BREAK][0]=STMT;
	table[STMT_LIST2-71][BREAK][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][BREAK][2]=-1;
	table[STMT_LIST2-71][BREAK][3]=-1;

	table[STMT_LIST2-71][CONTINUE][0]=STMT;
	table[STMT_LIST2-71][CONTINUE][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][CONTINUE][2]=-1;
	table[STMT_LIST2-71][CONTINUE][3]=-1;

	table[STMT_LIST2-71][FOR][0]=STMT;
	table[STMT_LIST2-71][FOR][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][FOR][2]=-1;
	table[STMT_LIST2-71][FOR][3]=-1;

	table[STMT_LIST2-71][INPUT][0]=STMT;
	table[STMT_LIST2-71][INPUT][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][INPUT][2]=-1;
	table[STMT_LIST2-71][INPUT][3]=-1;

	table[STMT_LIST2-71][PRINT][0]=STMT;
	table[STMT_LIST2-71][PRINT][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][PRINT][2]=-1;
	table[STMT_LIST2-71][PRINT][3]=-1;

	table[STMT_LIST2-71][MEASURE][0]=STMT;
	table[STMT_LIST2-71][MEASURE][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][MEASURE][2]=-1;
	table[STMT_LIST2-71][MEASURE][3]=-1;

	table[STMT_LIST2-71][ID_NT][0]=STMT;
	table[STMT_LIST2-71][ID_NT][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][ID_NT][2]=-1;
	table[STMT_LIST2-71][ID_NT][3]=-1;

	table[STMT_LIST2-71][NUM][0]=STMT;
	table[STMT_LIST2-71][NUM][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][NUM][2]=-1;
	table[STMT_LIST2-71][NUM][3]=-1;

	table[STMT_LIST2-71][NUMERAL][0]=STMT;
	table[STMT_LIST2-71][NUMERAL][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][NUMERAL][2]=-1;
	table[STMT_LIST2-71][NUMERAL][3]=-1;

	table[STMT_LIST2-71][PUNTOYCOMA][0]=STMT;
	table[STMT_LIST2-71][PUNTOYCOMA][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][PUNTOYCOMA][2]=-1;
	table[STMT_LIST2-71][PUNTOYCOMA][3]=-1;

	table[STMT_LIST2-71][LLAVE_A][0]=STMT;
	table[STMT_LIST2-71][LLAVE_A][1]=STMT_LIST2;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][LLAVE_A][2]=-1;
	table[STMT_LIST2-71][LLAVE_A][3]=-1;

	table[STMT_LIST2-71][LLAVE_C][0]=-1;
	table[STMT_LIST2-71][LLAVE_C][1]=-1;
	//table[STMT_LIST2-71][QUCOND][2]=P;
	table[STMT_LIST2-71][LLAVE_C][2]=-1;
	table[STMT_LIST2-71][LLAVE_C][3]=-1;
	table[STMT_LIST2-71][LLAVE_C][4]=-1;
	table[STMT_LIST2-71][LLAVE_C][5]=-1;
	table[STMT_LIST2-71][LLAVE_C][6]=-1;
	table[STMT_LIST2-71][LLAVE_C][7]=-1;
    table[STMT_LIST2-71][LLAVE_C][8]=-1;
	//table[STMT_LIST2-71][LLAVE_C][3]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[SIMPLE_EXP2-71][MAS][0]=MAS;
	table[SIMPLE_EXP2-71][MAS][1]=TERMINO;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[SIMPLE_EXP2-71][MAS][2]=SIMPLE_EXP2;
	table[SIMPLE_EXP2-71][MAS][3]=-1;

	table[SIMPLE_EXP2-71][COR_A][0]=-1;
	table[SIMPLE_EXP2-71][COR_A][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[SIMPLE_EXP2-71][COR_A][2]=-1;
	table[SIMPLE_EXP2-71][COR_A][3]=-1;

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[TERMINO2-71][MAS][0]=-1;
	table[TERMINO2-71][MAS][1]=-1;
	//table[TERMINO2-71][QUCOND][2]=P;
	table[TERMINO2-71][MAS][2]=-1;
	table[TERMINO2-71][MAS][3]=-1;

	table[TERMINO2-71][MULTI][0]=MULTI;
	table[TERMINO2-71][MULTI][1]=FACTOR;
	//table[TERMINO2-71][QUCOND][2]=P;
	table[TERMINO2-71][MULTI][2]=TERMINO2;
	table[TERMINO2-71][MULTI][3]=-1;

	table[TERMINO2-71][COR_A][0]=-1;
	table[TERMINO2-71][COR_A][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[TERMINO2-71][COR_A][2]=-1;
	table[TERMINO2-71][COR_A][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[FUN_DEF2-71][OPERATOR][0]=OPERATOR;
	table[FUN_DEF2-71][OPERATOR][1]=ID_NT;
	//table[FUN_DEF2-71][QUCOND][2]=P;
	table[FUN_DEF2-71][OPERATOR][2]=PAR_A;
	table[FUN_DEF2-71][OPERATOR][3]=PARAMS;
	table[FUN_DEF2-71][OPERATOR][4]=PAR_C;

	table[FUN_DEF2-71][QUFUNCT][0]=QUFUNCT;
	table[FUN_DEF2-71][QUFUNCT][1]=ID_NT;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[FUN_DEF2-71][QUFUNCT][2]=PAR_A;
	table[FUN_DEF2-71][QUFUNCT][3]=PARAMS;
    table[FUN_DEF2-71][QUFUNCT][4]=PAR_C;
/*+++++++++++++++++++++++++++++++++++*/

table[PARAM2-71][ID][0]=ID_NT;
	table[PARAM2-71][ID][1]=PARAM5;
	//table[PARAM2-71][QUCOND][2]=P;
	table[PARAM2-71][ID][2]=-1;
	table[PARAM2-71][ID][3]=-1;
	table[PARAM2-71][ID][4]=-1;
	table[PARAM2-71][ID][5]=-1;
	table[PARAM2-71][ID][6]=-1;
	table[PARAM2-71][ID][7]=-1;
    table[PARAM2-71][ID][8]=-1;



	table[PARAM2-71][COMA][0]=-1;
	table[PARAM2-71][COMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM2-71][COMA][2]=-1;
	table[PARAM2-71][COMA][3]=-1;

		table[PARAM2-71][PAR_A][0]=-1;
	table[PARAM2-71][PAR_A][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM2-71][PAR_C][2]=-1;
	table[PARAM2-71][PAR_C][3]=-1;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



table[PARAM3-71][ID][0]=ID_NT;
	table[PARAM3-71][ID][1]=PARAM6;
	//table[PARAM3-71][QUCOND][2]=P;
	table[PARAM3-71][ID][2]=-1;
	table[PARAM3-71][ID][3]=-1;
    table[PARAM3-71][ID][4]=-1;
    table[PARAM3-71][ID][5]=-1;
    table[PARAM3-71][ID][6]=-1;
    table[PARAM3-71][ID][7]=-1;
    table[PARAM3-71][ID][8]=-1;


	table[PARAM3-71][COMA][0]=-1;
	table[PARAM3-71][COMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM3-71][COMA][2]=-1;
	table[PARAM3-71][COMA][3]=-1;

		table[PARAM3-71][PAR_A][0]=-1;
	table[PARAM3-71][PAR_A][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM3-71][PAR_C][2]=-1;
	table[PARAM3-71][PAR_C][3]=-1;



/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[PARAM4-71][ID_NT][0]=ID_NT;
	table[PARAM4-71][ID_NT][1]=PARAM7;
	//table[PARAM4-71][QUCOND][2]=P;
	table[PARAM4-71][ID_NT][2]=-1;
	table[PARAM4-71][ID_NT][3]=-1;

	table[PARAM4-71][COMA][0]=-1;
	table[PARAM4-71][COMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM4-71][COMA][2]=-1;
	table[PARAM4-71][COMA][3]=-1;

		table[PARAM4-71][PAR_A][0]=-1;
	table[PARAM4-71][PAR_A][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM4-71][PAR_C][2]=-1;
	table[PARAM4-71][PAR_C][3]=-1;

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


table[RETURN_STMT2-71][ID][0]=EXP;
	table[RETURN_STMT2-71][ID][1]=PUNTOYCOMA;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[RETURN_STMT2-71][ID][2]=-1;
	table[RETURN_STMT2-71][ID][3]=-1;
	table[RETURN_STMT2-71][ID][4]=-1;
	table[RETURN_STMT2-71][ID][5]=-1;
	table[RETURN_STMT2-71][ID][6]=-1;
	table[RETURN_STMT2-71][ID][7]=-1;
    table[RETURN_STMT2-71][ID][8]=-1;
	//table[RETURN_STMT2-71][ID][3]=-1;




	table[RETURN_STMT2-71][NUM][0]=EXP;
	table[RETURN_STMT2-71][NUM][1]=PUNTOYCOMA;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[RETURN_STMT2-71][NUM][2]=-1;
	table[RETURN_STMT2-71][NUM][3]=-1;

    table[RETURN_STMT2-71][NUMERAL][0]=EXP;
	table[RETURN_STMT2-71][NUMERAL][1]=PUNTOYCOMA;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[RETURN_STMT2-71][NUMERAL][2]=-1;
	table[RETURN_STMT2-71][NUMERAL][3]=-1;

	table[RETURN_STMT2-71][PUNTOYCOMA][0]=PUNTOYCOMA;
	table[RETURN_STMT2-71][PUNTOYCOMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[RETURN_STMT2-71][PUNTOYCOMA][2]=-1;
	table[RETURN_STMT2-71][PUNTOYCOMA][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
table[EXP2-71][IF][0]=-1;
	table[EXP2-71][IF][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][IF][2]=-1;
	table[EXP2-71][IF][3]=-1;
	table[EXP2-71][IF][4]=-1;
	table[EXP2-71][IF][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][IF][6]=-1;
	table[EXP2-71][IF][7]=-1;
	table[EXP2-71][IF][8]=-1;

table[EXP2-71][WHILE][0]=-1;
	table[EXP2-71][WHILE][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][WHILE][2]=-1;
	table[EXP2-71][WHILE][3]=-1;
	table[EXP2-71][WHILE][4]=-1;
	table[EXP2-71][WHILE][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][WHILE][6]=-1;
	table[EXP2-71][WHILE][7]=-1;
	table[EXP2-71][WHILE][8]=-1;

table[EXP2-71][RETURN][0]=-1;
	table[EXP2-71][RETURN][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][RETURN][2]=-1;
	table[EXP2-71][RETURN][3]=-1;
	table[EXP2-71][RETURN][4]=-1;
	table[EXP2-71][RETURN][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][RETURN][6]=-1;
	table[EXP2-71][RETURN][7]=-1;
	table[EXP2-71][RETURN][8]=-1;

	table[EXP2-71][BREAK][0]=-1;
	table[EXP2-71][BREAK][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][BREAK][2]=-1;
	table[EXP2-71][BREAK][3]=-1;
	table[EXP2-71][BREAK][4]=-1;
	table[EXP2-71][BREAK][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][BREAK][6]=-1;
	table[EXP2-71][BREAK][7]=-1;
	table[EXP2-71][BREAK][8]=-1;

	table[EXP2-71][CONTINUE][0]=-1;
	table[EXP2-71][CONTINUE][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][CONTINUE][2]=-1;
	table[EXP2-71][CONTINUE][3]=-1;
	table[EXP2-71][CONTINUE][4]=-1;
	table[EXP2-71][CONTINUE][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][CONTINUE][6]=-1;
	table[EXP2-71][CONTINUE][7]=-1;
	table[EXP2-71][CONTINUE][8]=-1;

	table[EXP2-71][UNTIL][0]=-1;
	table[EXP2-71][UNTIL][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][UNTIL][2]=-1;
	table[EXP2-71][UNTIL][3]=-1;
	table[EXP2-71][UNTIL][4]=-1;
	table[EXP2-71][UNTIL][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][UNTIL][6]=-1;
	table[EXP2-71][UNTIL][7]=-1;
	table[EXP2-71][UNTIL][8]=-1;

	table[EXP2-71][FOR][0]=-1;
	table[EXP2-71][FOR][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][FOR][2]=-1;
	table[EXP2-71][FOR][3]=-1;
	table[EXP2-71][FOR][4]=-1;
	table[EXP2-71][FOR][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][FOR][6]=-1;
	table[EXP2-71][FOR][7]=-1;
	table[EXP2-71][FOR][8]=-1;

	table[EXP2-71][TO][0]=-1;
	table[EXP2-71][TO][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][TO][2]=-1;
	table[EXP2-71][TO][3]=-1;
	table[EXP2-71][TO][4]=-1;
	table[EXP2-71][TO][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][TO][6]=-1;
	table[EXP2-71][TO][7]=-1;
	table[EXP2-71][TO][8]=-1;

	table[EXP2-71][INPUT][0]=-1;
	table[EXP2-71][INPUT][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][INPUT][2]=-1;
	table[EXP2-71][INPUT][3]=-1;
	table[EXP2-71][INPUT][4]=-1;
	table[EXP2-71][INPUT][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][INPUT][6]=-1;
	table[EXP2-71][INPUT][7]=-1;
	table[EXP2-71][INPUT][8]=-1;

	table[EXP2-71][PRINT][0]=-1;
	table[EXP2-71][PRINT][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][PRINT][2]=-1;
	table[EXP2-71][PRINT][3]=-1;
	table[EXP2-71][PRINT][4]=-1;
	table[EXP2-71][PRINT][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][PRINT][6]=-1;
	table[EXP2-71][PRINT][7]=-1;
	table[EXP2-71][PRINT][8]=-1;

	table[EXP2-71][MEASURE][0]=-1;
	table[EXP2-71][MEASURE][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][MEASURE][2]=-1;
	table[EXP2-71][MEASURE][3]=-1;
	table[EXP2-71][MEASURE][4]=-1;
	table[EXP2-71][MEASURE][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][MEASURE][6]=-1;
	table[EXP2-71][MEASURE][7]=-1;
	table[EXP2-71][MEASURE][8]=-1;

	table[EXP2-71][ID][0]=-1;
	table[EXP2-71][ID][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][ID][2]=-1;
	table[EXP2-71][ID][3]=-1;
	table[EXP2-71][ID][4]=-1;
	table[EXP2-71][ID][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][ID][6]=-1;
	table[EXP2-71][ID][7]=-1;
	table[EXP2-71][ID][8]=-1;

	table[EXP2-71][NUM][0]=-1;
	table[EXP2-71][NUM][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][NUM][2]=-1;
	table[EXP2-71][NUM][3]=-1;
	table[EXP2-71][NUM][4]=-1;
	table[EXP2-71][NUM][5]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][NUM][6]=-1;
	table[EXP2-71][NUM][7]=-1;
	table[EXP2-71][NUM][8]=-1;


table[EXP2-71][IGUAL2][0]=IGUAL2;
	table[EXP2-71][IGUAL2][1]=EXP;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][IGUAL2][2]=-1;
	table[EXP2-71][IGUAL2][3]=-1;
	table[EXP2-71][IGUAL2][4]=-1;
	table[EXP2-71][IGUAL2][5]=-1;
	table[EXP2-71][IGUAL2][6]=-1;
	table[EXP2-71][IGUAL2][7]=-1;
    table[EXP2-71][IGUAL2][8]=-1;
	//table[EXP2-71][IGUAL2][3]=-1;
	table[EXP2-71][IGUAL][0]=IGUAL;
	table[EXP2-71][IGUAL][1]=EXP;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[EXP2-71][IGUAL][2]=-1;
	table[EXP2-71][IGUAL][3]=-1;
    table[EXP2-71][IGUAL][4]=-1;
	table[EXP2-71][IGUAL][5]=-1;
	table[EXP2-71][IGUAL][6]=-1;
	table[EXP2-71][IGUAL][7]=-1;
	table[EXP2-71][IGUAL][8]=-1;

    table[EXP2-71][NUMERAL][0]=-1;
	table[EXP2-71][NUMERAL][1]=-1;
	table[EXP2-71][NUMERAL][2]=-1;
	table[EXP2-71][NUMERAL][3]=-1;
	table[EXP2-71][NUMERAL][4]=-1;
	table[EXP2-71][NUMERAL][5]=-1;
	table[EXP2-71][NUMERAL][6]=-1;
	table[EXP2-71][NUMERAL][7]=-1;
	table[EXP2-71][NUMERAL][8]=-1;
	//table[EXP2-71][IGUAL][3]=-1;


    table[EXP2-71][LESS][0]=LESS;
	table[EXP2-71][LESS][1]=EXP;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[EXP2-71][LESS][2]=-1;
	table[EXP2-71][LESS][3]=-1;
	table[EXP2-71][LESS][4]=-1;
	table[EXP2-71][LESS][5]=-1;
	table[EXP2-71][LESS][6]=-1;
	table[EXP2-71][LESS][7]=-1;
	table[EXP2-71][LESS][8]=-1;


	table[EXP2-71][GREATER][0]=GREATER;
	table[EXP2-71][GREATER][1]=EXP;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[EXP2-71][GREATER][2]=-1;
	table[EXP2-71][GREATER][3]=-1;
	table[EXP2-71][GREATER][4]=-1;
	table[EXP2-71][GREATER][5]=-1;
	table[EXP2-71][GREATER][6]=-1;
	table[EXP2-71][GREATER][7]=-1;
	table[EXP2-71][GREATER][8]=-1;
	//table[EXP2-71][GREATER][3]=-1;
    table[EXP2-71][COMA][0]=-1;
    table[EXP2-71][COMA][1]=-1;
    table[EXP2-71][COMA][2]=-1;
    table[EXP2-71][COMA][3]=-1;
    table[EXP2-71][COMA][4]=-1;
    table[EXP2-71][COMA][5]=-1;
    table[EXP2-71][COMA][6]=-1;
    table[EXP2-71][COMA][7]=-1;
    table[EXP2-71][COMA][8]=-1;
    //table[EXP2-71][COMA][0]=-1;
    table[EXP2-71][PUNTOYCOMA][0]=-1;
    table[EXP2-71][PUNTOYCOMA][1]=-1;
    table[EXP2-71][PUNTOYCOMA][2]=-1;
    table[EXP2-71][PUNTOYCOMA][3]=-1;
    table[EXP2-71][PUNTOYCOMA][4]=-1;
    table[EXP2-71][PUNTOYCOMA][5]=-1;
    table[EXP2-71][PUNTOYCOMA][6]=-1;
    table[EXP2-71][PUNTOYCOMA][8]=-1;
    table[EXP2-71][PUNTOYCOMA][7]=-1;

	table[EXP2-71][PAR_A][0]=PAR_A;
	table[EXP2-71][PAR_A][1]=ARGS;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[EXP2-71][PAR_A][2]=PAR_C;
	table[EXP2-71][PAR_A][3]=-1;
	table[EXP2-71][PAR_A][4]=-1;
	table[EXP2-71][PAR_A][5]=-1;
	table[EXP2-71][PAR_A][6]=-1;
	table[EXP2-71][PAR_A][7]=-1;
	table[EXP2-71][PAR_A][8]=-1;

	table[EXP2-71][PAR_C][0]=-1;
	table[EXP2-71][PAR_C][1]=-1;
	table[EXP2-71][PAR_C][2]=-1;
	table[EXP2-71][PAR_C][3]=-1;
	table[EXP2-71][PAR_C][4]=-1;
	table[EXP2-71][PAR_C][5]=-1;
	table[EXP2-71][PAR_C][6]=-1;
	table[EXP2-71][PAR_C][7]=-1;
	table[EXP2-71][PAR_C][8]=-1;

	table[EXP2-71][LLAVE_A][0]=-1;
	table[EXP2-71][LLAVE_A][1]=-1;
	table[EXP2-71][LLAVE_A][2]=-1;
	table[EXP2-71][LLAVE_A][3]=-1;
	table[EXP2-71][LLAVE_A][4]=-1;
	table[EXP2-71][LLAVE_A][5]=-1;
	table[EXP2-71][LLAVE_A][6]=-1;
	table[EXP2-71][LLAVE_A][7]=-1;
	table[EXP2-71][LLAVE_A][8]=-1;

	table[EXP2-71][LLAVE_C][0]=-1;
	table[EXP2-71][LLAVE_C][1]=-1;
	table[EXP2-71][LLAVE_C][2]=-1;
	table[EXP2-71][LLAVE_C][3]=-1;
	table[EXP2-71][LLAVE_C][4]=-1;
	table[EXP2-71][LLAVE_C][5]=-1;
	table[EXP2-71][LLAVE_C][6]=-1;
	table[EXP2-71][LLAVE_C][7]=-1;
	table[EXP2-71][LLAVE_C][8]=-1;





/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[VAR2-71][IGUAL2][0]=-1;
	table[VAR2-71][IGUAL2][1]=-1;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[VAR2-71][IGUAL2][2]=-1;
	table[VAR2-71][IGUAL2][3]=-1;
	table[VAR2-71][IGUAL2][4]=-1;
	table[VAR2-71][IGUAL2][5]=-1;
	table[VAR2-71][IGUAL2][6]=-1;
	table[VAR2-71][IGUAL2][7]=-1;
    table[VAR2-71][IGUAL2][8]=-1;


	table[VAR2-71][IGUAL][0]=-1;
	table[VAR2-71][IGUAL][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[VAR2-71][IGUAL][2]=-1;
	table[VAR2-71][IGUAL][3]=-1;



	table[VAR2-71][PUNTOYCOMA][0]=-1;
	table[VAR2-71][PUNTOYCOMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[VAR2-71][PUNTOYCOMA][2]=-1;
	table[VAR2-71][PUNTOYCOMA][3]=-1;
    table[VAR2-71][PUNTOYCOMA][4]=-1;
    table[VAR2-71][PUNTOYCOMA][5]=-1;
    table[VAR2-71][PUNTOYCOMA][6]=-1;
    table[VAR2-71][PUNTOYCOMA][7]=-1;
    table[VAR2-71][PUNTOYCOMA][8]=-1;

	table[VAR2-71][COMA][0]=-1;
	table[VAR2-71][COMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[VAR2-71][COMA][2]=-1;
	table[VAR2-71][COMA][3]=-1;

	table[VAR2-71][LESS][0]=-1;
	table[VAR2-71][LESS][1]=-1;
	table[VAR2-71][LESS][2]=-1;
	table[VAR2-71][LESS][3]=-1;

	table[VAR2-71][GREATER][0]=GREATER;
	table[VAR2-71][GREATER][1]=EXP;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[VAR2-71][GREATER][2]=-1;
	table[VAR2-71][GREATER][3]=-1;

	table[VAR2-71][PAR_A][0]=-1;
	table[VAR2-71][PAR_A][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[VAR2-71][PAR_A][2]=-1;
	table[VAR2-71][PAR_A][3]=-1;

	table[VAR2-71][COR_A][0]=COR_A;
	table[VAR2-71][COR_A][1]=SIMPLE_EXP;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[VAR2-71][COR_A][2]=COR_C;
	table[VAR2-71][COR_A][3]=-1;





/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[CALL2-71][PAR_A][0]=PAR_A;
	table[CALL2-71][PAR_A][1]=ARGS;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[CALL2-71][PAR_A][2]=PAR_C;
	table[CALL2-71][PAR_A][3]=-1;

	table[CALL2-71][COR_A][0]=COR_A;
	table[CALL2-71][COR_A][1]=SIMPLE_EXP;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[CALL2-71][COR_A][2]=COR_C;
	table[CALL2-71][COR_A][3]=PAR_A;
	table[CALL2-71][COR_A][4]=ARGS;
	table[CALL2-71][COR_A][5]=PAR_C;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
table[ARGS_LIST3-71][IGUAL2][0]=IGUAL2;
	table[ARGS_LIST3-71][IGUAL2][1]=EXP;
	//table[RETURN_STMT231][QUCOND][2]=P;
	table[ARGS_LIST3-71][IGUAL2][2]=ARGS_LIST2;
	table[ARGS_LIST3-71][IGUAL2][3]=-1;


table[ARGS_LIST3-71][LESS][0]=LESS;
	table[ARGS_LIST3-71][LESS][1]=EXP;
	table[ARGS_LIST3-71][LESS][2]=ARGS_LIST2;
	table[ARGS_LIST3-71][LESS][3]=-1;

	table[ARGS_LIST3-71][GREATER][0]=GREATER;
	table[ARGS_LIST3-71][GREATER][1]=EXP;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[ARGS_LIST3-71][GREATER][2]=ARGS_LIST2;
	table[ARGS_LIST3-71][GREATER][3]=-1;

	table[ARGS_LIST3-71][PAR_A][0]=PAR_A;
	table[ARGS_LIST3-71][PAR_A][1]=ARGS;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[ARGS_LIST3-71][PAR_A][2]=PAR_C;
	table[ARGS_LIST3-71][PAR_A][3]=ARGS_LIST2;


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
table[PARAM5-71][COMA][0]=-1;
	table[PARAM5-71][COMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM5-71][COMA][2]=-1;
	table[PARAM5-71][COMA][3]=-1;
    table[PARAM5-71][COMA][4]=-1;
	table[PARAM5-71][COMA][5]=-1;
	table[PARAM5-71][COMA][6]=-1;
	table[PARAM5-71][COMA][7]=-1;
	table[PARAM5-71][COMA][8]=-1;
	table[PARAM5-71][COMA][9]=-1;


	table[PARAM5-71][PAR_C][0]=-1;
	table[PARAM5-71][PAR_C][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM5-71][PAR_C][2]=-1;
	table[PARAM5-71][PAR_C][3]=-1;

    table[PARAM5-71][COR_A][0]=COR_A;
	table[PARAM5-71][COR_A][1]=COR_C;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM5-71][COR_A][2]=-1;
	table[PARAM5-71][COR_A][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[PARAM6-71][COMA][0]=-1;
	table[PARAM6-71][COMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM6-71][COMA][2]=-1;
	table[PARAM6-71][COMA][3]=-1;

	table[PARAM6-71][PAR_C][0]=-1;
	table[PARAM6-71][PAR_C][1]=-1;
	table[PARAM6-71][PAR_C][2]=-1;
	table[PARAM6-71][PAR_C][3]=-1;
	table[PARAM6-71][PAR_C][4]=-1;
	table[PARAM6-71][PAR_C][5]=-1;
	table[PARAM6-71][PAR_C][6]=-1;
	table[PARAM6-71][PAR_C][7]=-1;
	table[PARAM6-71][PAR_C][8]=-1;
	//table[PARAM6-71][PAR_C][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM6-71][PAR_C][2]=-1;
	table[PARAM6-71][PAR_C][3]=-1;

    table[PARAM6-71][COR_A][0]=COR_A;
	table[PARAM6-71][COR_A][1]=COR_C;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM6-71][COR_A][2]=-1;
	table[PARAM6-71][COR_A][3]=-1;
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

table[PARAM7-71][COMA][0]=-1;
	table[PARAM7-71][COMA][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM7-71][COMA][2]=-1;
	table[PARAM7-71][COMA][3]=-1;

	table[PARAM7-71][PAR_C][0]=-1;
	table[PARAM7-71][PAR_C][1]=-1;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM7-71][PAR_C][2]=-1;
	table[PARAM7-71][PAR_C][3]=-1;

    table[PARAM7-71][COR_A][0]=COR_A;
	table[PARAM7-71][COR_A][1]=COR_C;
	//table[SIMPLE_EXP2-71][QUCOND][2]=P;
	table[PARAM7-71][COR_A][2]=-1;
	table[PARAM7-71][COR_A][3]=-1;






}

int Parser::parseLR()
{	int x;
	CPila<int> pila;//una pila
	Token_t tok;
	Token currentToken;
	pila.Push(0);//que es el estado inicial 
	currentToken=getToken();
	tok=currentToken.getTok();
	cout<<"token recuperado : "<<currentToken.getLexema().c_str()<<endl;
	while(!pila.IsEmpty())
	{
		x=pila.Top();//se obtiene el primer elementos de la pila 
		if(tableLR[x][tok][0]==D){
			pila.Push(tok);
			pila.Push(tableLR[x][tok][1]);
		//otro token  de cadena 
		currentToken=getToken();
		tok=currentToken.getTok();
		}
		else
		{

			int beta=tableG[tableLR[x][tok][1]][1]*2;
			
			for(int u=0;u<beta;u++)
			{
				pila.Pop();
			}
			
			int x1=pila.Top();
			
			pila.Push(tableG[tableLR[x][tok][1]][0]);
			
			pila.Push(tableLR[x1][tableG[tableLR[x][tok][1]][0]][0]);
			


		}
	}
	return 1;
}

/**
*    Parser :: parse
*       Metodo principal
*/
int Parser::parse()
{

    int prod[9]={0,0,0,0,0,0,0,0,0};//inicializa la produccion
	int x=0;//el T o NT de la pila
	int const EPS=-1;// constante que representa el terminal vacio
	Token_t tok;// token real actual
	Token currentToken;//token actual
	CPila<int> pila;// pila para almacenar T y/o NT
	pila.Push(P);//introduce el simbolo inicial
	currentToken=getToken();
	tok=currentToken.getTok();

	cout<<"token recuperado: "<<currentToken.getLexema().c_str()<<"\n";

	while(!pila.IsEmpty()){

		x=pila.Top();// obtiene el valor del tope de la pila

		cout<<"X = "<<x<<"\n";
		if(isTerminal(x)){
			cout<<"Es terminal\n";

   			if(tok==x){
				cout <<"Se van "<<x<<" con "<<tok<<"\n";
					currentToken=getToken();
                	tok=currentToken.getTok();
				pila.Pop();
				cout<<"Token recuperado: "<<tok<<"\n";

				if(tok==ERROR){
					cout<<"Error Lexico,linea: "<<Scan->get_nrolinea()<<"\n";
					return 0;
				}
			}
			else{
				cout<<"Error: expected: "<<get_NT_T(x).c_str()<<"\n";
				cout<<"Error: expected: "<<get_NT_T(x).c_str()<<"\n";
				setError("Error: expected: "+ get_NT_T(x)+"\n");
				return 0;
			}
		}

		else {

			cout<<"Es NO terminal: "<<x<<"\n";
			cout<<"table["<<x<<"]["<<tok<<"]\n";

			prod[0]=table[x-71][tok][0];
			prod[1]=table[x-71][tok][1];
			prod[2]=table[x-71][tok][2];
			prod[3]=table[x-71][tok][3];
			prod[4]=table[x-71][tok][4];
			prod[5]=table[x-71][tok][5];
			prod[6]=table[x-71][tok][6];
			prod[7]=table[x-71][tok][7];
			prod[8]=table[x-71][tok][8];


		pila.Pop();
			if(prod[0]==ERROR_SYNTAX){
				cout<<"Error Syntaxis: in token: "<<tok<<"\n";
				if(isTerminal(tok)&& tok!=DOLARFIN &&tok!=ENDFILE){
					cout<<"Syntax error around of :"<<currentToken.getLexema().c_str()<<endl;
					setError("Error: se espera: "+ currentToken.getLexema()+"\n");
//                        <<", que es" get_NT_T(tok).c_str()<<"\n";
                }
				return 0;
			}

			cout<<"Prod: [ ";
			for(int i=8;i>=0;i--){
				if(prod[i]<-2 )
					cout<<"produccion overflow\n";
				if(prod[i]!=-1){//si es EPS no coloca en la pila
					pila.Push(prod[i]);
					cout<<prod[i]<<" ";
				}
			}

			cout<<" ]\n";

			//pila.print();


		}

	}//fin del while
//  Scan->printTable_ID();
//	cout<<"fin del while,tokfinal="<<tok<<endl;;
	if(tok==DOLARFIN)
		return 1;

//	setError("Syntax Error!");
	setError("Syntax Error: "+currentToken.getLexema()+"\n");
	return 0;
}; //fin de la funcion();


/**
*       Parser:: get_NT_T
*       segun el Terminal o No terminal, me retorna el exema asociado
*/
string Parser::get_NT_T(int x){


	string s="";
	switch(x){
		case NUM:
			return s="NUMERO";
		case ID:
             return s="ID";
       case CADENA:
            return s="CADENA";
       case REAL:
            return s="REAL";
       case COMPLEJO:
            return s="COMPLEJO";
		case STRING:
            return s="STRING";
		case BOOLEAN:
            return s="BOOLEAN";
		case VECTOR:
            return s="VECTOR";
		case MATRIX:
            return s="MATRIX";
		case PROCEDURE:
            return s="PROCEDURE";
		case OPERATOR:
            return s="OPERATOR";
		case QUFUNCT:
            return s="QUFUNCT";
		case QUREG:
            return s="QUREG";
		case QUVOID:
            return s="QUVOID";
	   case PAR_A:
            return s="PAR_A";
       case PAR_C:
            return s="PAR_C";
       case COR_A:
            return s="COR_A";
       case COR_C:
            return s="COR_C";
		case LLAVE_A:
            return s="LLAVE_A";
       case LLAVE_C:
            return s="LLAVE_C";
	   case ASTERISCO:
            return s="ASTERISCO";
       case COMA:
            return s="COMA";
       case PUNTOYCOMA:
            return s="PUNTOYCOMA";
		case NUMERAL:
            return s="NUMERAL";
       case MAS:
            return s="MAS";
		case MENOS:
            return s="MENOS";
		case MULTI:
            return s="MULTI";
       case DIV:
            return s="DIV";
		case MOD:
            return s="MOD";
		case LESS:
			return s="LESS";
		case GREATER:
			return s="GREATER";
		case IGUAL:
            return s="IGUAL";
       case IGUAL2:
            return s="IGUAL2";
       case AND:
            return s="AND";
       case ELSE:
            return s="ELSE";
       case IF:
            return s="IF";
       case MEASURE:
            return s="MEASURE";
        case WHILE:
            return s="WHILE";
       case FOR:
            return s="FOR";
       case TO:
            return s="TO";

       case PRINT:
            return s="PRINT";
	   case RETURN:
		   return s="RETURN";
       case ERROR:
            return s="ERROR";
       case ENDFILE:
            return s="ENDFILE";
       case DOLARFIN:
            return s="DOLARFIN";
		default:break;
	}

}
