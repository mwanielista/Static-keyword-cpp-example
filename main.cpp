#include <iostream>

using namespace std;


class Funkcja{
	public: 
	
	    void nonStatic(){
	        cout << "\n\nbez static\n\n"; 
	    }
};

class Funkcjab{
	public:
	    static int functStatic(){
	     cout << "\n\nstatic\n\n";   
	    }
};

//zmienna globalna - domy�lnie zachowa si� tak samo jak statyczna -> defaultowo przypisze 0 
int z;


void example(){
	static int number  =1;	//ma swoje sta�e miejsce w pami�ci
	int numberINT = 1;		//za ka�dym razem dostaje nowe �wie�e miejsce
	
	number++;
	numberINT++;
	
	cout<<"static int: " << number << endl;
	cout <<"int: " << numberINT << endl;
	
	cout << "*************\n\n";
}

//ta zmienna jest domy�lnie zainicjowana, poniewa� jest poza klas�


int main(){

	
	for(int i=0; i<3; i++){
	  	example();
	}
	
	  
	//Funkcja bez static -> tworzymy obiekt z t� klas�, nast�pnie odwo�ujemy si� do metody zawartej w tej klasie
	Funkcja* f = new Funkcja();
	f -> nonStatic();
	  

	  
	//Metoda statyczna -> statycznie odwo�ujemy sie do danej metody bez tworzenia obiektu
	Funkcjab::functStatic();	//:: operator zasi�gu -> z czego� wyci�gamy co�
	  
  
  
  	//zmienna niezainicjowana - kompilator przypisuje jej defaultow� warto��
	float bolek;
  	cout << "Bolek default value: "<<bolek;
  	bolek++;
  	cout << endl <<"Bolek after ++ value: "<< bolek << endl;
  	
  	
  	
  	//zmienna zainicjowana;
	float lolek = 0;
  	cout << "Lolek before: " << lolek;
  	lolek++;
  	cout << endl<<"Lolek after: " << lolek<<endl<<endl;
  	
  	//zmienne statyczne zawsze s� inicjowane i maj� przypisane 0
  	static float zmiennaStatyczna;
  	cout <<"Zmienna statyczna" <<zmiennaStatyczna<<endl;
  	
  
  return 0;
}

