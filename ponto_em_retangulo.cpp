#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
  int IEx,IEy,SDx,SDy,Px,Py,a,b;
  cout<<"Digite o valor de X para IE"<<endl;
  cin>>IEx;
  cout<<"Digite o valor de Y para IE"<<endl;
  cin>>IEy;
  cout<<"Digite o valor de X para SD"<<endl;
  cin>>SDx;
  cout<<"Digite o valor de Y para SD"<<endl;
  cin>>SDy;
  cout<<"Digite o valor de X para P"<<endl;
  cin>>Px;
  cout<<"Digite o valor de Y para P"<<endl;
  cin>>Py;
  if(IEx>SDx){
    a=SDx;
    SDx=IEx;
    IEx=a;
  }
  if(IEy>SDy){
    b=SDy;
    SDy=IEy;
    IEy=b;
  }
  for(int i =1;i<=SDx-IEx;i++){
    cout<<"*";
  }
  for(int i=1;i<=SDy-IEy;i++){
    cout<<"*"<<setw(SDx-IEx)<<"*"<<endl;
  }
  for(int i =1;i<=SDx-IEx;i++){
    cout<<"*";
  }
  cout<<endl;
  if(((Px>IEx)&&(Px<SDx))&&((Py>IEy)&&(Py<SDy))){
    cout<<"Pertence ao Retângulo"<<endl;
     for(int i =1;i<=SDx-IEx;i++){
    cout<<"*";
  }
  for(int i=1;i<=SDy-IEy;i++){
    cout<<"*"<<setw(SDx-IEx)<<"*"<<endl;
    if(i==SDy-Py){
      cout<<setw((Px-IEx)-1)<<"*";
    }
  }
  for(int i =1;i<=SDx-IEx;i++){
    cout<<"*";
  }
  }else{
    cout<<"Fora do Retângulo"<<endl;
  }
  if((Px==IEx)||(Py==SDy)){
    cout<<"Esta na borda"<<endl;
    for(int i =1;i<=SDx-IEx;i++){
    cout<<"*";
  }
  for(int i=1;i<=SDy-IEy;i++){
    cout<<"*"<<setw(SDx-IEx)<<"*"<<endl;
  }
  for(int i =1;i<=SDx-IEx;i++){
    cout<<"*";
  }
  }
  if((Py==IEy)||(Px==SDx)){
    cout<<"Esta na Borda"<<endl;
    for(int i =1;i<=SDx-IEx;i++){
    cout<<"*";
  }
  for(int i=1;i<=SDy-IEy;i++){
    cout<<"*"<<setw(SDx-IEx)<<"*"<<endl;
  }
  for(int i =1;i<=SDx-IEx;i++){
    cout<<"*";
  }
  }
  cout<<endl;
  return 0;
}