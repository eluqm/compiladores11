#include "Scanner.h"
#include<iostream>
#include<fstream>
#include "symbolTable.h"
#include<algorithm>
#include<string>
#include<cstring>
#include<map>
#include<vector>
#include<cctype>
#include "globals.h"
#include<set>
#include<cctype>

using namespace std;


void Scanner::init_reservadas()
{
reser["int"]=INTEGER;
reser["if"]=IF;
reser["real"]=REAL;
reser["region"]=REGION;
reser["in"]=IN;
reser["string"]=STRING;
reser["else"]=ELSE;
reser["return"]=RETURN;
reser["C"]=C;
reser["D"]=D;
reser["++"]=INCREMENT;
reser["while"]=WHILE;
//reser["region"]=REGION;
reser["in"]=IN;
reser["writes"]=WRITES;
reser["cobegin"]=COBEGIN;
reser["class"]=CLASS;
reser["this"]=THIS;
reser["double"]=DOUBLE;
reser["void"]=VOID;
}

void Scanner::init_tok()
{	t['.']=POINT;
	t['(']=PAR_A;
	t[')']=PAR_C;
	t['{']=LLAVE_A;
	t['}']=LLAVE_C;
	t['*']=ASTERISCO;
	t['=']=IGUAL2;
	t[';']=PUNTOYCOMA;
	t[',']=COMA;
	t['[']=COR_A;
	t[']']=COR_C;
	t['^']=POWE;
	t['#']=NUMERAL;
	t[':']=DOSPUNTOS;
	t['<']=LESS;
	t['>']=GREATER;
	t['&']=CONCATENAR;
	t['+']=MAS;
	t['%']=MOD;
	 
		
}
char Scanner::getActualCaracter()
{
    return buffer[pos];
}
void Scanner::getBuff()
{
    cout<<buffer<<endl;
}
void Scanner::printToken()
{

    for(int y=0; y<tokens.size(); y++)
    {
        cout<<tokens.size()<<endl;    //
    }
};
void Scanner::serReservada()
{

  

}



/**
*  printTable_ID
*/
void Scanner::printTable_ID()
{

    cout<<"********Tabla de Simbolos: ID***********\n";
    cout<<"Token\t\tLexema\t\tTipo\n\n";
    //table_ID.printTable();
	table_ID.printTable();
};

/*bool Scanner::Reservada(char er)
{

    vector<char>::iterator it;
    it=find(reservadas.begin(),reservadas.end(),er);
    return (it!=reservadas.end())?false:true;


}*/

/**
*  GetChar
*/
char Scanner::GetChar()
{


    if(pos>=tam_buffer)
    {
        nro_linea++;
		if(source.getline(buffer,BUFSIZE-1)){
            tam_buffer=strlen(buffer);
            pos=0;
            return buffer[pos++];
        }
        else
            return EOF;

    }
    else
        return buffer[pos++];

}
/**
*  UngetChar
*/
void Scanner::UnGetChar()
{
    pos--;
    if(pos<0)
        exit(1);
}


/**
*  getToken
*/
Token Scanner::getToken()
{
	
    int lexema_index=0;
    lexema="";
    char c;
    Token_t currentToken;
    state=START;
    bool save;
//c=GetChar();

    while(state!=OK)
    {		c=GetChar();
			//int p=c;
			//cout<<p<<endl;
//cout<<"el que viene es:" <<buffer[pos+1]<<"_"<<int(buffer[pos+1])<<endl;

			save=true;		       //cin.get();
		if(c==-15||c==-47&&state!=INCOMMENT){state=OK,currentToken=ERROR;}	
        switch(state)
        {
		case START:
			if(c==-15||c==-47){state=OK,currentToken=ERROR;}
			if(isalpha(c))
                state=INID;
            else if(isdigit(c))
                state=INNUM;
            else if(c=='\\'){
            	save=false;				//solo se descarta el token 
            	state=INCOMMENT;		//llega a ser un comentario
            }
			else if (int(c)==-15||int(c)==-47){save=false;state=OK;currentToken=ERROR;}
            else if(c=='\t'|| c==' ')
				{	//contador++;
					//cout<<"linea"<<contador<<endl;
					save=false;

				}
			else if(c==0)			//salto de linea 
			{ save=false;}
            else if(c==' \\" ')
				state=INCADENA;			/**string o cadena*/
            else
            {
                state=OK;
                if(c==EOF)
                {
                    currentToken=ENDFILE;
                    cout<<"<---Fin de Archivo: ENDFILE--->\n";
                    save=false;
                }
				else if(c=='+'){if(buffer[pos+1]=='+'){currentToken=reser.find("++")->second;pos++;}else{currentToken=t.find(c)->second;}}
				else if(t.find(c)!=t.end())
						currentToken=t.find(c)->second;
				 
			
				 			
				else{
					int u=c;
				cout<<"Error 0:caracter desconocido:"<<u<<"\n";
				cout<<"en la linea"<<nro_linea<<endl;
					//printf("Error caracter desconocido : %s en la linea %d \n",c,contador);
                    setError("Error Lexico :caracter desconocido: ");
                    currentToken=ERROR;
					//return 0;
					
					
				}
                
                   
		    
            }
            break;

         case INCOMMENT:			//si es un comentario
            				if(c=='\\'){
            					//UnGetChar();
            					save=false;
            					state=START;
            					currentToken=COMMENT;
							}
							//GetChar();
            				save=false;
            				break;

        case INID:
            if(!(isalnum(c)||c=='_'))
            {
               
                UnGetChar();
                save=false;
                state=OK;
                currentToken=ID;

            }
            break;

        case INCADENA:
            if(c=='\'')
            {
                state=OK;
                currentToken=CADENA;

            }
            break;

        case INNUM:
            if(!isdigit(c))
            {   
                UnGetChar();
                save=false;
                state=OK;
                currentToken=NUM;
            }
            break;
        /*case INNUMD:


            break;*/

        case OK:
            break;
        default://no dbe ocurrir
            //OutErrorLexico<<"Error 01 : state= "<<state<<"\n\a";
            state=OK;
            currentToken=ERROR;
            break;

        }//fin de switch

        if(save)
            lexema+=c;


    }//fin de while

    if(currentToken==CADENA)
    {
        lexema=lexema.substr(1,lexema.size()-2);
    }
    if(currentToken==ID)
    {	map<string,Token_t>::iterator it;
		it=reser.find(lexema);
		if(it!=reser.end()){
		currentToken=it->second;
		}
        else
        {
            currentToken=ID;
            TokenAttrib atr(lexema);
            atr.setToken(ID);
            atr.setStr_Tok("ID");

            table_ID.insert(lexema,atr);

        }
    }
	if(currentToken==ERROR){lexema="error";}

    tokens.push_back(currentToken);
    Token tok(currentToken,lexema);

    printToken2(currentToken,lexema);
    return tok;
    //cout<<"GetToken Finaliza\n";
}//fin de GetToken()
/**
*  GetToken2()
*/
/*void Scanner::getToken2()
{   //int state=-1;
    //char c=GetChar();
    while(getToken()!=ENDFILE){}
    }*/

