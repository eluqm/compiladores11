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

	tableLR[63][COMA][0]=Des;
	tableLR[63][COMA][1]=49;
	tableLR[63][LLAVE_A][0]=Red;
	tableLR[63][LLAVE_A][1]=5;

	tableLR[64][ID][0]=Des;
	tableLR[64][ID][1]=17;
	tableLR[64][DOUBLE][0]=Des;
	tableLR[64][DOUBLE][1]=18;
	tableLR[64][VOID][0]=Des;
	tableLR[64][VOID][1]=19;
	tableLR[64][LLAVE_C][0]=Red;
	tableLR[64][LLAVE_C][1]=14;

	tableLR[65][LLAVE_C][0]=Red;
	tableLR[65][LLAVE_C][1]=30;

	tableLR[66][ID][0]=Des;
	tableLR[66][ID][1]=46;
	tableLR[66][THIS][0]=Des;
	tableLR[66][THIS][1]=47;
	tableLR[66][NEW][0]=Des;
	tableLR[66][NEW][1]=83;
	tableLR[66][LET][0]=Des;
	tableLR[66][LET][1]=81;
	tableLR[66][SEQ][0]=Des;
	tableLR[66][SEQ][1]=84;
	tableLR[66][COBEGIN][0]=Des;
	tableLR[66][COBEGIN][1]=85;

	tableLR[67][PUNTOYCOMA][0]=Des;
	tableLR[67][PUNTOYCOMA][1]=86;
	tableLR[67][PAR_A][0]=Des;
	tableLR[67][PAR_A][1]=88;
	tableLR[67][IGUAL][0]=Des;
	tableLR[67][IGUAL][1]=87;

	tableLR[68][COR_C][0]=Des;
	tableLR[68][COR_C][1]=89;

	tableLR[69][ID][0]=Red;
	tableLR[69][ID][1]=26;
	tableLR[69][THIS][0]=Red;
	tableLR[69][THIS][1]=26;
	tableLR[69][NEW][0]=Red;
	tableLR[69][NEW][1]=26;
	tableLR[69][LET][0]=Red;
	tableLR[69][LET][1]=26;
	tableLR[69][SEQ][0]=Red;
	tableLR[69][SEQ][1]=26;
	tableLR[69][COBEGIN][0]=Red;
	tableLR[69][COBEGIN][1]=26;
	tableLR[69][LLAVE_C][0]=Red;
	tableLR[69][LLAVE_C][1]=26;

    tableLR[70][ID][0]=Des;
	tableLR[70][ID][1]=46;
	tableLR[70][THIS][0]=Des;
	tableLR[70][THIS][1]=47;
	tableLR[70][NEW][0]=Des;
	tableLR[70][NEW][1]=73;
	tableLR[70][LET][0]=Des;
	tableLR[70][LET][1]=71;
	tableLR[70][SEQ][0]=Des;
	tableLR[70][SEQ][1]=74;
	tableLR[70][COBEGIN][0]=Des;
	tableLR[70][COBEGIN][1]=75;
	tableLR[70][PAR_C][0]=Red;
	tableLR[70][PAR_C][1]=31;

	tableLR[71][ID][0]=Des;
	tableLR[71][ID][1]=92;

	tableLR[72][PUNTOYCOMA][0]=Des;
	tableLR[72][PUNTOYCOMA][1]=95;
	tableLR[72][PUNTO][0]=Des;
	tableLR[72][PUNTO][1]=93;
	tableLR[72][COR_A][0]=Des;
	tableLR[72][COR_A][1]=94;

	tableLR[73][ID][0]=Des;
	tableLR[73][ID][1]=58;
	tableLR[73][DOUBLE][0]=Des;
	tableLR[73][DOUBLE][1]=59;
	tableLR[73][VOID][0]=Des;
	tableLR[73][VOID][1]=60;

	tableLR[74][PAR_A][0]=Des;
	tableLR[74][PAR_A][1]=97;

	tableLR[75][LLAVE_A][0]=Des;
	tableLR[75][LLAVE_A][1]=98;

	tableLR[76][ID][0]=Des;
	tableLR[76][ID][1]=46;
	tableLR[76][THIS][0]=Des;
	tableLR[76][THIS][1]=47;
	tableLR[76][NEW][0]=Des;
	tableLR[76][NEW][1]=43;
	tableLR[76][LET][0]=Des;
	tableLR[76][LET][1]=41;
	tableLR[76][SEQ][0]=Des;
	tableLR[76][SEQ][1]=44;
	tableLR[76][COBEGIN][0]=Des;
	tableLR[76][COBEGIN][1]=45;
	tableLR[76][LLAVE_C][0]=Red;
	tableLR[76][LLAVE_C][1]=31;

	tableLR[77][LLAVE_A][0]=Red;
	tableLR[77][LLAVE_A][1]=4;

	tableLR[78][LLAVE_C][0]=Red;
	tableLR[78][LLAVE_C][1]=13;

	tableLR[79][ID][0]=Des;
	tableLR[79][ID][1]=100;

	tableLR[80][IN][0]=Des;
	tableLR[80][IN][1]=101;

    tableLR[81][ID][0]=Des;
	tableLR[81][ID][1]=102;

	tableLR[82][PUNTOYCOMA][0]=Des;
	tableLR[82][PUNTOYCOMA][1]=105;
	tableLR[82][PUNTO][0]=Des;
	tableLR[82][PUNTO][1]=103;
	tableLR[82][COR_A][0]=Des;
	tableLR[82][COR_A][1]=104;

	tableLR[83][ID][0]=Des;
	tableLR[83][ID][1]=58;
	tableLR[83][DOUBLE][0]=Des;
	tableLR[83][DOUBLE][1]=59;
	tableLR[83][VOID][0]=Des;
	tableLR[83][VOID][1]=60;

    tableLR[84][PAR_A][0]=Des;
	tableLR[84][PAR_A][1]=107;

	tableLR[85][LLAVE_C][0]=Des;
	tableLR[85][LLAVE_C][1]=108;

    tableLR[86][ID][0]=Red;
	tableLR[86][ID][1]=21;
	tableLR[86][THIS][0]=Red;
	tableLR[86][THIS][1]=21;
	tableLR[86][NEW][0]=Red;
	tableLR[86][NEW][1]=21;
	tableLR[86][LET][0]=Red;
	tableLR[86][LET][1]=21;
	tableLR[86][SEQ][0]=Red;
	tableLR[86][SEQ][1]=21;
	tableLR[86][COBEGIN][0]=Red;
	tableLR[86][COBEGIN][1]=21;
	tableLR[86][LLAVE_C][0]=Red;
	tableLR[86][LLAVE_C][1]=21;

	tableLR[87][ID][0]=Des;
	tableLR[87][ID][1]=110;
	tableLR[87][THIS][0]=Des;
	tableLR[87][THIS][1]=111;

	tableLR[88][ID][0]=Des;
	tableLR[88][ID][1]=113;
	tableLR[88][THIS][0]=Des;
	tableLR[88][THIS][1]=114;

    tableLR[89][PUNTOYCOMA][0]=Des;
	tableLR[89][PUNTOYCOMA][1]=116;
	tableLR[89][IGUAL][0]=Des;
	tableLR[89][IGUAL][1]=115;

	tableLR[90][PAR_C][0]=Des;
	tableLR[90][PAR_C][1]=117;

    tableLR[91][ID][0]=Des;
	tableLR[91][ID][1]=46;
	tableLR[91][THIS][0]=Des;
	tableLR[91][THIS][1]=47;
	tableLR[91][NEW][0]=Des;
	tableLR[91][NEW][1]=73;
	tableLR[91][LET][0]=Des;
	tableLR[91][LET][1]=71;
	tableLR[91][SEQ][0]=Des;
	tableLR[91][SEQ][1]=74;
	tableLR[91][COBEGIN][0]=Des;
	tableLR[91][COBEGIN][1]=75;
	tableLR[91][PAR_C][0]=Red;
	tableLR[91][PAR_C][1]=31;

	tableLR[92][IGUAL][0]=Des;
	tableLR[92][IGUAL][1]=119;

    tableLR[93][ID][0]=Des;
	tableLR[93][ID][1]=120;

	tableLR[94][NUM][0]=Des;
	tableLR[94][NUM][1]=121;

    tableLR[95][ID][0]=Red;
	tableLR[95][ID][1]=27;
	tableLR[95][THIS][0]=Red;
	tableLR[95][THIS][1]=27;
	tableLR[95][NEW][0]=Red;
	tableLR[95][NEW][1]=27;
	tableLR[95][LET][0]=Red;
	tableLR[95][LET][1]=27;
	tableLR[95][SEQ][0]=Red;
	tableLR[95][SEQ][1]=27;
	tableLR[95][COBEGIN][0]=Red;
	tableLR[95][COBEGIN][1]=27;
	tableLR[95][LLAVE_C][0]=Red;
	tableLR[95][LLAVE_C][1]=27;

	tableLR[96][PUNTOYCOMA][0]=Des;
	tableLR[96][PUNTOYCOMA][1]=122;

    tableLR[97][ID][0]=Des;
	tableLR[97][ID][1]=46;
	tableLR[97][THIS][0]=Des;
	tableLR[97][THIS][1]=47;
	tableLR[97][NEW][0]=Des;
	tableLR[97][NEW][1]=73;
	tableLR[97][LET][0]=Des;
	tableLR[97][LET][1]=71;
	tableLR[97][SEQ][0]=Des;
	tableLR[97][SEQ][1]=74;
	tableLR[97][COBEGIN][0]=Des;
	tableLR[97][COBEGIN][1]=75;

    tableLR[98][ID][0]=Des;
	tableLR[98][ID][1]=46;
	tableLR[98][THIS][0]=Des;
	tableLR[98][THIS][1]=47;
	tableLR[98][NEW][0]=Des;
	tableLR[98][NEW][1]=43;
	tableLR[98][LET][0]=Des;
	tableLR[98][LET][1]=41;
	tableLR[98][SEQ][0]=Des;
	tableLR[98][SEQ][1]=44;
	tableLR[98][COBEGIN][0]=Des;
	tableLR[98][COBEGIN][1]=45;

	tableLR[99][LLAVE_C][0]=Des;
	tableLR[99][LLAVE_C][1]=125;

	tableLR[100][PAR_A][0]=Des;
	tableLR[100][PAR_A][1]=24;

	tableLR[101][ID][0]=Des;
	tableLR[101][ID][1]=46;
	tableLR[101][THIS][0]=Des;
	tableLR[101][THIS][1]=47;
	tableLR[101][NEW][0]=Des;
	tableLR[101][NEW][1]=129;
	tableLR[101][LET][0]=Des;
	tableLR[101][LET][1]=127;
	tableLR[101][SEQ][0]=Des;
	tableLR[101][SEQ][1]=130;
	tableLR[101][COBEGIN][0]=Des;
	tableLR[101][COBEGIN][1]=131;

	tableLR[102][IGUAL][0]=Des;
	tableLR[102][IGUAL][1]=132;

	tableLR[103][ID][0]=Des;
	tableLR[103][ID][1]=133;

	tableLR[104][NUM][0]=Des;
	tableLR[104][NUM][1]=134;

	tableLR[105][IN][0]=Red;
	tableLR[105][IN][1]=27;

	tableLR[106][PUNTOYCOMA][0]=Des;
	tableLR[106][PUNTOYCOMA][1]=135;

	tableLR[107][ID][0]=Des;
	tableLR[107][ID][1]=46;
	tableLR[107][THIS][0]=Des;
	tableLR[107][THIS][1]=47;
	tableLR[107][NEW][0]=Des;
	tableLR[107][NEW][1]=73;
	tableLR[107][LET][0]=Des;
	tableLR[107][LET][1]=71;
	tableLR[107][SEQ][0]=Des;
	tableLR[107][SEQ][1]=74;
	tableLR[107][COBEGIN][0]=Des;
	tableLR[107][COBEGIN][1]=75;

	tableLR[108][ID][0]=Des;
	tableLR[108][ID][1]=46;
	tableLR[108][THIS][0]=Des;
	tableLR[108][THIS][1]=47;
	tableLR[108][NEW][0]=Des;
	tableLR[108][NEW][1]=43;
	tableLR[108][LET][0]=Des;
	tableLR[108][LET][1]=41;
	tableLR[108][SEQ][0]=Des;
	tableLR[108][SEQ][1]=44;
	tableLR[108][COBEGIN][0]=Des;
	tableLR[108][COBEGIN][1]=45;

	//terminando hasta fila 108
	//Empezando desde la fila 109

	tableLR[109][PUNTOYCOMA][0]=Des;
	tableLR[109][PUNTOYCOMA][1]=138;

	tableLR[110][PUNTOYCOMA][0]=Red;
	tableLR[110][PUNTOYCOMA][1]=32;

	tableLR[111][PUNTOYCOMA][0]=Red;
	tableLR[111][PUNTOYCOMA][1]=33;

	tableLR[112][PAR_C][0]=Des;
	tableLR[112][PAR_C][1]=139;

	tableLR[113][PAR_C][0]=Red;
	tableLR[113][PAR_C][1]=32;

	tableLR[114][PAR_C][0]=Red;
	tableLR[114][PAR_C][1]=33;

	tableLR[115][ID][0]=Des;
	tableLR[115][ID][1]=110;
	tableLR[115][THIS][0]=Des;
	tableLR[115][THIS][1]=111;

	tableLR[116][ID][0]=Red;
	tableLR[116][ID][1]=24;
	tableLR[116][THIS][0]=Red;
	tableLR[116][THIS][1]=24;
	tableLR[116][NEW][0]=Red;
	tableLR[116][NEW][1]=24;
	tableLR[116][LET][0]=Red;
	tableLR[116][LET][1]=24;
	tableLR[116][SEQ][0]=Red;
	tableLR[116][SEQ][1]=24;
	tableLR[116][COBEGIN][0]=Red;
	tableLR[116][COBEGIN][1]=24;
	tableLR[116][LLAVE_C][0]=Red;
	tableLR[116][LLAVE_C][1]=24;

	tableLR[117][ID][0]=Red;
	tableLR[117][ID][1]=28;
	tableLR[117][THIS][0]=Red;
	tableLR[117][THIS][1]=28;
	tableLR[117][NEW][0]=Red;
	tableLR[117][NEW][1]=28;
	tableLR[117][LET][0]=Red;
	tableLR[117][LET][1]=28;
	tableLR[117][SEQ][0]=Red;
	tableLR[117][SEQ][1]=28;
	tableLR[117][COBEGIN][0]=Red;
	tableLR[117][COBEGIN][1]=28;
	tableLR[117][LLAVE_C][0]=Red;
	tableLR[117][LLAVE_C][1]=28;

	tableLR[118][PAR_C][0]=Red;
	tableLR[118][PAR_C][1]=30;

	tableLR[119][ID][0]=Des;
	tableLR[119][ID][1]=46;
	tableLR[119][THIS][0]=Des;
	tableLR[119][THIS][1]=47;
	tableLR[119][NEW][0]=Des;
	tableLR[119][NEW][1]=83;
	tableLR[119][LET][0]=Des;
	tableLR[119][LET][1]=81;
	tableLR[119][SEQ][0]=Des;
	tableLR[119][SEQ][1]=84;
	tableLR[119][COBEGIN][0]=Des;
	tableLR[119][COBEGIN][1]=85;

	tableLR[120][PUNTOYCOMA][0]=Des;
	tableLR[120][PUNTOYCOMA][1]=142;
	tableLR[120][PAR_A][0]=Des;
	tableLR[120][PAR_A][1]=144;
	tableLR[120][IGUAL][0]=Des;
	tableLR[120][IGUAL][1]=143;

	tableLR[121][COR_C][0]=Des;
	tableLR[121][COR_C][1]=145;

	tableLR[122][ID][0]=Red;
	tableLR[122][ID][1]=26;
	tableLR[122][THIS][0]=Red;
	tableLR[122][THIS][1]=26;
	tableLR[122][NEW][0]=Red;
	tableLR[122][NEW][1]=26;
	tableLR[122][LET][0]=Red;
	tableLR[122][LET][1]=26;
	tableLR[122][SEQ][0]=Red;
	tableLR[122][SEQ][1]=26;
	tableLR[122][COBEGIN][0]=Red;
	tableLR[122][COBEGIN][1]=26;
	tableLR[122][PAR_C][0]=Red;
	tableLR[122][PAR_C][1]=26;

	tableLR[123][ID][0]=Des;
	tableLR[123][ID][1]=46;
	tableLR[123][THIS][0]=Des;
	tableLR[123][THIS][1]=47;
	tableLR[123][NEW][0]=Des;
	tableLR[123][NEW][1]=73;
	tableLR[123][LET][0]=Des;
	tableLR[123][LET][1]=71;
	tableLR[123][SEQ][0]=Des;
	tableLR[123][SEQ][1]=74;
	tableLR[123][COBEGIN][0]=Des;
	tableLR[123][COBEGIN][1]=75;
	tableLR[123][PAR_C][0]=Red;
	tableLR[123][PAR_C][1]=31;

	tableLR[124][ID][0]=Des;
	tableLR[124][ID][1]=46;
	tableLR[124][THIS][0]=Des;
	tableLR[124][THIS][1]=47;
	tableLR[124][NEW][0]=Des;
	tableLR[124][NEW][1]=43;
	tableLR[124][LET][0]=Des;
	tableLR[124][LET][1]=41;
	tableLR[124][SEQ][0]=Des;
	tableLR[124][SEQ][1]=44;
	tableLR[124][COBEGIN][0]=Des;
	tableLR[124][COBEGIN][1]=45;
	tableLR[124][LLAVE_C][0]=Red;
	tableLR[124][LLAVE_C][1]=31;

    tableLR[125][ID][0]=Red;
	tableLR[125][ID][1]=29;
	tableLR[125][THIS][0]=Red;
	tableLR[125][THIS][1]=29;
	tableLR[125][NEW][0]=Red;
	tableLR[125][NEW][1]=29;
	tableLR[125][LET][0]=Red;
	tableLR[125][LET][1]=29;
	tableLR[125][SEQ][0]=Red;
	tableLR[125][SEQ][1]=29;
	tableLR[125][COBEGIN][0]=Red;
	tableLR[125][COBEGIN][1]=29;
	tableLR[125][LLAVE_C][0]=Red;
	tableLR[125][LLAVE_C][1]=29;

	tableLR[126][PUNTOYCOMA][0]=Des;
	tableLR[126][PUNTOYCOMA][1]=148;

	tableLR[127][ID][0]=Des;
	tableLR[127][ID][1]=149;

	tableLR[128][PUNTOYCOMA][0]=Des;
	tableLR[128][PUNTOYCOMA][1]=152;
	tableLR[128][PUNTO][0]=Des;
	tableLR[128][PUNTO][1]=150;
	tableLR[128][COR_A][0]=Des;
	tableLR[128][COR_A][1]=151;

	tableLR[129][ID][0]=Des;
	tableLR[129][ID][1]=58;
	tableLR[129][DOUBLE][0]=Des;
	tableLR[129][DOUBLE][1]=59;
	tableLR[129][VOID][0]=Des;
	tableLR[129][VOID][1]=60;

	tableLR[130][PAR_A][0]=Des;
	tableLR[130][PAR_A][1]=154;

	tableLR[131][LLAVE_A][0]=Des;
	tableLR[131][LLAVE_A][1]=155;

	tableLR[132][ID][0]=Des;
	tableLR[132][ID][1]=46;
	tableLR[132][THIS][0]=Des;
	tableLR[132][THIS][1]=47;
	tableLR[132][NEW][0]=Des;
	tableLR[132][NEW][1]=83;
	tableLR[132][LET][0]=Des;
	tableLR[132][LET][1]=81;
	tableLR[132][SEQ][0]=Des;
	tableLR[132][SEQ][1]=84;
	tableLR[132][COBEGIN][0]=Des;
	tableLR[132][COBEGIN][1]=85;

	tableLR[133][PUNTOYCOMA][0]=Des;
	tableLR[133][PUNTOYCOMA][1]=157;
	tableLR[133][PAR_A][0]=Des;
	tableLR[133][PAR_A][1]=159;
	tableLR[133][IGUAL][0]=Des;
	tableLR[133][IGUAL][1]=158;

	tableLR[134][COR_C][0]=Des;
	tableLR[134][COR_C][1]=160;

	tableLR[135][IN][0]=Red;
	tableLR[135][IN][1]=26;

	tableLR[136][ID][0]=Des;
	tableLR[136][ID][1]=46;
	tableLR[136][THIS][0]=Des;
	tableLR[136][THIS][1]=47;
	tableLR[136][NEW][0]=Des;
	tableLR[136][NEW][1]=73;
	tableLR[136][LET][0]=Des;
	tableLR[136][LET][1]=71;
	tableLR[136][SEQ][0]=Des;
	tableLR[136][SEQ][1]=74;
	tableLR[136][COBEGIN][0]=Des;
	tableLR[136][COBEGIN][1]=75;
	tableLR[136][PAR_C][0]=Red;
	tableLR[136][PAR_C][1]=31;

	tableLR[137][ID][0]=Des;
	tableLR[137][ID][1]=46;
	tableLR[137][THIS][0]=Des;
	tableLR[137][THIS][1]=47;
	tableLR[137][NEW][0]=Des;
	tableLR[137][NEW][1]=73;
	tableLR[137][LET][0]=Des;
	tableLR[137][LET][1]=41;
	tableLR[137][SEQ][0]=Des;
	tableLR[137][SEQ][1]=44;
	tableLR[137][COBEGIN][0]=Des;
	tableLR[137][COBEGIN][1]=45;
	tableLR[137][LLAVE_C][0]=Red;
	tableLR[137][LLAVE_C][1]=31;

	tableLR[138][ID][0]=Red;
	tableLR[138][ID][1]=32;
	tableLR[138][THIS][0]=Red;
	tableLR[138][THIS][1]=32;
	tableLR[138][NEW][0]=Red;
	tableLR[138][NEW][1]=32;
	tableLR[138][LET][0]=Red;
	tableLR[138][LET][1]=32;
	tableLR[138][SEQ][0]=Red;
	tableLR[138][SEQ][1]=32;
	tableLR[138][COBEGIN][0]=Red;
	tableLR[138][COBEGIN][1]=32;
	tableLR[138][LLAVE_C][0]=Red;
	tableLR[138][LLAVE_C][1]=32;

	tableLR[139][PUNTOYCOMA][0]=Des;
	tableLR[139][PUNTOYCOMA][1]=163;

	tableLR[140][PUNTOYCOMA][0]=Des;
	tableLR[140][PUNTOYCOMA][1]=164;

	tableLR[141][IN][0]=Des;
	tableLR[141][IN][1]=165;

	tableLR[142][ID][0]=Red;
	tableLR[142][ID][1]=21;
	tableLR[142][THIS][0]=Red;
	tableLR[142][THIS][1]=21;
	tableLR[142][NEW][0]=Red;
	tableLR[142][NEW][1]=21;
	tableLR[142][LET][0]=Red;
	tableLR[142][LET][1]=21;
	tableLR[142][SEQ][0]=Red;
	tableLR[142][SEQ][1]=21;
	tableLR[142][COBEGIN][0]=Red;
	tableLR[142][COBEGIN][1]=21;
	tableLR[142][PAR_C][0]=Red;
	tableLR[142][PAR_C][1]=21;

	tableLR[143][ID][0]=Des;
	tableLR[143][ID][1]=110;
	tableLR[143][THIS][0]=Des;
	tableLR[143][THIS][1]=111;

	tableLR[144][ID][0]=Des;
	tableLR[144][ID][1]=113;
	tableLR[144][THIS][0]=Des;
	tableLR[144][THIS][1]=114;

	tableLR[145][PUNTOYCOMA][0]=Des;
	tableLR[145][PUNTOYCOMA][1]=169;
	tableLR[145][IGUAL][0]=Des;
	tableLR[145][IGUAL][1]=168;

	tableLR[146][PAR_C][0]=Des;
	tableLR[146][PAR_C][1]=170;

	tableLR[147][LLAVE_C][0]=Des;
	tableLR[147][LLAVE_C][1]=171;

	tableLR[148][ID][0]=Red;
	tableLR[148][ID][1]=20;
	tableLR[148][THIS][0]=Red;
	tableLR[148][THIS][1]=20;
	tableLR[148][NEW][0]=Red;
	tableLR[148][NEW][1]=20;
	tableLR[148][LET][0]=Red;
	tableLR[148][LET][1]=20;
	tableLR[148][SEQ][0]=Red;
	tableLR[148][SEQ][1]=20;
	tableLR[148][COBEGIN][0]=Red;
	tableLR[148][COBEGIN][1]=20;
	tableLR[148][LLAVE_C][0]=Red;
	tableLR[148][LLAVE_C][1]=20;

	tableLR[149][IGUAL][0]=Des;
	tableLR[149][IGUAL][1]=172;

	tableLR[150][ID][0]=Des;
	tableLR[150][ID][1]=173;

	tableLR[151][NUM][0]=Des;
	tableLR[151][NUM][1]=174;

	tableLR[152][PUNTOYCOMA][0]=Red;
	tableLR[152][PUNTOYCOMA][1]=27;

	tableLR[153][PUNTOYCOMA][0]=Des;
	tableLR[153][PUNTOYCOMA][1]=175;

	tableLR[154][ID][0]=Des;
	tableLR[154][ID][1]=46;
	tableLR[154][THIS][0]=Des;
	tableLR[154][THIS][1]=47;
	tableLR[154][NEW][0]=Des;
	tableLR[154][NEW][1]=73;
	tableLR[154][LET][0]=Des;
	tableLR[154][LET][1]=71;
	tableLR[154][SEQ][0]=Des;
	tableLR[154][SEQ][1]=74;
	tableLR[154][COBEGIN][0]=Des;
	tableLR[154][COBEGIN][1]=75;

	tableLR[155][ID][0]=Des;
	tableLR[155][ID][1]=46;
	tableLR[155][THIS][0]=Des;
	tableLR[155][THIS][1]=47;
	tableLR[155][NEW][0]=Des;
	tableLR[155][NEW][1]=43;
	tableLR[155][LET][0]=Des;
	tableLR[155][LET][1]=41;
	tableLR[155][SEQ][0]=Des;
	tableLR[155][SEQ][1]=44;
	tableLR[155][COBEGIN][0]=Des;
	tableLR[155][COBEGIN][1]=45;

	tableLR[156][IN][0]=Des;
	tableLR[156][IN][1]=178;

	tableLR[157][IN][0]=Red;
	tableLR[157][IN][1]=21;

	tableLR[158][ID][0]=Des;
	tableLR[158][ID][1]=110;
	tableLR[158][THIS][0]=Des;
	tableLR[158][THIS][1]=111;

	tableLR[159][ID][0]=Des;
	tableLR[159][ID][1]=113;
	tableLR[159][THIS][0]=Des;
	tableLR[159][THIS][1]=114;

	tableLR[160][PUNTOYCOMA][0]=Des;
	tableLR[160][PUNTOYCOMA][1]=182;
	tableLR[160][IGUAL][0]=Des;
	tableLR[160][IGUAL][1]=181;

	tableLR[161][PAR_C][0]=Des;
	tableLR[161][PAR_C][1]=183;

	tableLR[162][LLAVE_C][0]=Des;
	tableLR[162][LLAVE_C][1]=184;

	tableLR[163][ID][0]=Red;
	tableLR[163][ID][1]=25;
	tableLR[163][THIS][0]=Red;
	tableLR[163][THIS][1]=25;
	tableLR[163][NEW][0]=Red;
	tableLR[163][NEW][1]=25;
	tableLR[163][LET][0]=Red;
	tableLR[163][LET][1]=25;
	tableLR[163][SEQ][0]=Red;
	tableLR[163][SEQ][1]=25;
	tableLR[163][COBEGIN][0]=Red;
	tableLR[163][COBEGIN][1]=25;
	tableLR[163][LLAVE_C][0]=Red;
	tableLR[163][LLAVE_C][1]=25;

	tableLR[164][ID][0]=Red;
	tableLR[164][ID][1]=23;
	tableLR[164][THIS][0]=Red;
	tableLR[164][THIS][1]=23;
	tableLR[164][NEW][0]=Red;
	tableLR[164][NEW][1]=23;
	tableLR[164][LET][0]=Red;
	tableLR[164][LET][1]=23;
	tableLR[164][SEQ][0]=Red;
	tableLR[164][SEQ][1]=23;
	tableLR[164][COBEGIN][0]=Red;
	tableLR[164][COBEGIN][1]=23;
	tableLR[164][LLAVE_C][0]=Red;
	tableLR[164][LLAVE_C][1]=23;

	tableLR[165][ID][0]=Des;
	tableLR[165][ID][1]=46;
	tableLR[165][THIS][0]=Des;
	tableLR[165][THIS][1]=47;
	tableLR[165][NEW][0]=Des;
	tableLR[165][NEW][1]=129;
	tableLR[165][LET][0]=Des;
	tableLR[165][LET][1]=127;
	tableLR[165][SEQ][0]=Des;
	tableLR[165][SEQ][1]=130;
	tableLR[165][COBEGIN][0]=Des;
	tableLR[165][COBEGIN][1]=131;

	tableLR[166][PUNTOYCOMA][0]=Des;
	tableLR[166][PUNTOYCOMA][1]=186;

	tableLR[167][PAR_C][0]=Des;
	tableLR[167][PAR_C][1]=187;

	tableLR[168][ID][0]=Des;
	tableLR[168][ID][1]=110;
	tableLR[168][THIS][0]=Des;
	tableLR[168][THIS][1]=111;

	tableLR[169][ID][0]=Red;
	tableLR[169][ID][1]=24;
	tableLR[169][THIS][0]=Red;
	tableLR[169][THIS][1]=24;
	tableLR[169][NEW][0]=Red;
	tableLR[169][NEW][1]=24;
	tableLR[169][LET][0]=Red;
	tableLR[169][LET][1]=24;
	tableLR[169][SEQ][0]=Red;
	tableLR[169][SEQ][1]=24;
	tableLR[169][COBEGIN][0]=Red;
	tableLR[169][COBEGIN][1]=24;
	tableLR[169][PAR_C][0]=Red;
	tableLR[169][PAR_C][1]=24;

	tableLR[170][ID][0]=Red;
	tableLR[170][ID][1]=28;
	tableLR[170][THIS][0]=Red;
	tableLR[170][THIS][1]=28;
	tableLR[170][NEW][0]=Red;
	tableLR[170][NEW][1]=28;
	tableLR[170][LET][0]=Red;
	tableLR[170][LET][1]=28;
	tableLR[170][SEQ][0]=Red;
	tableLR[170][SEQ][1]=28;
	tableLR[170][COBEGIN][0]=Red;
	tableLR[170][COBEGIN][1]=28;
	tableLR[170][PAR_C][0]=Red;
	tableLR[170][PAR_C][1]=28;

	tableLR[171][ID][0]=Red;
	tableLR[171][ID][1]=29;
	tableLR[171][THIS][0]=Red;
	tableLR[171][THIS][1]=29;
	tableLR[171][NEW][0]=Red;
	tableLR[171][NEW][1]=29;
	tableLR[171][LET][0]=Red;
	tableLR[171][LET][1]=29;
	tableLR[171][SEQ][0]=Red;
	tableLR[171][SEQ][1]=29;
	tableLR[171][COBEGIN][0]=Red;
	tableLR[171][COBEGIN][1]=29;
	tableLR[171][PAR_C][0]=Red;
	tableLR[171][PAR_C][1]=29;

	tableLR[172][ID][0]=Des;
	tableLR[172][ID][1]=46;
	tableLR[172][THIS][0]=Des;
	tableLR[172][THIS][1]=47;
	tableLR[172][NEW][0]=Des;
	tableLR[172][NEW][1]=83;
	tableLR[172][LET][0]=Des;
	tableLR[172][LET][1]=81;
	tableLR[172][SEQ][0]=Des;
	tableLR[172][SEQ][1]=84;
	tableLR[172][COBEGIN][0]=Des;
	tableLR[172][COBEGIN][1]=85;

	tableLR[173][PUNTOYCOMA][0]=Des;
	tableLR[173][PUNTOYCOMA][1]=190;
	tableLR[172][PAR_A][0]=Des;
	tableLR[172][PAR_A][1]=192;
	tableLR[173][IGUAL][0]=Des;
	tableLR[173][IGUAL][1]=191;

	tableLR[174][COR_C][0]=Des;
	tableLR[174][COR_C][1]=193;

	tableLR[175][PUNTOYCOMA][0]=Red;
	tableLR[175][PUNTOYCOMA][1]=26;

	tableLR[176][ID][0]=Des;
	tableLR[176][ID][1]=46;
	tableLR[176][THIS][0]=Des;
	tableLR[176][THIS][1]=47;
	tableLR[176][NEW][0]=Des;
	tableLR[176][NEW][1]=73;
	tableLR[176][LET][0]=Des;
	tableLR[176][LET][1]=71;
	tableLR[176][SEQ][0]=Des;
	tableLR[176][SEQ][1]=74;
	tableLR[176][COBEGIN][0]=Des;
	tableLR[176][COBEGIN][1]=75;
	tableLR[176][PAR_C][0]=Red;
	tableLR[176][PAR_C][1]=31;

	tableLR[177][ID][0]=Des;
	tableLR[177][ID][1]=46;
	tableLR[177][THIS][0]=Des;
	tableLR[177][THIS][1]=47;
	tableLR[177][NEW][0]=Des;
	tableLR[177][NEW][1]=43;
	tableLR[177][LET][0]=Des;
	tableLR[177][LET][1]=41;
	tableLR[177][SEQ][0]=Des;
	tableLR[177][SEQ][1]=44;
	tableLR[177][COBEGIN][0]=Des;
	tableLR[177][COBEGIN][1]=45;
	tableLR[177][LLAVE_C][0]=Red;
	tableLR[177][LLAVE_C][1]=31;

	tableLR[178][ID][0]=Des;
	tableLR[178][ID][1]=46;
	tableLR[178][THIS][0]=Des;
	tableLR[178][THIS][1]=47;
	tableLR[178][NEW][0]=Des;
	tableLR[178][NEW][1]=129;
	tableLR[178][LET][0]=Des;
	tableLR[178][LET][1]=127;
	tableLR[178][SEQ][0]=Des;
	tableLR[178][SEQ][1]=130;
	tableLR[178][COBEGIN][0]=Des;
	tableLR[178][COBEGIN][1]=131;

	tableLR[179][PUNTOYCOMA][0]=Des;
	tableLR[179][PUNTOYCOMA][1]=197;

	tableLR[180][PAR_C][0]=Des;
	tableLR[180][PAR_C][1]=198;

	tableLR[181][ID][0]=Des;
	tableLR[181][ID][1]=110;
	tableLR[181][THIS][0]=Des;
	tableLR[181][THIS][1]=111;

	tableLR[182][IN][0]=Red;
	tableLR[182][IN][1]=24;

	tableLR[183][IN][0]=Red;
	tableLR[183][IN][1]=28;

	tableLR[184][IN][0]=Red;
	tableLR[184][IN][1]=29;

	tableLR[185][PUNTOYCOMA][0]=Des;
	tableLR[185][PUNTOYCOMA][1]=200;

	tableLR[186][ID][0]=Red;
	tableLR[186][ID][1]=22;
	tableLR[186][THIS][0]=Red;
	tableLR[186][THIS][1]=22;
	tableLR[186][NEW][0]=Red;
	tableLR[186][NEW][1]=22;
	tableLR[186][LET][0]=Red;
	tableLR[186][LET][1]=22;
	tableLR[186][SEQ][0]=Red;
	tableLR[186][SEQ][1]=22;
	tableLR[186][COBEGIN][0]=Red;
	tableLR[186][COBEGIN][1]=22;
	tableLR[186][PAR_C][0]=Red;
	tableLR[186][PAR_C][1]=22;

	tableLR[187][PUNTOYCOMA][0]=Des;
	tableLR[187][PUNTOYCOMA][1]=201;

	tableLR[188][PUNTOYCOMA][0]=Des;
	tableLR[188][PUNTOYCOMA][1]=202;

	tableLR[189][ID][0]=Des;
	tableLR[189][ID][1]=203;

	tableLR[190][PUNTOYCOMA][0]=Red;
	tableLR[190][PUNTOYCOMA][1]=21;

	tableLR[191][ID][0]=Des;
	tableLR[191][ID][1]=110;
	tableLR[191][THIS][0]=Des;
	tableLR[191][THIS][1]=111;

	tableLR[192][ID][0]=Des;
	tableLR[192][ID][1]=113;
	tableLR[192][THIS][0]=Des;
	tableLR[192][THIS][1]=114;

	tableLR[193][PUNTOYCOMA][0]=Des;
	tableLR[193][PUNTOYCOMA][1]=207;
	tableLR[193][IGUAL][0]=Des;
	tableLR[193][IGUAL][1]=206;

	tableLR[194][PAR_C][0]=Des;
	tableLR[194][PAR_C][1]=208;

	tableLR[195][LLAVE_C][0]=Des;
	tableLR[195][LLAVE_C][1]=209;

	tableLR[196][PUNTOYCOMA][0]=Des;
	tableLR[196][PUNTOYCOMA][1]=210;

	tableLR[197][IN][0]=Red;
	tableLR[197][IN][1]=22;

	tableLR[198][PUNTOYCOMA][0]=Des;
	tableLR[198][PUNTOYCOMA][1]=211;

	tableLR[199][PUNTOYCOMA][0]=Des;
	tableLR[199][PUNTOYCOMA][1]=212;

	tableLR[200][ID][0]=Red;
	tableLR[200][ID][1]=20;
	tableLR[200][THIS][0]=Red;
	tableLR[200][THIS][1]=20;
	tableLR[200][NEW][0]=Red;
	tableLR[200][NEW][1]=20;
	tableLR[200][LET][0]=Red;
	tableLR[200][LET][1]=20;
	tableLR[200][SEQ][0]=Red;
	tableLR[200][SEQ][1]=20;
	tableLR[200][COBEGIN][0]=Red;
	tableLR[200][COBEGIN][1]=20;
	tableLR[200][PAR_C][0]=Red;
	tableLR[200][PAR_C][1]=20;

	tableLR[201][ID][0]=Red;
	tableLR[201][ID][1]=25;
	tableLR[201][THIS][0]=Red;
	tableLR[201][THIS][1]=25;
	tableLR[201][NEW][0]=Red;
	tableLR[201][NEW][1]=25;
	tableLR[201][LET][0]=Red;
	tableLR[201][LET][1]=25;
	tableLR[201][SEQ][0]=Red;
	tableLR[201][SEQ][1]=25;
	tableLR[201][COBEGIN][0]=Red;
	tableLR[201][COBEGIN][1]=25;
	tableLR[201][PAR_C][0]=Red;
	tableLR[201][PAR_C][1]=25;

	tableLR[202][ID][0]=Red;
	tableLR[202][ID][1]=23;
	tableLR[202][THIS][0]=Red;
	tableLR[202][THIS][1]=23;
	tableLR[202][NEW][0]=Red;
	tableLR[202][NEW][1]=23;
	tableLR[202][LET][0]=Red;
	tableLR[202][LET][1]=23;
	tableLR[202][SEQ][0]=Red;
	tableLR[202][SEQ][1]=23;
	tableLR[202][COBEGIN][0]=Red;
	tableLR[202][COBEGIN][1]=23;
	tableLR[202][PAR_C][0]=Red;
	tableLR[202][PAR_C][1]=23;

	tableLR[203][ID][0]=Des;
	tableLR[203][ID][1]=46;
	tableLR[203][THIS][0]=Des;
	tableLR[203][THIS][1]=47;
	tableLR[203][NEW][0]=Des;
	tableLR[203][NEW][1]=129;
	tableLR[203][LET][0]=Des;
	tableLR[203][LET][1]=127;
	tableLR[203][SEQ][0]=Des;
	tableLR[203][SEQ][1]=130;
	tableLR[203][COBEGIN][0]=Des;
	tableLR[203][COBEGIN][1]=131;

	tableLR[204][PUNTOYCOMA][0]=Des;
	tableLR[204][PUNTOYCOMA][1]=214;

	tableLR[205][PAR_C][0]=Des;
	tableLR[205][PAR_C][1]=215;

	tableLR[206][ID][0]=Des;
	tableLR[206][ID][1]=110;
	tableLR[206][THIS][0]=Des;
	tableLR[206][THIS][1]=111;

	tableLR[207][PUNTOYCOMA][0]=Red;
	tableLR[207][PUNTOYCOMA][1]=24;

	tableLR[208][PUNTOYCOMA][0]=Red;
	tableLR[208][PUNTOYCOMA][1]=28;

	tableLR[209][PUNTOYCOMA][0]=Red;
	tableLR[209][PUNTOYCOMA][1]=29;

	tableLR[210][IN][0]=Red;
	tableLR[210][IN][1]=20;

	tableLR[211][IN][0]=Red;
	tableLR[211][IN][1]=25;

	tableLR[212][IN][0]=Red;
	tableLR[212][IN][1]=23;

	tableLR[213][PUNTOYCOMA][0]=Des;
	tableLR[213][PUNTOYCOMA][1]=217;

	tableLR[214][PUNTOYCOMA][0]=Red;
	tableLR[214][PUNTOYCOMA][1]=24;

	tableLR[215][PUNTOYCOMA][0]=Des;
	tableLR[215][PUNTOYCOMA][1]=218;

	tableLR[216][PUNTOYCOMA][0]=Des;
	tableLR[216][PUNTOYCOMA][1]=219;

	tableLR[217][PUNTOYCOMA][0]=Red;
	tableLR[217][PUNTOYCOMA][1]=20;

	tableLR[218][PUNTOYCOMA][0]=Red;
	tableLR[218][PUNTOYCOMA][1]=25;

	tableLR[219][PUNTOYCOMA][0]=Red;
	tableLR[219][PUNTOYCOMA][1]=23;


