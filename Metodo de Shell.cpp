#include<iostream>
using namespace std;

void metodoShell(int[],int);

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
	
	metodoShell(arr,n);
	cout<<"\nEl arreglo ingresado, ordenado mediante el metodo de Shell es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

void metodoShell(int arr[],int n){
	int k,i,cen;
	k=n;
	while(k>0){
		k=k/2;
		cen=1;
		while(cen==1){
			cen=0;
			i=0;
			while(i+k<n){
				if(arr[i+k]<arr[i]){
					int aux=arr[i];
					arr[i]=arr[i+k];
					arr[i+k]=aux;
					cen=1;
				}
				i++;
			}
		}
	}
}