//}

/**
*  printToken
*/
void Scanner::printToken2(Token_t token,string lexema){

	
	switch(token){
		case ID:
			cout<<"ID, valor: "<<lexema.c_str()<<"\n";
			break;
		case NUM:
			cout<<"NUMERO ENTERO, valor: "<<lexema.c_str()<<"\n";
			break;
		case CADENA:
			cout<<"CADENA, valor: "<<lexema.c_str()<<"\n";
			break;
		case LESS:	
			cout<<"LESS\n";
			break;
		case GREATER:	
			cout<<"GREATER\n";
			break;
		case INCREMENT:
			cout<<"INCREMENT\n";
			break;
		case LLAVE_A:
			cout<<"LLAVE_A\n";
			break;
		case LLAVE_C:
			cout<<"LLAVE_C\n";
			break;
		case PAR_A:
			cout<<"PAR_A\n";
			break;
		case PAR_C:
			cout<<"PAR_C\n";
			break;
		case COMA:
			cout<<"COMA\n";
			break;
		case PUNTOYCOMA:
			cout<<"PUNTOYCOMA\n";
			break;
		case POINT:
			cout<<"POINT"<<endl;
			break;
        case IF:
			cout<<"IF\n";
            break;
        case ELSE:
			cout<<"ELSE\n";
			break;
		case ASTERISCO:
			cout<<"ASTERISCO\n";
			break;
		case IGUAL2:
			cout<<"IGUAL2\n";
			break;
		case ERROR:
			cout<<"ERROR\n";
			cout<<"Error 1:Token desconocido: "<<lexema.c_str()<<"\n";
			break;
        case INTEGER:
			cout<<"INTEGER\n";
			break;
		case DOUBLE:
			cout<<"DOUBLE"<<endl;
			break;
        //case COMPLEJO:
		//	cout<<"COMPLEJO\n";
		//	break;
        case COR_A:
			cout<<"COR_A\n";
			break;
        case COR_C:
			cout<<"COR_C\n";
			break;
		case ENDFILE:
			cout<<"ENDFILE\n";
			break;
//        case PROCEDURE:
  //          cout<<"PROCEDURE\n";
   //         break;
		case CLASS:
			cout<<"CLASS"<<endl;
			break;
		case COBEGIN:
			cout<<"COBEGIN"<<endl;
			break;
		case WRITES:
			cout<<"WRITES"<<endl;
			break;
		case VOID:
			cout<<"VOID"<<endl;
			break;
//		case C:
//			cout<<"C\n"<<endl;
//			break;
//		case D:
//			cout<<"D\n"<<endl;
//			break;
		case WHILE:
			cout<<"WHILE"<<endl;
			break;
		case RETURN:
			cout<<"RETURN"<<endl;
			break;
		case THIS:
			cout<<"THIS"<<endl;
			break;
      case REGION:
			cout<<"REGION"<<endl;
			break;
		case IN:
			cout<<"IN"<<endl;
			break;
		case DOLARFIN:
      	    cout<<"DOLARFIN\n";
			break;
		default://no debe ocurrir
			cout<<"Error 02: Token desconocido\n";
	}

}//fin de printToken(...)


/**
*  init_Tables
*/
void Scanner::init_Tables()
{

}
