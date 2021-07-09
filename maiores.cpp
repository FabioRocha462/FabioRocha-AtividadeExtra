#include<iostream>
using namespace std;
void maiores(int vet){
  int x,n, vetor[n],contador=0;
  cout<<"digite quantos números devem ser gerados"<<endl;
  cin>>n;
  cout<<"Digite o valor de X"<<endl;
  cin>>x;
  srand(time(NULL));
  for(int i=1;i<=n;i++){
    vetor[i]=rand()%100;
  }
  for(int i=1;i<=n;i++){
    if(vetor[i]>x){
      contador++;
    }
  }
  cout<<"Existe "<<contador<<" números maiores que "<<x<<endl;

}
int main(){
  
  int vet;
  maiores( vet);

  return 0;
}