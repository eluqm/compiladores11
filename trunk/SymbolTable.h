/** \file SymbolTable.h
  * \brief Tabla de simbolos
  */
#ifndef SYMTAB_H
#define SYMTAB_H

#include <algorithm>
#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <iterator>


using namespace std;


/**
* Clase SymbolTable                                                         
*/
template<class T>
class SymbolTable{
	public:
        /** Cosntructor por defecto*/   
		SymbolTable(){}
		void insert(string name);//inserta una entrada
  		void eliminar2(string key);//elimina una entrada
		void eliminar(T dato){eliminar2(dato.key());};//elimina una entrada
	    bool insert( string key,T dato);//inserta una entrada
		bool buscar2(string key);//busca una entrada
  		bool buscar(T dato){return buscar2(dato.key());}//busca una entrada
		void printTable();


	private:
//		int size;
//	mapString table;
		map<string,T> table;//tabla de simbolos
};



/** 
*  SymbolTable:: insert
*/
template<class T>
bool SymbolTable<T>::insert( string key,T dato){

//   	pair p=table.insert(make_pair(key,dato));
      return (table.insert(make_pair(key,dato)).second==true)? true:false;
};


/** 
*  SymbolTable:: buscar2
*/
template<class T>
bool SymbolTable<T>::buscar2(string key){

//	map< string,T >::iterator k;
	//k=table.find(key);
   return (table.find(key)!=table.end()?true:false);
   
};


/** 
*  SymbolTable:: eleiminar2
*/
template<class T>
void SymbolTable<T>::eliminar2(string key){
		table.erase(key);
};

/** 
*  SymbolTable:: printTable
*/
template<class T>
void SymbolTable<T>::printTable(){

	for(int i=0;i<table.size();i++){}
	//cout<<i<<" : "<<table[i]<<endl;
	//cout<<"_asdasdasd_"<<endl;

	map<string,T>::iterator p;
  for(p=table.begin();p!=table.end();p++)
      (*p).second.imprimir_Tok();
   cout<<endl;
};


/** 
*  SymbolTable:: printTable
*/
/*template<class T>
void SymbolTable<T>::printTable(ifstream f){

	for(int i=0;i<table.size();i++)
		fprintf(f,"%d : %s\n",i,table[i]);
};
*/

#endif