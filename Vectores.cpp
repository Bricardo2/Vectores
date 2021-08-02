#include <iostream>
#include <stdlib.h>
using namespace std;
//vectores y funciones
void leer_vector (int num[],int tamanio)
{
	//los vectores siempre pasaran en referencia
	for (int i=0;i<tamanio;i++){
		cout<<"ingrese el elemento # "<<i+1<<endl;
		cin>>num[i];
	}

}
void imprimir_vector(int vector[],int tamanio)
{
		cout<<"elementos del vector :"<<endl;
	for (int i=0;i<tamanio;i++){
	cout<<vector[i]<<endl;
	}
}
//suma vector
int suma_vector(int vector[], int tamanio){
	int suma=0;
	for (int i=0;i<tamanio;i++)
	{
	suma= suma + vector[i];	
	}	
	return suma;
}
//realizar el promedio de los elemntos del vector
double promedio_vec(int vector[], int tamanio){
	double promedio;
	promedio=suma_vector(vector,tamanio)/tamanio;
	return promedio;
}
//encontrar el maximo de un vector
void ma_vector(){
		int c;
		cout << "Ingrese la cantidad de valores para el vector: ";
			cin >> c;
			int vec[c];
				for(int x=0; x<c; x++){
		cout << "Ingrese el elemento #" << x << ": ";
			cin >> vec[x]; 
						} 
		double ma = vec[0];
					for(int i=1; i<c; i++){
						if(ma<vec[i]){
							ma = vec[i];
								}
					}

	cout<< "el mayor de los "<<c<<" vectores es el numero: "<< ma <<endl;	
}

//encontrar el minimo de un vector
void mi_vector(){
	int c;
	cout <<"Ingrese la cantidad de valores para el vector: ";
	cin >>c;
	int ve[c];
	for(int x=0; x<c; x++){
		cout << "Ingrese el elemento #" << x+1 << ": ";
		cin >> ve[x]; 
	} 
	double me = ve[0];
	for(int i=1; i<c; i++){
		if(me>ve[i]){
			me = ve[i];
		}
	}
	cout << "el mayor de los "<<c<<" vectores es el numero: "<< me << endl;	
}
//3.funcion que vuelve por referencia los maximo y minimos

//4. numeros aletorios para el vector
void vec_aletorio(){
int ale;
ale=rand();
int vec[ale];
cout<<"el vector aletorio es "<<vec[ale]<<endl;
}
int main (){
//actividad en clase
//vectores y funciones
	const int max=7;
		int num[max];	
			leer_vector(num,max);	
				imprimir_vector(num,max);	
					cout<<endl<<num[6];
	//Realize la sumatoria de los elementos
		int suma=suma_vector(num,max);
			cout<<"la suma es igual a "<<suma<<endl;
				cout<<"el promedio es "<<promedio_vec(num,max)<<endl;
				                //tarea
								//1.maximo del vector (tarea) 
								ma_vector();
								//2.minimo del vector (tarea) 
								mi_vector();
								//3. Funcion por referencia de maximo y minimos
								//4. numeros aletorios para el vector (tarea)
								vec_aletorio();
					return 0;	
}
