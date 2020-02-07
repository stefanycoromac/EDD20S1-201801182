// [EDD]ListaSimple.cpp  201801182 Stefany Coromac 

#include <iostream>
#include <conio.h>
using namespace std; 
int tamanio = 0; 
//Nodo* lista = NULL;

struct estudiante {
	int carne; 
	string nombre; 
};

 struct Nodo {
	 int id; 
	 estudiante *estudiante;
	 Nodo *siguiente; 
} ; 


 void insertarLista(Nodo*& lista, estudiante*& nuevo_estudiante) { //Insertar al final de la lista 
	 Nodo* nuevo_nodo = new Nodo();
	 nuevo_nodo->estudiante = nuevo_estudiante; 
	 nuevo_nodo->id = tamanio++; 

	 Nodo* aux1 = lista; 
	 Nodo* aux2 = NULL; 

	 while ((aux1 != NULL)) {
		 aux2 = aux1; 
		 aux1 = aux1->siguiente; 
	 }

	 if (lista == aux1)
	 {
		 lista = nuevo_nodo; 
	 }
	 else {
		 aux2->siguiente = nuevo_nodo; 
	 }
	 nuevo_nodo->siguiente = aux1; 
	 cout << "Se ha guardado el registro \n "; 

 }; 
  
 void insertarInicio(Nodo*& lista, estudiante*& nuevo_estudiante) { // insertar al inicio de la lista 
	 Nodo* nuevo_nodo = new Nodo();
	 nuevo_nodo->estudiante = nuevo_estudiante;
	 nuevo_nodo->id = tamanio++;
	 nuevo_nodo->siguiente = lista;
	 lista = nuevo_nodo;
	 

	 cout << "Elemento se agrego al inicio de la lista\n";
 }

 void buscarLista(Nodo*& lista, int carnetEstudiante) {
	 bool validacion = false; 
	 Nodo* actual = new Nodo(); 
	 actual = lista; 

	 while (actual != NULL) {
		 if (actual->estudiante->carne == carnetEstudiante)
		 {
			 validacion = true; 
		 }
		 actual = actual->siguiente; 
	 }

	 if (validacion == true)
	 {
		 cout << "Se encontro al Estudiante \n"; 
	 }
	 else {
		 cout << "El Estudiante no se encontro en la lista\n";
	 }
 }

 void eliminar(Nodo*& lista, int nodoId) {
	 if (lista != NULL)
	 {
		 Nodo *aux_borrar; 
		 Nodo *anterior = NULL; 

		 aux_borrar = lista; 

		 while ((aux_borrar != NULL) && aux_borrar->id == nodoId)
		 {
			 anterior = aux_borrar; 
			 aux_borrar = aux_borrar->siguiente; 
		 }

		 if (aux_borrar == NULL)
		 {
			 cout << "El Estudiante no ha sido encontrado"; 
		 }
		 else if (anterior == NULL)
		 {
			 lista = lista->siguiente; 
			 delete aux_borrar; 
			 cout << "El Estudiante ha sido eliminado";
		 }
		 else {
			 anterior->siguiente = aux_borrar->siguiente; 
			 delete aux_borrar;
			 cout << "El Estudiante ha sido eliminado";
		 }
	 }

 }
 

int main()
{
	Nodo* lista = NULL;

	//pruebas 

	int carnet;
	string nombreEst;

	cout << "Escriba Nombre de Estudiante \n ";
	cin >> nombreEst;
	cout << "Escriba carne de Estudiante \n";
	cin >> carnet;
	estudiante* nuevo = new estudiante();
	nuevo->carne = carnet;
	nuevo->nombre = nombreEst;
	insertarLista(lista, nuevo);

	cout << "Escriba Nombre de Estudiante \n ";
	cin >> nombreEst;
	cout << "Escriba carne de Estudiante \n";
	cin >> carnet;
	estudiante* nuevo1 = new estudiante();
	nuevo1->carne = carnet;
	nuevo1->nombre = nombreEst;
	insertarLista(lista, nuevo1);


	cout << "Escriba el numero de carnet para buscar un estudiante \n";
	cin >> carnet;
	buscarLista(lista, carnet);

	cout << "Escriba el numero de nodo a eliminar \n";
	cin >> carnet;
	eliminar(lista, carnet);

	cout << "Escriba el numero de carnet para buscar un estudiante \n";
	cin >> carnet;
	buscarLista(lista, carnet);
	 
}

