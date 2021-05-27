#include <iostream>

using namespace std;

void MinMax(int *data,int *min,int*max){
    *min=data[0];
    *max=data[0];
    for(int i=1;i<10;i++){
        if(data[i] > *max){
            *max=data[i];
        }else if(data[i] < *min){
            *min=data[i];
        }
    }
}

int main(void){
    int data[10]={30,22,11,01,07,12,15,99,42,56};
    int min,max;
    MinMax(data,&min,&max);
    cout<<"O valorminimo e:"<<min<<endl;
    cout<<"O valor maximo e:"<<max<<endl;
    return 0;
}