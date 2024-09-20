#include<iostream>
using namespace std;

void quickSort(int[],int);
void reduce(int[],int,int);
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
	
	quickSort(arr,n);
	cout<<"\nEl arreglo ingresado, ordenado mediante el ordenamiento rapido es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

void quickSort(int arr[],int n){
	reduce(arr,0,n-1);
	
}
void reduce(int arr[],int inicio,int final){
	int izq,der,pos,cen;
	izq=inicio;
	der=final;
	pos=izq;
	cen=1;
	while(cen==1){
		cen=0;
		while(arr[pos]<=arr[der]&&pos!=der){
			der--;
		}
		if(pos!=der){
			int aux=arr[pos];
			arr[pos]=arr[der];
			arr[der]=aux;
			pos=der;
			while(arr[pos]>=arr[izq]&&pos!=izq){
				izq++;
			}
			if(pos!=izq){
				int aux=arr[pos];
				arr[pos]=arr[izq];
				arr[izq]=aux;
				pos=izq;
				cen=1;
			}
		}
		if(pos-1>inicio){
			reduce(arr,inicio,pos-1);
		}
		if(pos+1<final){
			reduce(arr,pos+1,final);
		}
	}
}