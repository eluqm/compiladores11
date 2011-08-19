#include<iostream>
#include<fstream>
#include<map>
#include"Scanner.h"
#include"symbolTable.h"
using namespace std;

int main(int argc,char*argv[])
{
	
	

	if(argc < 2){cout<<"introduzca un archivo para leer"<<endl;}
	else{ if(argc > 2){cout<<"muchos parametros"<<endl;}	
		else{		
		Scanner *Sca;

		Sca = new Scanner(argv[1]);
		//Sca = new Scanner("archivo.txt");
		Sca->init_reservadas();
		Sca->init_tok();
		Token t=Sca->getToken();
		//cout<<'\\'<<endl;
		while(ENDFILE!=t.getTok()&&ERROR!=t.getTok())
		{

			t=Sca->getToken();
		}
		if(t.getTok()==ERROR)
		{
			cout<<"No se pudo completar reconocimiento"<<endl;
			cout<<t.getLexema()<<"en la linea :"<<Sca->get_nrolinea()<<endl;
		}
		//cout<<t.getLexema()<<endl;
		Sca->printTable_ID();

		}
	}
	
	return 0;






}
