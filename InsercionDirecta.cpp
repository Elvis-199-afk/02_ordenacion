#include<iostream>
using namespace std;

void insercionDirecta(int[],int);

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
	
	insercionDirecta(arr,n);
	cout<<"\nEl arreglo ingresado, ordenado mediante la insercion directa es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

void insercionDirecta(int arr[],int n){
	int aux,k;
	for(int i=1;i<n;i++){
		aux=arr[i];
		k=i-1;
		while(k>=0&&aux<arr[k]){
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[k+1]=aux;
	}
	
}

