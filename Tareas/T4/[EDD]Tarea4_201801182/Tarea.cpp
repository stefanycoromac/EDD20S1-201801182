
#include <iostream>

using namespace std; 

class Nodo
{

private:
	Nodo* anterior;
	Nodo* siguiente;
	string informacion ;
public:
	
	void setAnterior(Nodo*);
	void setSiguiente(Nodo*);
	void setInfo(string); 
	string getInfo(); 
	Nodo* getAnterior();
	Nodo* getSiguiente();
};



void Nodo::setAnterior(Nodo* anterior) {
	this->anterior = anterior; 
}

Nodo* Nodo::getAnterior() {
	return anterior; 
}

void Nodo::setSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente; 
}

Nodo* Nodo::getSiguiente() {
	return siguiente; 
}

void Nodo::setInfo(string s) {
	this->informacion = s; 
}

string Nodo::getInfo() {
	return informacion; 
}

class Lista
{
private:
	Nodo* inicio = NULL;
	Nodo* ultimo;
	int tamanio;

public:
	Lista();
	void InsertarPrimero(Nodo*);
	void EliminarUltimo();
	Nodo* Buscar(string);


};

Lista::Lista() {
	inicio = NULL;
	ultimo = NULL;
	tamanio = 0;
}

void Lista::InsertarPrimero(Nodo* nuevo) {

	if (inicio == NULL) // Esta vacia la lista
	{
		inicio = nuevo;
		ultimo = nuevo;
		tamanio++;

	}
	else
	{
		inicio->setAnterior(nuevo);
		nuevo->setSiguiente(inicio);
		inicio = nuevo;
		tamanio++; 
	}
}

void Lista::EliminarUltimo() {

	if (inicio == NULL) {
		//No hay nada en la lista 
	}
	else if (inicio == ultimo)
	{
		ultimo = NULL; 
		inicio = NULL; 
		tamanio--;
	}
	else 
	{
	
		ultimo = ultimo->getAnterior(); 
		ultimo->setSiguiente(NULL); 
		tamanio--; 

		//ultimo->getAnterior = ultimo; 
		//ultimo->getSiguiente = NULL; 
	}
}

Nodo* Lista::Buscar(string s) {
	Nodo* aux = inicio; 
	Nodo* p; 

	for (size_t i = 0; i < tamanio; i++)
		if (aux->getInfo() == s)
		{
				p = aux;
				return p;
		}
		aux = aux->getSiguiente(); 
		
}

int main() {




	return 0; 
}