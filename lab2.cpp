#include <iostream>
#include <cstdlib>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

long double factorial(double x);
double area ( double x1 ,double y1 ,double x2 ,double y2 ,double x3 ,double y3 ,double x4 ,double y4);

int main(int argc, char*argv[]){
	int opcion;
	double ex1,ex2,ex3,ex4,ye1,ye2,ye3,ye4;
	do{
		cout<<"1) Ejercicio 1"<<endl;
		cout<<"2) Ejercicio 2"<<endl;
		cin>>opcion;

		if(opcion==1){
			double numero;
			cout<<"Ingrese numero: "<<endl;
			cin>>numero;

			cout<<" = "<<factorial(numero)<<endl;
		}else{
			if(opcion==2){
				cout<<"Ingrese x1: "<<endl;
				cin>>ex1;
				cout<<"Ingrese y1: "<<endl;
				cin>>ye1;
				cout<<"Ingrese x2: "<<endl;
				cin>>ex2;
				cout<<"Ingrese y1: "<<endl;
				cin>>ye2;
				cout<<"Ingrese x3: "<<endl;
				cin>>ex3;
				cout<<"Ingrese y3: "<<endl;
				cin>>ye3;
				cout<<"Ingrese x4: "<<endl;
				cin>>ex4;
				cout<<"Ingrese y4: "<<endl;
				cin>>ye4;

				cout<<"El area es= "<<area(ex1,ye1,ex2,ye2,ex3,ye3,ex4,ye4)<<endl;

			}
		}
		
	}while(opcion=3);




return 0;
}



long double factorial(double x){
	double result = 1;
	for(int i = 1; i < x+1; i++){
		result=result*i;
	}
return result; 
}

double area ( double x1 ,double y1 ,double x2 ,double y2 ,double x3 ,double y3 ,double x4 ,double y4){
	double area =0;
    //  dis es igual a distancia
    double dis1,dis2,dis3,dis4,dis5 ;
    // semi es igual semiperimetro 
    double semiP1,semip2;
    // peri es igual a perimetro
    double peri1, peri2;
    // altu es igual altura
    double altu1, altu2, altu3,altu4,altu5,altu6;

    dis1 = sqrt( pow ((x2-x1),2.0) + pow ((y2-y1),2.0));
    dis2 =   sqrt( pow ((x4-x2),2.0) + pow ((y4-y2),2.0));
    dis3 =  sqrt( pow ((x4-x3),2.0) + pow ((y4-y3),2.0));
    dis4 =  sqrt( pow ((x3-x1),2.0) + pow ((y3-y1),2.0));
    dis5 = sqrt( pow ((x1-x4),2.0) + pow ((y1-y4),2.0));

    cout<< dis1 << endl;
    cout<< dis2 << endl;
    cout<< dis3 << endl;
    cout<< dis4 << endl;
    cout<< dis5 << endl;

    cout << "triangulo 1 mide " << endl;
    cout << "lado1: "<<dis2<< endl;
    cout << "lado2: "<<dis1 << endl;
    cout << "lado3: "<< dis5 << endl;
    semiP1 = (dis1+dis2+dis5)/2;
    peri1 = (dis1+dis2+dis5);
    cout << "perimetro: "<< peri1<<endl ;
    cout << "semiperimetro: "<< semiP1 <<endl;
    altu1 = (2/dis2)* sqrt (semiP1*(semiP1-dis2)*(semiP1-dis1)*(semiP1-dis5));
    altu2 = (2/dis1)* sqrt (semiP1*(semiP1-dis2)*(semiP1-dis1)*(semiP1-dis5));
    altu3 = (2/dis5)* sqrt (semiP1*(semiP1-dis2)*(semiP1-dis1)*(semiP1-dis5));
    cout << "altura1: "<< altu1 <<endl;
    cout << "altura2: "<< altu2 <<endl;
    cout << "altura3: "<< altu3 <<endl;

    cout << "----------------------"<< endl;
    cout << "triangulo 2 mide " << endl;
    cout << "lado1: "<<dis3<< endl;
    cout << "lado2: "<<dis4 << endl;
    cout << "lado3: "<< dis5 << endl;
    semip2 = (dis3+dis4+dis5)/2;
    peri2 = (dis3+dis4+dis5);
    cout << "perimetro: "<< peri2<<endl ;
    cout <<"semiperimetro: "<<semip2 << endl;  
    altu5 = (2/dis2)* sqrt (semip2*(semip2-dis2)*(semip2-dis1)*(semip2-dis5));
    altu4 = (2/dis1)* sqrt (semip2*(semip2-dis2)*(semip2-dis1)*(semip2-dis5));
    altu6 = (2/dis5)* sqrt (semip2*(semip2-dis2)*(semip2-dis1)*(semip2-dis5));
    cout << "altura1: "<< altu4 <<endl;
    cout << "altura2: "<< altu5 <<endl;
    cout << "altura3: "<< altu6 <<endl;
    cout << "----------------------"<< endl;
   
   area = sqrt (semiPerimetro2*(semiPerimetro2-distancia2)*(semiPerimetro2-distancia1)*(semiPerimetro2-distancia5))+sqrt (semiPerimetro1*(semiPerimetro1-distancia2)*(semiPerimetro1-distancia1)*(semiPerimetro1-distancia5));;

    

    


	return area;

}