#include <iostream>
using namespace std;
struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *ptr_alumno=alumno;
void pedirdatos();
void mejorpromedio(Alumno *ptr_alumno);
int main(int argc, char *argv[]) {
	pedirdatos();
	mejorpromedio(ptr_alumno);
	return 0;
}
void pedirdatos(){
	for(int i=0;i<3;i++){
		fflush(stdin);//para vaciar el buffer porque no te deja cargar mas nombres
		cout<<"Ingresar datos del "<<i<<" alumno"<<endl;
		cout<<"Digite su nombre: "<<endl;
		cin.getline((ptr_alumno+i)->nombre, 30, '\n');
		cout<<"Digite su edad: "<<endl;
		cin>>(ptr_alumno+i)->edad;
		cout<<"Digite su promedio: "<<endl;
		cin>>(ptr_alumno+i)->promedio;
		
	}
}

void mejorpromedio(Alumno *ptr_alumno){
	float mayor=0; int pos=0;
	for(int i=0;i<3;i++){
		if ((ptr_alumno+i)->promedio >mayor){
			mayor=(ptr_alumno+i)->promedio;
			pos=i;
		}
	}
	cout<<"El mayor es: "<<mayor<<" le pertenece a: "<<(ptr_alumno+pos)->nombre;
	}

