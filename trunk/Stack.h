#ifndef STACK_H
#define STACK_H


/**
 *	Clase CNode Nodo de la LIsta enlazada CList
 */
template <typename T>
class CNode
{
	T dato;			//template
	CNode<T> *pNext;//puntero al siguiente nodo
	//publico
	public:
		//Constructor
		CNode(T date):dato(date),pNext(0){}
		CNode(){ pNext = 0; }
        CNode<T> *GetpNext(){return pNext; }
		CNode<T> **GetdpNext(){return &pNext;}
		//ingresar datos al nodo
		void Set(T date){ dato = date;}
		//sacar el dato del nodo
		T &Get(){ return dato;}
		//imprimir
		/*void Print(ostream &out)
		{
			out<<dato;
		}*/
};
/**
 *	Lista CList Lista enlazada
 */

template <typename T>
class CList
{
	//protegido
    protected:

		CNode<T> *pRoot; //puntero al primer Nodo de la Lista
		long int size; // tama� de la lista
		void Add(CNode<T> **rParent, T dato);     //a�dir ordenadamente
		void Remove(CNode<T> **rParent, T dato);     //a�dir ordenadamente
	public:
		//Constructor
		CList():pRoot(0),size(0){}
		//Destructor
		~CList()
		{
			CNode<T> *ptmp;
			while (pRoot != 0)
			{
				ptmp = pRoot;
				pRoot = pRoot->GetpNext();
				delete ptmp;
			}
		}

		bool Find(T );  //Cabeceras no necesitan nombre, T
		//void Print(ostream &);
		void Add( T date) //A�dir datos a la lista
		{
        	Add(&pRoot,date);
		}
		void Remove( T date)
		{
		    void Remove(CNode<T> **pRef, T date);
		}
		// Necesario para la matriz esparsa
		T & Get (T val)
		{
		  CNode<T> *ptemp = pRoot;
	      while(ptemp && val > ptemp->Get())
            ptemp = ptemp->GetpNext();

	      if(ptemp && val == ptemp->Get())
		   return ptemp->Get();
		}
	class Iterator
	{
	  public:
	  CNode<T> *p;
	  Iterator(){}
	  Iterator(CNode<T> *np ): p(np){}
	  int operator==(Iterator &g) {return p==g.p;} //declaras tus operaciones
	  int operator!=(Iterator &g) {return p!=g.p;}
	  T &operator*(){return p->Get();}
	  Iterator operator++(){ return p=p->GetpNext();}
	};
	Iterator begin(){return pRoot;}
	Iterator end(){return 0;}

};

/*template<typename T>
void CList<T>::Print(ostream &out)
{
   CNode<T> *pTemp;   //puntero temporal
   pTemp=pRoot;       //temporal apunta a pRoot

   while(pTemp!=NULL)
   {
	   out<<pTemp->Get();      //mostrar el dato del CNodo al qeu apunta pTemp
	   pTemp=pTemp->GetpNext(); //pTemp contiene la direccin de pNext del cNodo
   }
}
*/
template<typename T>
bool CList<T>::Find(T dato)
{
	CNode<T> *ptemp = pRoot;
	while(ptemp && dato > ptemp->Get())
		ptemp = ptemp->GetpNext();

	if(ptemp && dato == ptemp->Get())
		return true;
  return false;
}

//A�dir ordenadamente
template<typename T>
void CList<T>::Add(CNode<T> **rParent, T dato)
{
	 while(*rParent && dato>(*rParent)->Get())
		 rParent=(*rParent)->GetdpNext();

	 CNode<T> *pNuevo=new CNode<T>(dato);

	 (*(pNuevo->GetdpNext()))=*rParent;
	 *rParent=pNuevo;
	 size++;
}
template<class  T>
void CList<T>::Remove(CNode <T> **rParent,T dato_)
{
	while(*rParent && dato_> (*rParent)->Get())
		rParent=(*rParent)->GetdpNext();
	if(*rParent && dato_==(*rParent)->Get())
	{
		CNode<T> *temp=*rParent;
		(*rParent)=(*rParent)->GetpNext();
		delete temp;
	}
}

/**
 * Clase CPila Pila dinamica
 */
template <typename T>
class CPila:public CList<T>
{
	public:
	void Push(T); //Poner
       T Pop();   //Sacar
	   T Top(){return CList<T>::pRoot->Get();}
	   void print();
       int IsEmpty(){return CList<T>::pRoot==0;};
};

template <typename T>
void CPila<T>::Push(T dato_)
{
		CNode<T> *pnew= new CNode<T>(dato_);
		*pnew->GetdpNext()=CList<T>::pRoot;
		CList<T>::pRoot=pnew;
		//     x  ->pRoot
		//	   |
		//|--|--|
		//|--|--|
		//|--|--| ->base de la pila
		CList<T>::size++;
}
template <typename T>
T CPila<T>::Pop()
{
	CNode<T> *ptemp=CList<T>::pRoot;
	T dato_;
	if(CList<T>::pRoot->GetpNext())
		CList<T>::pRoot=CList<T>::pRoot->GetpNext();
	else
		CList<T>::pRoot=0;
	dato_=ptemp->Get();
	delete ptemp;
	return dato_;

}

/*template <typename T>
void CPila<T>::print(){

   CNode<T> *pTemp;   //puntero temporal
   pTemp=pRoot;       //temporal apunta a pRoot

   while(pTemp!=NULL)
   {
	   cout<<pTemp->Get();      //mostrar el dato del CNodo al qeu apunta pTemp
	   pTemp=pTemp->GetpNext(); //pTemp contiene la direccin de pNext del cNodo
   }

}
*/

/*void main()
{
	CPila<int> Q;
	Q.Push(1);
	Q.Push(8);
	cout<<Q.Pop();
	cin.get();
}*/

#endif // STACK_H