//Tabla IR-A (Christian)


tableLR[0][PROGRAMA][0]=1;
tableLR[0][REGION][0]=2;

tableLR[2][CLASE][]=;

tableLR[6][MIDR][0]= 8;

tableLR[10][FIELD][0]=13;

tableLR[12][MIDR][0]=14;

tableLR[13][TYPE][0]=16;
tableLR[13][METODO][0]=15;

tableLR[20][CLASE][0]=22;

tableLR[24][TYPE][0]=26;

tableLR[28][MARG][0]=29;

tableLR[30][TYPE][0]=32;

tableLR[31][EFECT][0]=33;

tableLR[37][EXP][0]=40;
tableLR[37][VAR][0]=42;

tableLR[38][MIDR][0]=48;

tableLR[39][MIDR][0]=50;

tableLR[40][EXP][0]=52;
tableLR[40][MEXP][0]=51;
tableLR[40][VAR][0]=42;

tableLR[43][TYPE][0]=57;

tableLR[52][EXP][0]=52;
tableLR[52][MEXP][0]=65;
tableLR[52][VAR][0]=42;

tableLR[61][EXP][0]=70;
tableLR[61][VAR][0]=72;

tableLR[62][EXP][0]=76;
tableLR[62][VAR][0]=42;

tableLR[63][MIDR][0]=77;

