#include<iostream>
using namespace std;

void swap(int* p1, int* p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main(){
    int a,b;
    cout<<"Enter the number a : ";
    cin>>a;
    cout<<"Enter the number b : ";
    cin>>b;
    swap(&a,&b);
    cout<<"After swapping : "<<a<<" "<<b;
    return 0;
}