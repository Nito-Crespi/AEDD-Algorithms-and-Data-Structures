#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero []={5,3,4,2,1},aux=0;
	cout<<"los numeros a ordenar"<<endl;
	for(int i=0;i<5;i++){
		cout<< numero[i]<<endl;
		
			
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(numero[j]>numero [j+1]){
				aux=numero[j];
				numero[j]=numero[j+1];
				numero[j+1]=aux;
			}
		}
	}
	cout<<"los numeros ordenados"<<endl;
	for(int i=0;i<5;i++){
		cout<< numero[i]<<endl;
		
		
	}
	return 0;
}

