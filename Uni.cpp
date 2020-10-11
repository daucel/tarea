#include "Estudiante.cpp"
#include<iostream>

using namespace std;
class Uni:Estudiante{
	// Atributos
	private : string carrera;
	public: 
	//Constructor
		Uni(string nom,string ape,int cod,string n):Estudiante(nom,ape,cod){
			carrera=n;
		}
	//modificar (set)
	void setCarrera(string n){carrera=n;}	
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}	 
	void setCodigo(int cod){codigo=cod;}	 
	 //mostrar (get) 
	 	string getCarrera(){return carrera;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	int getCodigo(){return codigo;}	
	// Metodos
		void mostrar(){
cout<<"--------------------------------------------------------"<<endl;
cout<<carrera<<", "<<endl;
cout<<nombres<<", "<<endl;
cout<<apellidos<<", "<<endl;
cout<<codigo<<", "<<endl;
}
};


