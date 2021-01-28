#include <iostream>

using namespace std;


class Funkcja{
	public: 
	
	    void nieStatyczna(){
	        cout << "\n\nbez static\n\n"; 
	    }
};

class Funkcjab{
	public:
	    static int funct(){
	     cout << "\n\nstatic\n\n";   
	    }
};

//zmienna globalna - domyœlnie zachowa siê tak samo jak statyczna -> defaultowo przypisze 0 
int z;


void funkcja(){
	static int liczba =1;	//ma swoje sta³e miejsce w pamiêci
	int liczbaINT = 1;		//za ka¿dym razem dostaje nowe œwie¿e miejsce
	
	liczba++;
	liczbaINT++;
	
	cout<<"static int: " << liczba << endl;
	cout <<"int: " << liczbaINT << endl;
	
	cout << "*************\n\n";
}

//ta zmienna jest domyœlnie zainicjowana, poniewa¿ jest poza klas¹


int main(){

	
	for(int i=0; i<3; i++){
	  	funkcja();
	}
	
	  
	//Funkcja bez static -> tworzymy obiekt z t¹ klas¹, nastêpnie odwo³ujemy siê do metody zawartej w tej klasie
	Funkcja* f = new Funkcja();
	f -> nieStatyczna();
	  

	  
	//Metoda statyczna -> statycznie odwo³ujemy sie do danej metody bez tworzenia obiektu
	Funkcjab::funct();	//:: operator zasiêgu -> z czegoœ wyci¹gamy coœ
	  
  
  
  	//zmienna niezainicjowana - kompilator przypisuje jej defaultow¹ wartoœæ
	float bolek;
  	cout << "Bolek default value: "<<bolek;
  	bolek++;
  	cout << endl <<"Bolek after ++ value: "<< bolek << endl;
  	
  	
  	
  	//zmienna zainicjowana;
	float lolek = 0;
  	cout << "Lolek before: " << lolek;
  	lolek++;
  	cout << endl<<"Lolek after: " << lolek<<endl<<endl;
  	
  	//zmienne statyczne zawsze s¹ inicjowane i maj¹ przypisane 0
  	static float zmiennaStatyczna;
  	cout <<"Zmienna statyczna" <<zmiennaStatyczna<<endl;
  	
  
  return 0;
}

