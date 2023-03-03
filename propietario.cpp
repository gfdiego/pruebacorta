#include<persona.cpp>
#include<iostream>
using namespace std;

class propietario: persona{
	private:string nit;
	private: string cui;
	
	propietario(string nom,string ape,string dir,string fecha,int tel,string n):persona (nom,ape,dir,fecha,tel){
		nit=n;
	}
	void setnit(string n){nit=n;}
	void setnombre(string nom){return nombre=nom;}
	void setapellido(string ape){return apellido=ape;}
	void setdireccion(string dire){return direccion=dir;}
	void setfecha_de_nacimineto(return string fecha_de_nacimineto){fecha_de_nacimineto=fecha;}
	void settelefono(int telefono){return telefono=tel;}
	
	string getnit(){return nit;}
	string getnombre(){return nombre;}
	string getapellido(){return apellido;}
	string getdireccion(){return direccion;}
	string getfecha_de_nacimineto(){return fecha_de_nacimiento;}
	
	void mostrar (){
		cout<<"______________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellido","<<direccion","<<fecha_de_nacimineto","<<telefono<<endl;
		
	}
	
	
};
