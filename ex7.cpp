#include<iostream>
using namespace std;
void swap(int a, int b){
  int  c;
  c=a;
  a=b;
  b=c;
  cout<<a<<" "<<b<<endl;
}
void ordena3(int vet){
  int vetor[3],a;
  string b;
  for(int i=0;i<3;i++){
    cout<<"Digite um número"<<endl;
    cin>>vetor[i];
  }
  cout<<"[V]decrescente"<<endl;
  cout<<"[F]crescente"<<endl;
  cin>>b;
  if(b=="F"){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(vetor[i]<vetor[j]){
        a=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=a;
        
        

      }
    }
  }
  for(int i=0;i<3;i++){
    cout<<vetor[i];
  }
cout<<endl;
  }
  if(b=="V"){
     for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(vetor[i]>vetor[j]){
        a=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=a;
        
        

      }
    }
  }
  for(int i=0;i<3;i++){
    cout<<vetor[i];
  }
  cout<<endl;
  }
}
void EHprimo(int a){
  int contador=0;
  cout<<"Digite um número"<<endl;
  cin>>a;
  for(int i=1;i<=a;i++){
    if(a%i==0){
      contador++;

    }
  }
  if(contador==2){
    cout<<"O número "<<a<<" é primo"<<endl;
  }else{
    cout<<"O número "<<a<<" Não é Primo"<<endl;
  }
}
void mdc(int a, int b, int c){
  int r=3,contador=0,n,h;
  int vetor[r];
  cout<<"Digite um número"<<endl;
  cin>>a;
  cout<<"Digite um número"<<endl;
  cin>>b;
  cout<<"Digite um número"<<endl;
  cin>>c;
  vetor[1]=a;
  vetor[2]=b;
  vetor[3]=c;
   for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
      if(vetor[i]>vetor[j]){
        n=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=n;
      }
    }
  }
  for(int i=1;i<=3;i++){
    cout<<vetor[i];
  }
 for(int i=1;i<=vetor[3];i++){
if((a%i==0)&&(b%i==0)&&(c%i==0)){
contador++;
if(contador==1){
h=i;
}
if(i>h){
  h=i;
}
}
 }
 cout<<"MDC é "<<h<<endl;
}
void mmc(int a, int b, int c){
  int r=3,n,h=1,d;
 int vetor[r];
 cout<<"Digite um número"<<endl;
 cin>>a;
 cout<<"Digite um número"<<endl;
 cin>>b;
 cout<<"Digite um número"<<endl;
 cin>>c;
 vetor[1]=a;
 vetor[2]=b;
 vetor[3]=c;
 for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
      if(vetor[i]<vetor[j]){
        n=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=n;
      }
    }
  }
   for(int i=1;i<=3;i++){
    cout<<vetor[i];
  }
  cout<<endl;
   for(int i=1;i<=vetor[3];i++){
     for(int j=1;j<=vetor[3];j++){
     if((a%i==0)||(b%i==0)||(c%i==0)){
     if(a%i==0){
       d=a/i;
       a=d;
       
     }
     if(b%i==0){
       d=b/i;
       b=d;
       
     }
     if(c%i==0){
       d=c/i;
       c=d;
     }
    h=h*i;
     }
 }
   }
cout<<"O MMC é "<<h<<endl;
cout<<endl;
}
void fatorial(int a){
  int t=1;
  cout<<"Digite o número"<<endl;
  cin>>a;
  for(int i=a;i>=1;i--){
     t=t*i;
     cout<<"x"<<i;
  }
  cout<<"="<<t<<endl;
}
int main(){
  int escolha=1;
  while(escolha!=0){
    cout<<"[1]Swap"<<endl;
    cout<<"[2]Ordena3"<<endl;
    cout<<"[3]EHprimo"<<endl;
    cout<<"[4]mdc"<<endl;
    cout<<"[5]mmc"<<endl;
    cout<<"[6]fatorial"<<endl;
    cout<<"[0]Sair"<<endl;
    cin>>escolha;
    switch(escolha){
      case 1:
      int a,b;
      cout<<"valor de A"<<endl;
      cin>>a;
      cout<<"Valor de B"<<endl;
      cin>>b;
      swap(a,b);
      break;
      case 2:
      int vet;
      ordena3(vet);
      break;
      case 3:
      int c;
      EHprimo(c);
      break;
      case 4:
      int a1,b1,c1;
      mdc(a1,b1,c1);
      case 0:
      cout<<"Fim"<<endl;
      break;
      case 5:
      int a2,b2,c2;
      mmc(a2,b2,c2);
      break;
      case 6:
      int f;
      fatorial(f);
      break;
      default:
      cout<<"Não tem essa opção"<<endl;
      break;

    }
  }
  return 0;
}