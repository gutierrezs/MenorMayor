#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

int main()
{
	//Jason Gutierrez Sanchez 15-EIST-1-097
	
	
            int num1,num2,num3;
            string nombre, matricula;
            
            nombre= "Jason Gutierrez";
            matricula= "15-EIST-1-097";
            
           cout << "Identificar Los Numero De Menor a Mayor" << endl;
        
            printf("Introduzca número 1:\n");
    scanf("%d",&num1);

            printf("Introduzca número 2:\n");
    scanf("%d",&num2);

            printf("Introduzca número 3:\n");
    scanf("%d",&num3);

    if (num1<num2 && num1<num3)
    {
       if (num2<num3)
       {
       	printf("Los numeros de Menor a Mayor Son: \n");
        printf("%d\n",num1);
        printf("%d\n",num2);
        printf("%d\n",num3);
       }
       else
       {
       	printf("Los numeros de Menor a Mayor Son: \n");
        printf("%d\n",num1);
        printf("%d\n",num3);
        printf("%d\n",num2);
       }
    }
    else if (num2<num1 && num2<num3)
    {
       if (num1<num3)
       {
       	printf("Los numeros de Menor a Mayor Son: \n");
        printf("%d\n",num2);
        printf("%d\n",num1);
        printf("%d\n",num3);
       }
       else
       {
       	printf("Los numeros de Menor a Mayor Son: \n");
        printf("%d\n",num2);
        printf("%d\n",num3);
        printf("%d\n",num1);
       }
    }
    else if (num3<num1 && num3<num2)
    {
       if (num1<num2)
       {
       	printf("Los numeros de Menor a Mayor Son: \n");
        printf("%d\n",num3);
        printf("%d\n",num1);
        printf("%d\n",num2);
       }
       else
       {
       	printf("Los numeros de Menor a Mayor Son: \n");
        printf("%d\n",num3);
        printf("%d\n",num2);
        printf("%d\n",num1);
       }
    }
   	
   	 cout << "Nombre: " << nombre << endl << "Matricula: " << matricula << endl;
   	
    system("PAUSE");     
    return 0;
}
