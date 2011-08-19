#ifndef SCANNER_H
#define SCANNER_H


#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include "globals.h"
#include "SymbolTable.h"
using namespace std;

class Scanner{
private:

    
    Token token;// token actual
    State_t state;//estado del automata
    string lexema;//lexema asociado al token
    char *buffer;// buffer de entrada
    int tam_buffer;//tama� del buffer
    int pos;//posicion del puntero a la cadena 
    int nro_linea;// numero de linea del flujo de entrada
    std::ifstream source;//lee el archivo de codigo fuente
  SymbolTable<string> table_Keywords;// tabla de sibmolos de KeyWords
    SymbolTable< TokenAttrib >  table_ID;// TS de atributos del token

    //std::ofstream OutTokens;// archivo de salida de tokens recibidos
    //std::ofstream OutErrorLexico;// acrivo donde se emite los errores lexicos
    string errorLexico ;
    vector<char>reservadas;
    vector<Token_t> tokens;
	map<string,Token_t> reser;
	map<char,Token_t> t;
    //map<string,Token> tokens_gen;

    void init_Tables();// inicia tabla de simbolos
	

public:
    
    Scanner(char* file):pos(0),nro_linea(0),tam_buffer(0)
    {
        buffer=new char[BUFSIZE];
        source.open(file);
       
        errorLexico="";
    }


	/** Constructor por defecto*/

	Scanner():pos(0),nro_linea(0),tam_buffer(0)
    {

        buffer=new char[BUFSIZE];
    }


	/** Constructor con dos archivos*/
    Scanner(char* file,char* error):pos(0),nro_linea(0),tam_buffer(0)
    {

        buffer=new char[BUFSIZE];
        init_Tables();
        errorLexico="";
    }
    Token getToken();//retorna el token siguiente
    void getToken2();
    //void printToken(Token_t t,string l);// imprime el token
    void printToken();
	void init_reservadas();
	void init_tok();
    int get_nrolinea()
    {
        return nro_linea; // consigue el numero de linea
    }
    void printTable_ID();//imprime la TS

    string getError()
    {
        return errorLexico;
    }
    void setError(string err)
    {
        errorLexico=err;
    }
    void serReservada();
    //bool Reservada(char er);
    void getBuff();
    void printToken2(Token_t,string a);
    char GetChar();
    void UnGetChar();
    //char getActualCarater();
    char getActualCaracter();
};
#endif // SCANNER_H
