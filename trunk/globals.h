#ifndef GLOBALS_H
#define GLOBALS_H



#include<iostream>
#include<string>
using namespace std;


/** variable, que es el tamaño del buffer */
const int BUFSIZE=256;

/**
  Definicion de los tokens necesarios
  tokens
*/
typedef enum{ Red,Des} acc;
typedef enum { C,D,ID,NUM,INTEGER,DOUBLE,VOID,CADENA,REAL,COMPLEJO,BOOLEAN,STRING,FNUM,REGION,IN,COMMENT,WRITES,COBEGIN,CLASS,
	PUBLIC,PRIVATE,THIS,POINT,VECTOR,MATRIX,TENSORN,PROCEDURE,OPERATOR,QUFUNCT,QUREG,QUCONST,QUVOID,QUSCRATCH,QUCOND,CONSTANTE,PAR_A,
PAR_C,COR_A,COR_C,LLAVE_A,LLAVE_C,ASTERISCO,COMA,PUNTOYCOMA,NUMERAL,DOSPUNTOS,POWE,CONCATENAR,TO,INCREMENT,
	IGUAL,MAS,MENOS,MULTI,DIV,MOD,IGUAL2,LESS,LESSEQUAL,GREATER,GREATEREQUAL,NOT,AND,OR,XOR,IF,ELSE,FOR,STEP,UNTIL,INPUT,PRINT,RETURN,BREAK,CONTINUE,WHILE,
	EXIT,MEASURE,RESET,DUMP,LIST,LOAD,SAVE,SET,ENDFILE,DOLARFIN,ERROR,C_T,D_T,NEW,LET,READS,WRITES,SEQ,PUNTO, ACCEPT}Token_t;

/**  Definicion de los estados del automata*/
typedef enum{START,INCOMMENT,INID,INCADENA,INNUM,OK} State_t;

/**  Definicion de los tipos de datos: integer, varchar */
typedef enum{NOTIPO=-1,INTEGER_T,VARCHAR_T,TABLA_T,DB_T} Type_t;


/**
 *  Clase Token
*/
class Token{
      public:
         Token():tok(ERROR){lexema="";}// constructor por defecto
         Token(string n):tok(ERROR){lexema=n;} //constructor con un parametro
         Token(Token_t t,string n):tok(t){lexema=n;}//constructor con dos parametro
         Token(const Token& t){lexema=t.lexema; tok=t.tok;}//constructor copia

         string getLexema(){return lexema;}// retorna el lexema asociado al token
         Token_t getTok(){return tok;}// retorna el token real
         void setLexema(string l){lexema=l;}// establece el lexema
         void setTok(Token_t t){tok=t;}// establece el token real

      private:
         Token_t tok;// token real
         string lexema;// lexema asociado al token
} ;


/************************************************************************/
/*  Clase TokenAttrib*/
/*           Se encuentran los atributos de los tokens */
/************************************************************************/
class TokenAttrib{

	public:
        /**  constructor por defecto*/
		TokenAttrib(){str_tok="";tipo=NOTIPO;tam_varchar=0;nombre="";token=ERROR;}
		/**  Constructor con un parametro*/
        TokenAttrib(string s){str_tok="";tipo=NOTIPO;tam_varchar=0;nombre=s;token=ERROR;}

      string getNombre(){return nombre;}// retorna el valor del token
      Token_t getToken(){return token;}//retorna el token real
      string getStr_Tok(){return str_tok;}//retorna el lexema del token
      Type_t getTipo(){return tipo;}// retoena el tipo de token si lo tuviera
      int get_Tam_Varchar(){return tam_varchar;}// tamaño del tipo varchar
      void setNombre(string s){nombre=s;}//establece el nombre
      void setToken(Token_t t){token=t;}//establece el token
      void setTipo(Type_t t){tipo=t;}//establece el tipo
      void setStr_Tok(string t){str_tok=t;}//establece el lexema del token
      void set_Tam_Varchar(int v){tam_varchar=v;}//establece el tamaño del tipo varchar
      string key(){return nombre;}// retorna una cadena, usada para hacer Hashing
	  void imprimir_Tok();// imprime los atributos del token*/


	private:
   	string nombre;//
    Token_t token;// token real
	string str_tok;//lexema del token
    Type_t tipo;// tipo del token
    int tam_varchar;// tamaño del varchar
};


/** 
*  TokenAttrib:: print
*/
/*void TokenAttrib::imprimir_Tok(){
       cout<<"Token\t\tLexema\t\tTipo\n";
       cout<<getStr_Tok().c_str()<<"\t\t"<<getNombre().c_str()<<"\t\t"<<getTipo()<<endl;
}*/
void TokenAttrib::imprimir_Tok()
{
	  cout<<"Token\t\tLexema\t\tTipo\n";
       cout<<getStr_Tok().c_str()<<"\t\t"<<getNombre().c_str()<<"\t\t"<<getTipo()<<endl;
	  }
#endif // GLOBALS_H
