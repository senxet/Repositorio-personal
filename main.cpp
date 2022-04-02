#include <iostream>

//calcular el fraccional de un número
 
int main() {

int fac=1, num, i;

std::cout<<"digite el número al que le quiera calcular el factorial"<<std::endl;

std::cin>>num;

for (i=1; i<=num; i++){
  
  fac=fac*i;
  
}

std::cout<<"El valor de su número es: "<<fac;
}