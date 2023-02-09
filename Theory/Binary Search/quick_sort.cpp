#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int particion(vector<int>&arreglo, int inicio, int final) {
	int pivote = arreglo[inicio];
	int i = inicio + 1;
	for(int j=i; j<=final;j++) {
		if(arreglo[j] < pivote) {
			swap(arreglo[i],arreglo[j]);
			i++;
		}
	}
	swap(arreglo[inicio], arreglo[i-1]);
	return i-1;
}

void quicksort(vector<int>&array, int inicio, int final) {
	if (inicio < final) {
		int pivote = particion(array, inicio,final);
		quicksort(array,inicio,pivote-1);
		quicksort(array,pivote+1,final);
	}
}

void imprimirArreglo(vector<int>array) {
	for (auto x : array) {
		cout << x << " ";
	}
	cout<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector<int>arreglo={15,0,2,10,20,17,5};
	imprimirArreglo(arreglo);
	quicksort(arreglo,0,arreglo.size()-1);
	imprimirArreglo(arreglo);

	return 0;
}