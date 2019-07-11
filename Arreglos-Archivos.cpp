///Danilo Abellá / Rodolfo Zuñiga
///Licenciatura en Ciencias de la Computación
///Profesora: Rosa Barrero
///Compilador: Code-Blocks
///Fecha: 30/05/2014

#include <iostream>
#include <fstream>
#define MAX 50

using namespace std;

int Feliz (int num);                ///Averigua si un numero es feliz o no.
int esta(int num,int a[MAX],int i);      ///Confirma que un numero no se repita.
void mostrar(int a[MAX],int i);   ///Permite mostrar el largo de los arreglos.

///-----------------------------------------------------------------------------------------------///
///Programa Principal

int main ()
{   int num,a[MAX],i=0,d;
    char n[30];
    ifstream f;
    cout<<"(2)Ingrese Nombre del Archivo a leer:";
    cin>>n;
    f.open(n);
    if (f.fail())
    {   cout<<"\n\n\n              Archivo no existe"<<endl;
        cout<<""<<endl;
    }
    else
    {   while(!f.eof())
        {   f>>num;
            if ((Feliz(num)==1)&&!esta(num,a,i))
            {    a[i]=num;
                 i++;
            }
        cout<<"los numeros son:"<<num<<endl;
        mostrar(a,i);
        }
    }
f.close();
}


///-----------------------------------------------------------------------------------------------///
///Funciones///

///-----------------------------------------------------------------------------------------------///
///Función 1
///Averigua si un numero es feliz o no.

int Feliz (int nu)
{  int c=0,r,n,s,t=0;
    n=nu;
    do{
        s=0;
        do{
            r=n%10;
            n=n/10;
            s=(r,2);
        }while(n>0);
        n=s;
        c++;
    }while(n>=10);
    if(n==1)
    { ///El numero feliz.
        return 1;
    }
    else
    {///NO es feliz.
        return 0;
    }
}


///-----------------------------------------------------------------------------------------------///
///Funcion 2.
///Confirma que un numero no se repita.

int esta(int num,int a[MAX],int i)
{   int k;
    for (k=0;k<i;k++)
    {   if (num==a[k])
            return 1;
    }
return 0;
}

///-----------------------------------------------------------------------------------------------///
///Funcion 3.
///Permite mostrar el largo de los arreglos.

void mostrar(int a[MAX],int i)
{   int k;
    for (k=0;k<i;k++)
      cout<<a[k]<<endl;

}

