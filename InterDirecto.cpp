#include<iostream>
#include<windows.h> //para mostrar 'ñ'
using namespace std;

void interDirDer(int[],int);
void interDirIzq(int[],int);
void interDirCen(int[],int);
void interDirBi(int[],int);
void mostrar(int[],int);
void insertar(int[],int&);
int main(){
	SetConsoleOutputCP(CP_UTF8); //para mostrar la 'ñ'
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
		cout<<"4. Intercambio directo por bidireccion\n";
		cout<<"5. Mostrar los datos ingresados (sin ordenar)\n";
		cout<<"6. Ingresar nuevamente los datos\n";
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
			case 4:
				system("cls");
				interDirBi(arr,n);
				system("pause");
				break;
			case 5:
				system("cls");
				mostrar(arr,n);
				system("pause");
				break;
			case 6:
				system("cls");
				insertar(arr,n);
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

void interDirDer(int arreglo[],int n){
	int arr[50];
	for(int i=0;i<n;i++){
		arr[i]=arreglo[i];
	}
	for(int i=0;i<n;i++){
		for(int j=n-1;j>0;j--){
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

void interDirIzq(int arreglo[],int n){
	int arr[50];
	for(int i=0;i<n;i++){
		arr[i]=arreglo[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int aux=arr[j+1];				
				arr[j+1]=arr[j];
				arr[j]=aux;
			}
		}
	}
	cout<<"Los datos ingresados ordenados por la izquierda es: \n\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void interDirCen(int arreglo[],int n){
	int arr[50];
	for(int i=0;i<n;i++){
		arr[i]=arreglo[i];
	}
	bool cen=true;
	int i=0;
	while(i<n-1&&cen){
		cen=false;
		for(int j=0;j<n-1-i;j++){
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

void interDirBi(int arreglo[],int n){
	int arr[50];
	for(int i=0;i<n;i++){
		arr[i]=arreglo[i];
	}
	
	int izq=0,der=n-1,k=0;
	while(izq<der){
		for(int i=der;i>izq;i--){
			if(arr[i-1]>arr[i]){
				int aux=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=aux;
				k=i;
			}
		}
		izq=k;
		for(int i=izq;i<der;i++){
			if(arr[i]>arr[i+1]){
				int aux=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=aux;
				k=i;
			}
		}
		der=k;	
	}
	cout<<"Los datos ingresados ordenados bidireccionalmente es: \n\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void mostrar(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertar(int arr[],int &n){
	cout<<"Ingrese cuantos datos desea: ";
	cin>>n;
	cout<<"\nIngrese los datos\n";
	for(int i=0;i<n;i++){
		cout<<i+1<<". ";
		cin>>arr[i];
	}
}