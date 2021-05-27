#include <iostream>

using namespace std;

void Ordena(int *data){
    int aux=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(data[i]<data[j]){
                aux=data[i];
                data[i]=data[j];
                data[j]=aux;
            }
        }
    }
}

int main(void){
    int data[10]={30,22,11,01,07,12,15,99,42,56};
    int min,max;
    Ordena(data);
    cout<<"Vetor ordenado:"<<endl;
    for(int i=0;i<10;i++){
    cout<<data[i]<<endl;
    }
    min=data[0];
    max=data[9];
    cout<<"O valor minimo e: "<<min<<endl;
    cout<<"O valor maximo e: "<<max<<endl;
    return 0;
}