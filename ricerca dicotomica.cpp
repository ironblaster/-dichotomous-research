#include <iostream>
#include <stdlib.h>
#define N 100 

using namespace std;
int ricerca(int [], int, int);
int main(){
           int Vet[N], n, ncerca, trovato,tmp;
            
         
           int i;
           cout<<("Inserisci la dimensione del vettore (MAX 100): ");
           cin>>(n);
           cout<<("Inserisci i numeri da caricare:\n");
           for(i=0; i<n; i++){
                    cout<<" numero "<<i+1<<": ";
                    cin>>Vet[i];
                    }
                    //ordinare array
	 for (int j = 0; j < n; j++ ) 
{

for (int i=n-1; i>=j; i--) 
  { 
  if (Vet[i]>Vet[i+1])
    { 
    tmp = Vet[i]; 
    Vet[i] = Vet[i+1]; 
    Vet[i+1] = tmp; 
    } 
  }

}
           // RICERCA DICOTOMICA 
           cout<<("Inserisci il numero da cercare: ");
           cin>>ncerca;
           trovato=ricerca(Vet, n, ncerca);
           if(trovato!=-1)
               cout<<"L'elemento e' stato trovato in posizione "<< trovato+1<<endl;
           else
               cout<<"Valore non trovato\n\n";
            
           system("pause");
           return 0;
           }
int ricerca(int Vet[], int n, int ncerca){
                        
                       int sx=0; 
                       int dx=n-1; 
                       int md;
                       int trovato=0;
                       while(sx<=dx && (!trovato)){ 
                                    md=(sx+dx)/2;
                                    if(ncerca==Vet[md])
                                        trovato=1;
                                    else if(ncerca>Vet[md])
                                        sx=md+1;
                                    else
                                        dx=md-1;
                                    }
                       if(trovato)    
                             return md;
                       else
                           return -1;
                           }
