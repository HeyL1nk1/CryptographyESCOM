#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int gcd(int a, int b);
int res(int x);

int main(){

  int x,rep;

  do{
        system("cls");
  cout<<"Ingresa numero o(x)"<<endl;
  cin>>x;
  cout<<"-->RES: "<<res(x)<<endl;
  cout<<"Continue..?"<<endl;
  cin>>rep;
  }while(rep == 1);

  return 0;

}

int res(int x){

    int cont=0;

cout<<"O("<<x<<") = ";
  for(int i=0; i<x ; i++){
    if(gcd(i,x)==1){
        cout<<i<<" ";
        cont++;
    }
  }
  cout<<" ||"<<endl;
  return cont;
}


int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
