#include <iostream>
using namespace std;
#define N 1008

int weight[N],iq[N],position[N];

int lis(int weight[], int iq[], int n) {
    int *lis, i, j, maxLIS=0;
    lis=(int*) malloc (sizeof(int) * n);

    for(int i=0; i<n; i++) {
        lis[i]=1;
    }

//  Se cambia el criterio del LIS (Peso creciente e IQ decreciente)
    for(int i=1; i<n;i++) {
        for(int j=0; j<i; j++) {
            if(weight[j]<weight[i] && iq[j]>iq[i] && lis[i]<lis[j]+1 ) {
                lis[i]=lis[j]+1;
                // Creamos un vector auxiliar que en la posicion i guarda la posicion del anterior
                // termino elegido.
                position[i]=j;
            }
        }
    }

    // Elegimos el mayor LIS (redundante xd). Tambien elegimos la ultima posicion elegida.
    maxLIS=-1;
    int maxLISindex;
    for(int i=0; i<n;i++) {
        if(lis[i]>=maxLIS) {
            maxLIS=lis[i];
            maxLISindex=i;
        }
    }

    free(lis);
    // Creamos un vector reconstruction que termine en el maxLISIndex (ult posicion elegida)
    // Guardamos los elementos para la reconstruccion.
    cout<<maxLIS<<endl;
    int reconstruction[maxLIS];
    reconstruction[0]=maxLISindex+1;

    for(int k=1; k<maxLIS;k++) {
        reconstruction[k]= position[maxLISindex]+1;
        maxLISindex=position[maxLISindex];
    }

    for (int k=maxLIS-1; k>=0;k--) {
        cout<<reconstruction[k]<<endl;
    }
}

int main () {
    int i=0;
    while(cin>>weight[i]>>iq[i]) {
        i++;
    }

    lis(weight,iq,i+1);

    return 0;
}