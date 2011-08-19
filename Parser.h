#ifndef PARSER_H
#define PARSER_H


/** \file parser.h
  * \brief Archivos necesarios para analizar la cadena
  *  la base de datos generada.
  */

#include "scanner.h"
#include <iostream>
#include <fstream>
#include "Stack.h"
#include "globals.h"
#include <string>
#include <vector>



using namespace std;

/**
*  Conjunto de No Terminales necesarios para al Parsing*/



typedef enum{P=72,DEC_LIST,DEC,ID_NT,VAR_DEC,ID_LIST,TYPE_SPEC,SCALARTYPE,QUANTUMTYPE,OTHERTYPE,EXTERN,
				FUN_DEF,X,PARAMS,PARAM_LIST,PARAM,COMP_STMT,LOCAL_DEC,STMT_LIST,STMT,EXP_STMT,ITER_STMT,FOR_STMT,EXP22,SELE_STMT,RETURN_STMT,
				EXP,VAR,SIMPLE_EXP,TERMINO,FACTOR,CALL,ARGS,ARGS_LIST,ARGS_LIST2,DEC_LIST2,ID_LIST2,
				PARAM_LIST2,LOCAL_DEC2,STMT_LIST2,SIMPLE_EXP2,TERMINO2,FUN_DEF2,PARAM2,PARAM3,RETURN_STMT2,VAR2,
				EXP2,CALL2,ARGS_LIST3,PARAM4,PARAM5,PARAM6,PARAM7,LISTID, LISTID1,SHOW_NT, SHOWTABLES,SHOWDB,DROP_NT,
                DROPDB,DROPTABLE, SELECTQUERY,S, CONDITION,
            LISTATTRIB,INSERTQUERY, LISTVALORES, LISTVALS,V1,VALUE,X1,
            SEL,I1,C_N} NT_t;

/**  Constante que indica un error de sintaxis*/
const int ERROR_SYNTAX=-2;
//const int DOLARFIN=12;

/**
*  Clase Parser
*/
class Parser{

	private:
//		FILE* source;//codigo fuente
  		ofstream OutSyntax;//codigo fuente
  		ofstream OutErrorSyntax;//codigo fuente
		Scanner* Scan;//Scanner
		int table[70][70][9];//tabla para el parsing
		int tableLR[10][5][2];//tabla para lr(1) primitivo
		int tableG[3][2];
		Token currentToken;//token actual
        vector<Token> tokens;// conjunto de tokens
		NT_t currentNT;// No terminal actual
		string SyntaxError;

		//Stack<int  > pila;			//guarda terminales y no terminales

		void llenarTabla();//llena la tabla para analisis sintactico LL1
		void llenarTabla2();
		/**  retorna 1, si es terminal, de otra manera 0*/
		int isTerminal(int x){return x>=0 && x<71;}
	public:

	Parser(){
		  Scan = new Scanner();
	          llenarTabla();
		  OutSyntax.open("TraceSyntax.txt");
          	  OutErrorSyntax.open("ErrorSyntax.txt");
              	  currentToken.setTok(ERROR);
              	  currentToken.setLexema("");
		  SyntaxError="";
	}
    /** Constructor que recibe el nombre de un archivo*/
	Parser(char* file){
              		Scan = new Scanner(file);

              		cout<<"LLENANDO TABLA"<<endl;

              		llenarTabla();

              		cout<<"TABLA LLENA"<<endl;
//

                    //OutSyntax.open("TraceSyntax.txt");
//              		OutErrorSyntax.open("ErrorSyntax.txt");
              		currentToken.setTok(ERROR);
              		currentToken.setLexema("");
			SyntaxError="";
    }

/**
*      Principal funcion que realiza el analisis sintactico
*/
	int parse();
	int parseLR();

	/**  Establece una consulta al flujo de entrada*/
	//void setQuery(string query){reset();Scan->setQuery(query);}
	/**  Reinicializa valores*/
	void reset(){
		tokens.clear();
		OutSyntax.clear();
	}

   /** Consigue el siguinete token del Sacnner, y lo trata por conveniencia*/
	Token getToken(){						//se basa en getToken del Scanner
		if(currentToken.getTok()==DOLARFIN)
			return currentToken;

		Token t=Scan->getToken();
		if(t.getTok()==ENDFILE){
			t.setTok(DOLARFIN);}

            tokens.push_back(t);
		return t;
	}

	/** Retorna el T o NT pero como una cadena*/
    string get_NT_T(int x);

    /** El prime todos los tokens recibidos*/
    void printTokens();
    /** Retorna todos los recibidos por el Scanner*/
    vector<Token> getTokens(){return tokens;}//retorna todos los tokens
	string getError(){return SyntaxError;}
    void setError(string err){SyntaxError=err;}




};


#endif // PARSER_H
