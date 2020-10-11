#include<iostream>
using namespace std;
class Estudiante{
	// Atributos
	protected : string nombres,apellidos;
				int codigo;	
	protected :
		Estudiante(string nom,string ape,int cod){
			nombres=nom;
			apellidos=ape;
			codigo=cod;	
		}
		
	// Metodos de accion
		void agregar();
		void mostrar();
};