tableLR[64][TYPE][0]=79;
tableLR[64][METODO][0]=78;

tableLR[66][EXP][0]=80;
tableLR[66][VAR][0]=82;

tableLR[70][EXP][0]=91;
tableLR[70][MEXP][0]=90;
tableLR[70][VAR][0]=72;

tableLR[73][TYPE][0]=96;

tableLR[76][EXP][0]=52;
tableLR[76][MEXP][0]=99;
tableLR[76][VAR][0]=42;

tableLR[83][TYPE][0]=106;

tableLR[87][VAR][0]=109;

tableLR[88][VAR][0]=112;

tableLR[91][EXP][0]=91;
tableLR[91][MEXP][0]=118;
tableLR[91][VAR][0]=72;

tableLR[97][EXP][0]=123;
tableLR[97][VAR][0]=72;

tableLR[98][EXP][0]=124;
tableLR[98][VAR][0]=42;

tableLR[101][EXP][0]=126;
tableLR[101][VAR][0]=128;

tableLR[107][EXP][0]=136;
tableLR[107][VAR][0]=72;

tableLR[108][EXP][0]=137;
tableLR[108][VAR][0]=42;

tableLR[115][VAR][0]=140;

tableLR[119][EXP][0]=141;
tableLR[119][VAR][0]=82;

