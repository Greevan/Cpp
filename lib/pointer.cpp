#include<iostream>
using namespace std;
int main(){
    int p[]={1,2,3,4,5,6};
    int *k;
    
    k=p;
    cout<<"The contents of the array are :"<<endl;
    for(int i=1;i<=6;i++){
        cout<<*k<<endl;
        k++;
    }
    return 0;
}