#include<propietario.cpp>
#incude<iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fecha_de_nacimiento;
	int telefono;
	
	cout<<"ingresar nit";
	cin>>nit;
	cout<<"ingresar nombres";
	cin>>nombres;
	cout<<"ingresar apellidos";
	cin>>apellidos;
	cout<<"ingresar direccion";
	cin>>direccion;
	cin>>fecha_de_nacimiento;
	cout<<"ingresar fecha de nacimiento";
	cin>>telefono;
	
	//instancia de objetos
	cliente obj = cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	cout<<"ingresar nit";
	cin>>nit;
	cliente obj2 = cliente(nombres,apellidos,direccion,telefono,nit);
	obj2.mostrar()
	
	cout<<"ingresar nit: ";
	cin>>nit;
	obj.setnit(nit);
	obj.mostrar();
}
