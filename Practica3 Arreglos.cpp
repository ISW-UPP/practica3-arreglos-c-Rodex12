#include <iostream>
using namespace std;

int main()
{
	int op;
	float vector1[10], suma = 0, media;
	int ix;
	//las flotantes no van dentro del switch
	
    cout << "MENU: "<< endl;
    cout << "1: Programa que pida 10 numeros y los muestre en orden inverso al que fueron agregados. \n"
	<< "2. Programa que pida 10 numeros, calcule su media y luego muestre los que estan por encima de la media. \n" 
	<< "3. Programa que pida 10 numeros, para que calcule cual es el mayor de ellos. \n"<< endl;
	
	cout << "Elija una opcion: "<< endl;
	cin >> op;
	
	switch (op)
	{
		{
		
		case 1:
			
    cout << "Introduce 10 numeros: "<< endl;
    for (ix = 1; ix < 11; ix++)
    {
        cout << ix << " valor: "<< endl;
        cin >> vector1[ix];
    }
   
    cout << "Los 10 numeros invertidos son: "<<endl;
    for (ix = 10; ix > 0; ix--)
    {
        cout << vector1[ix]<<endl;
    }
			
			break;
		}
		{
		
		case 2:
    
    cout << "Introduce 10 numeros: "<< endl;
    for (ix = 0; ix < 10; ix++)
    {
        cout <<"Introduce el " << ix + 1 << " valor: "<<endl;
        cin >> vector1[ix];
    }
    
    for (ix = 0; ix < 10; ix++)
    {
        suma += vector1[ix];
    }
    
    cout<<"\n";
    
    
    media=suma/10;
    
    cout<< "La media es: "<< media<<endl;
    
    cout << "\n";
    
    cout << "Los numeros adelante de la media: "<<endl;
    for (ix = 0; ix < 10; ix++)
    {
        
        if (vector1[ix] > media)
        
        {
        	cout << vector1[ix]<< endl;
		}
    }
        
		    break;
		}
		{
		
		case 3:
    int mayor = 0;
    
    cout << "Introduce 10 numeros: "<< endl;
    for (ix = 0; ix < 10; ix++)
    {
        cout << "Ingrese el " << ix + 1<< " valor: "<< endl;
        cin >> vector1[ix];
        
        //Sacar el numero mayor:
        if (vector1[ix] > mayor)
        {
        	mayor = vector1[ix];
		}
        
    }
    
	cout << "El mayor elemento del vector es: "<< mayor<< endl;
	
	return 0;
			break;
   }
        default:
        	cout << "Opcion incorrecta";
        	
	}
	return 0;
	
}

	


