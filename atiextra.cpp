#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
int raizes(float a, float b, float c){
  float x1,x2, delta,d;
cout<<"Digite o valor de A"<<endl;
cin>>a;
cout<<"Digite o valor de B"<<endl;
cin>>b;
cout<<"Digite o valor de C"<<endl;
cin>>c;
delta=(pow(b,2))-(4*a*c);
d=sqrt(delta);
x1=((-1*b)+d)/(2*a);
x2=((-1*b)-d)/(2*a);
if((x1!=x2)&&(x1>x2)&&(delta>0)){
  float e;
  e=x1;
  x1=x2;
  x2=e;
  cout<<"Raizes diferentes "<<x1<<" "<<x2<<endl;
  return 2;
}else if((x1!=x2)&&(x1<x2)&&(delta>0)){
   cout<<"Raizes diferentes "<<x1<<" "<<x2<<endl;
  return 2;
  
}
if((x1==x2)&&(delta>0)){
  cout<<"raizes iguais "<<x1<<" "<<x2<<endl;
  return 1;
}
if(delta<0){
  x1=0;
  x2=0;
  cout<<"Delta negativo, não tem raizes reais"<<x1<<" "<<x2<<endl;
  return 0;
}

return 0;
}
int main(){
float a,b,c;
raizes(a,b,c);
  return 0;
}