#include<iostream>
using namespace std;

void insercionBinaria(int[],int);

int main(){
	int arr[50],n;
	cout<<"Ingrese la cantidad de datos: ";
	cin>>n;
	do{
	 	if(n<1){
	 		cout<<"Ingrese un numero mayor a 0: ";
			cin>>n;
		}
		if(n>50){
			cout<<"Ingrese un numero menor a 51: ";
			cin>>n;
		}
	}while(n<1);
	cout<<"\nIngrese los datos: \n";
	for(int i=0;i<n;i++){
		cout<<i+1<<". ";
		cin>>arr[i];
	}
	
	insercionBinaria(arr,n);
	cout<<"\nEl arreglo ingresado, ordenado mediante la insercion binaria es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

void insercionBinaria(int arr[],int n){
	int aux,der,izq,m,j;
	for(int i=1;i<n;i++){
		aux=arr[i];
		izq=0;
		der=i-1;
		while(izq<=der){
			m=(izq+der)/2;
			if(aux<arr[m]){
				der=m-1;
			}else{
				izq=m+1;
			}
		}
		j=i-1;
		while(j>=izq){
			arr[j+1]=arr[j];
			j--;
		}
		arr[izq]=aux;
	}
}