#include <iostream>
using namespace std;

int main(){
	
	int notas[5]= {8,9,7,10,4};
	int suma = 0;
	for(int i=0; i<5;i++){
		
		cout << "notas " << i+1 << " : " << notas[i] <<endl;
		
		suma += notas[i];
		
		
	}
	int prom = suma / 5;
	
	cout << "Promedio es: " <<prom<<endl;
	return 0;
}
