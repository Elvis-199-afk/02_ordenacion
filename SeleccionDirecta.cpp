#include<iostream>
using namespace std;

void seleccionDirecta(int[],int);

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
	seleccionDirecta(arr,n);
	cout<<"\nEl arreglo ingresado ordenado mediante la seleccion directa es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

void seleccionDirecta(int arr[],int n){
	int menor,k;
	for(int i=0;i<n;i++){
		menor=arr[i];
		k=i;
		for(int j=i+1;j<n;j++){
			if(menor>arr[j]){
				menor=arr[j];
				k=j;
			}
		}
		arr[k]=arr[i];
		arr[i]=menor;
	}
	
	
}