#include <iostream>
using namespace std;
class persona{
	protected : string nombre, apellido,direccion,fecha_de_nacimiento;
	
	 			int telefono;
	 
	 protected:
	 			persona() {
	 						
						 }
						 persona(string nom,string ape,string dir,string fecha,int tel){
						 	nombre = nom;
						 	apellido= ape;
						 	direccion= dir;
						 	fecha_de_nacimiento= fecha;
						 	telefono=tel;
						 }
	 
	
	
	
	
};

