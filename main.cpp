#include"Uni.cpp"
#include<iostream>
using namespace std;
main(){
	string carrera,nombres,apellidos;
	int codigo;
	cout<<"...........Bienvenido Estudiante Universitario............"<<endl;
	cout<<"Ingrese carrera: ";
	cin>>carrera;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese codigo: ";
	cin>>codigo;
	
	Uni obj = Uni(nombres,apellidos,codigo,carrera);
	obj.mostrar();
	
	cout<<"----------Ingresar informacion que desee modificar---------"<<endl;
	cout<<"Ingrese carrera: ";
	cin>>carrera;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese codigo Universitario: ";
	cin>>codigo;
	obj.setCarrera(carrera);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setCodigo(codigo);
	//obj.mostrar();
	cout<<"------------Gracias, Informacion Modificada: --------------"<<endl;
	cout<<obj.getCarrera()<<endl;
	cout<<obj.getNombres()<<endl;
	cout<<obj.getApellidos()<<endl;
	cout<<obj.getCodigo()<<endl;
	
	
}
