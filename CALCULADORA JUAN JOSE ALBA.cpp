#include <iostream>
using namespace std;
//realizar un programa que permita calcular el factorial de un numero, la serie fibonacci, la resta y suma entre dos numeros  enteros y averiguar si un número es par o impar.

void getFibonacci(){
  int A=0, B=1, Fib, i=1, FS;
  cout<<"diga el dígito de Fibonacci que le gustaría calcular: \n";
  cin>>Fib;

  while(i<Fib){
    FS=A+B;
    A=B;
    B=FS;
    i++;
  }
  cout<<"El enésimo número de la serie de Fibonacci es: \n";
  cout<<FS<<endl;
}

void getFactorial(){
  int Factorial=1 , num;
  cout<<"por favor ingrese el numero al que le desea calcular el factorial \n";
  cin>>num;
  
  for(int i=1; i<=num; i+=1){

    Factorial=Factorial*i;
    
  }
  cout<<"el resultado de su operacion fue: \n"<<Factorial;
}

void getResta(){
  int A, B, resta;
  cout<<"Por favor ingrese 2 números que quiera restar entre sí \n";
  cin>>A;
  cin>>B;

  resta=A+B;
  cout<<"El resultado de la resta fue: \n"<<resta;
}

void getSuma(){
  int suma, A, B;
  cout<<"Por favor ingrese el primer número \n";
  cin>>A;
  cout<<"Ahora ingrese el otro número que desea sumar con el primero \n";
  cin>>B;
  suma=A+B;
  cout<<"el resultado de la suma fue:   "<<suma<<endl;
}

void getParImpar(){
  int long long num;
  cout<<"Por favor ingrese el número el cual desea saber si es par o impar"<<endl;
  cin>>num;
  if(num%2==0){
    
    cout<<"El número que ingresó es un número par"<<endl;
  
  }else{
    cout<<"El numero que ingresó es un número impar"<<endl;
  }
}


int main() {
  int operacion;
  int otro;
  int X, Y;
do{

cout<<"por favor ingrese la operación que desea realizar: \n";
cout<<"Numero 1 para Fibonacci, Numero 2 para Factorial, numero 3 para resta, 4 para suma y 5 para saber si su número es par o Impar:  \n";

  cin>>operacion;
  
  switch(operacion){
    case 1: getFibonacci(); break;
    case 2: getFactorial(); break;
    case 3: getResta(); break;
    case 4: getSuma(); break;
    case 5: getParImpar(); break;
   default: cout<<"No sea manteco, por favor seleccione una de la 4 operaciones anteriores \n";
  
  }
  cout<<"si quiere hacer otra operación ingrese 1, de lo contrario ingrese cualquier otro numero y así, el programa tendrá fin \n";
  cin>>otro;
}while(otro==1);


}