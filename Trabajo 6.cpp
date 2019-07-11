///Danilo Abella ; Rodolfo Zuñiga
///Licenciatura en Ciencias de la Compuitacion
///USACH
///Compilador:Code-Blocks 13.12
///Profesora: Rosa Barrera
///SO: Windows 8.0

#include <iostream>

using namespace std;

///-------------------------------------------------------------------------------////
///Funciones///

int perfecto (int a);
void llenar (int a[20], int n);
int pide_n();

///-------------------------------------------------------------------------------////
///Programa Principal

int main ()
{int a[20],x,i,l,f,cont;
 char v[6]={'a','e','i','o','u','\0'};
 char c[22]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','\0'};
 char d[28];
 l=pide_n();
 llenar(a,l);
 x=0;
 i=0;
 f=0;
///-------------------------------------------------------------------------------////
///Nuevo arreglo de caracteres que se genera
 cout<<"\nNuevo arreglo de caracteres\n B=";
 while (a[x]!=a[l])
 {  ///Vocales
    if (perfecto(a[x])==1)
    { cout<<v[i]<<",";
      i++;
    }
    ///Consonantes
    if (perfecto(a[x])==0)
    { cout<<c[f]<<",";
      f++;
    }
    x++;
 }
///-------------------------------------------------------------------------------////
///Al parear consonantes con vocales
 x=0;
 i=0;
 f=0;
cout<<"\nAl parear consonantes con vocaes queda:\n B=";
  while (a[x]!=a[l]&&c[f]!='\0'&&v[i]!='\0')
 {  ///Vocales
    if (perfecto(a[x])==1)
    {  i++;
       cont=cont++;
    }
    ///Consonantes
    if (perfecto(a[x])==0)
    { f++;
      cont=cont+2;
    }
    ///Imprimir en pantalla segun tipo de letra.
    if (cont%2!=0)
    {cout<<v[i]<<",";
    }
    if (cont%2==0)
    {cout<<c[f]<<",";
    }
    if (cont>2)
    {cont=0;
    }
    x++;
 }
}

///-------------------------------------------------------------------------------////
///Funciones///

///-------------------------------------------------------------------------------////
///Funcion 1

int perfecto(int a)
{ int suma=0,b=1;
  while(suma<a)
  { if((a%b)==0);
    {  suma=suma+b;
    }  b++;
  }
  if ((suma)==a)
    { return 1;
    }
    else
    {return 0;
    }
}

///-------------------------------------------------------------------------------////
///Funcion 2

void llenar (int a[20], int n)
{ int i;
    for(i=0; i<n; i++)
    { cout<<"Ingrese dato"<<i+1<<endl;
      cin>>a[i];
    }
}

///-------------------------------------------------------------------------------////
///Funcion 3

int pide_n()
{ int n;
do{
cout<<"Ingrese largo del arreglo<="<<20<<":"<<endl;
cin>>n;
if (n<0||n > 20)
cout <<"No valido, intente nuevamente:"<<endl;
}while(n<0||n>20);
return n;
}
