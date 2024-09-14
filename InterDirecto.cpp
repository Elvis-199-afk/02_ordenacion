#include<iostream>
using namespace std;

void interDirDer(int[],int);
void interDirIzq(int[],int);
void interDirCen(int[],int);

int main(){
	int n,op;
	cout<<"Ingrese cuantos datos desea: ";
	cin>>n;
	int arr[50];
	cout<<"\nIngrese los datos\n";
	for(int i=0;i<n;i++){
		cout<<i+1<<". ";
		cin>>arr[i];
	}
	
	
	
	do{
		system("cls");
		cout<<"\t\t=== ORDENACION ===\n\n";
		cout<<"1. Intercambio directo por derecha.\n";
		cout<<"2. Intercambio directo por izquierda.\n";
		cout<<"3. Intercambio directo por señal.\n";
		cout<<"0. SALIR\n";
		cout<<"Elige una de las opciones: ";
		cin>>op;
		switch(op){
			case 1:
				system("cls");
				interDirDer(arr,n);
				system("pause");
				break;
			case 2:
				system("cls");
				interDirIzq(arr,n);
				system("pause");
				break;
			case 3:
				system("cls");
				interDirCen(arr,n);
				system("pause");
				break;
			case 0:
				cout<<"\nSALIENDO ...\n";
				break;
			default:
				cout<<"Ingrese una de las opciones.\n";
				system("pause");
				break;
		}
	}while(op!=0);
	return 0;
}

void interDirDer(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			if(arr[j]<arr[j-1]){
				int aux=arr[j-1];				
				arr[j-1]=arr[j];
				arr[j]=aux;
			}
		}
	}
	cout<<"Los datos ingresados ordenados por la derecha es: \n\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void interDirIzq(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int aux=arr[j+1];				
				arr[j+1]=arr[j];
				arr[j]=aux;
			}
		}
	}
	cout<<"Los datos ingresados ordenados por la derecha es: \n\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void interDirCen(int arr[],int n){
	bool cen=true;
	int i=0;
	while(i<=n-1&&cen){
		cen=false;
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				int aux=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
				cen=true;
			}
		}
		i++;
	}
	cout<<"Los datos ingresados ordenados con señal es: \n\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

	