tableLR[123][EXP][0]=91;
tableLR[123][MEXP][0]=146;
tableLR[123][VAR][0]=72;

tableLR[124][EXP][0]=52;
tableLR[124][MEXP][0]=147;
tableLR[124][VAR][0]=42;

tableLR[129][TYPE][0]=153;

tableLR[132][EXP][0]=156;
tableLR[132][MEXP][0]=82;

tableLR[136][EXP][0]=91;
tableLR[136][MEXP][0]=161;
tableLR[136][VAR][0]=72;

tableLR[137][EXP][0]=52;
tableLR[137][MEXP][0]=161;
tableLR[137][VAR][0]=42;

tableLR[143][VAR][0]=166;

tableLR[144][VAR][0]=167;

tableLR[154][EXP][0]=176;
tableLR[154][VAR][0]=72;

tableLR[155][EXP][0]=177;
tableLR[155][VAR][0]=42;

tableLR[158][VAR][0]=179;

tableLR[159][VAR][0]=180;

tableLR[165][EXP][0]=185;
tableLR[165][VAR][0]=128;

tableLR[168][VAR][0]=188;

tableLR[172][EXP][0]=189;
tableLR[172][VAR][0]=82;

tableLR[176][EXP][0]=91;
tableLR[176][MEXP][0]=194;
tableLR[176][VAR][0]=72;

tableLR[177][EXP][0]=52;
tableLR[177][MEXP][0]=195;
tableLR[177][VAR][0]=42;

tableLR[178][EXP][0]=196;
tableLR[178][VAR][0]=128;

tableLR[181][VAR][0]=199;

tableLR[191][VAR][0]=204;

tableLR[192][VAR][0]=205;

tableLR[203][EXP][0]=213;
tableLR[203][VAR][0]=128;

tableLR[206][VAR][0]=216;


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
