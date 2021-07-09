#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main(){
  int x, A[x],B[x],C[x],M[x],escolha=1,escolha1=1,contador=0,comparador;
  ofstream Arquivo;
  Arquivo.open("saida.txt");
  if(!Arquivo){
    cout<<"Erro!"<<endl;
    abort();
  }
  Arquivo.close();
  cout<<"Digite o total de discos"<<endl;
  cin>>x;
  cout<<"----------------------------"<<endl;
  while(x<1){
   cout<<"Digite o total de discos"<<endl;
   cin>>x;
  }
  for(int i=1;i<=x;i++){
    A[i]=i;
    M[i]=i;
    B[i]=0;
    C[i]=0;
  }
  while(escolha!=0){
    cout<<"[1]Mover discos"<<endl;
    cout<<"[0]sair"<<endl;
      cin>>escolha;
      cout<<"---------------------------"<<endl;
    switch(escolha){
      case 1:
      while(escolha1!=0){
        comparador=0;
        
        cout<<"[1]Mover de A para B"<<endl;
        cout<<"[2]Mover de B para A"<<endl;
        cout<<"[3]Mover de A para C"<<endl;
        cout<<"[4]Mover de C para A"<<endl;
        cout<<"[5]Mover de B para C"<<endl;
        cout<<"[6]Mover de C para B"<<endl;
        cout<<"[0]sair"<<endl;
        cin>>escolha1;
         int a,b;
         ofstream ArqGerado;
        ArqGerado.open("saida.txt", ios::app);
        if(!ArqGerado){
          cout<<"Erro"<<endl;
          abort();
        }
         if(escolha1==1){
          cout<<"Digite a posição do disco que quer remover de A"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em B"<<endl;
          cin>>b;
          B[b]=A[a];
          if(B[b]<B[b+1]){
          A[a]=0;
          }
         if(B[b]>B[b+1]){
           while(B[b]>B[b+1]){
              cout<<"Digite a posição do disco que quer remover de A"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em B"<<endl;
          cin>>b;
         B[b]=A[a];
         A[a]=0;
           }
         }
        
          ArqGerado<<"Moveu de A para B"<<endl;
          contador++;
        }
        if(escolha1==2){
          cout<<"Digite a posição do disco que quer remover de B"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em A"<<endl;
          cin>>b;
         A[b]=B[a];
         if(A[b]<A[b+1]){
          B[a]=0;
         }
         if(A[b]>A[a+1]){
           while(A[b]>A[a+1]){
           cout<<"Digite a posição do disco que quer remover de B"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em A"<<endl;
          cin>>b;
         A[b]=B[a];
           B[a]=0;
         }
         }
          ArqGerado<<"Moveu de B para A"<<endl;
          contador++;
        }
       if(escolha1==3){
          cout<<"Digite a posição do disco que quer remover de A"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em C"<<endl;
          cin>>b;
         C[b]=A[a];
         if(C[b]<C[b+1]){
          A[a]=0;
         }
         if(C[b]>C[b+1]){
           while(C[b]>C[b+1]){
              cout<<"Digite a posição do disco que quer remover de A"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em C"<<endl;
          cin>>b;
          C[b]=A[a];
          A[a]=0;
           }
         }
          ArqGerado<<"Moveu de A para C"<<endl;
          contador++;
        }
        if(escolha1==4){
          cout<<"Digite a posição do disco que quer remover de C"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em A"<<endl;
          cin>>b;
         A[b]=C[a];
         if(A[b]<A[b+1]){
          C[a]=0;
         }
         if(A[b]>A[b+1]){
           while(A[b]>A[b+1]){
              cout<<"Digite a posição do disco que quer remover de C"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em A"<<endl;
          cin>>b;
         A[b]=C[a];
           C[a]=0;
           }
         }
          ArqGerado<<"Moveu de C para A"<<endl;
          contador++;
        }
        if(escolha1==5){
          cout<<"Digite a posição do disco que quer remover de B"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em C"<<endl;
          cin>>b;
         C[b]=B[a];
         if(C[b]<C[b+1]){
          B[a]=0;
         }
         if(C[b]>C[b+1]){
           while(C[b]>C[b+1]){
             cout<<"Digite a posição do disco que quer remover de B"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em C"<<endl;
          cin>>b;
         C[b]=B[a];
         B[a]=0;
           }
         }
          ArqGerado<<"Moveu de B para C"<<endl;
          contador++;
        }
        if(escolha1==6){
          cout<<"Digite a posição do disco que quer remover de C"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em B"<<endl;
          cin>>b;
         B[b]=C[a];
         if(B[b]<B[b+1]){
            C[a]=0;
         }
          if(B[b]>B[b+1]){
            while(B[b]>B[b+1]){
              cout<<"Digite a posição do disco que quer remover de C"<<endl;
          cin>>a;
          cout<<"Digite a posição do disco em B"<<endl;
          cin>>b;
         B[b]=C[a];
         C[a]=0;
            }
          }
          ArqGerado<<"Moveu de C para B"<<endl;
          contador++;
        }
        cout<<"Torre A"<<endl;
      for(int i=1;i<=x;i++){
        cout<<A[i]<<endl;
      }
      cout<<"---------------------------"<<endl;
       cout<<"Torre B"<<endl;
      for(int i=1;i<=x;i++){
        cout<<B[i]<<endl;
      }
      cout<<"---------------------------"<<endl;
       cout<<"Torre C"<<endl;
      for(int i=1;i<=x;i++){
        cout<<C[i]<<endl;
      }
      cout<<"---------------------------"<<endl;
      
      for(int i=1;i<=x;i++){
        if(B[i]==M[i]){
          comparador++;
        }
      }
      cout<<comparador<<endl;
      if(comparador==x){
       ArqGerado<<"foi usados "<<contador<<" "<<" passos para conseguir, PARABÉNS"<<endl; 
       
      }
     
         ifstream Ler;

         Ler.open("saida.txt");
         if(!Ler){
           cout<<"Erro!"<<endl;
           abort();
         }
       string linha;
       while(getline(Ler,linha)){
         cout<<linha<<endl;
       }
       ArqGerado.close();
        
      }
      break;
      case 0:
      cout<<"FIM"<<endl;
      break;
      default: 
      cout<<"Não tem esta opção"<<endl;
      break;
    }
  }

  return 0;
}