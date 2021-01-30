# 'static' keyword - C++ Example

## What is it? 
When static keyword is used, variable or data members or functions can not be modified again. It is allocated for the lifetime of program. Static functions can be called directly by using class name. Static variables are initialized only once

# How it works in functions?
We have 2 classes with one public method: 

- Funkcja
```c++
class Funkcja{
	public: 
	    void nonStatic(){
	        cout << "\n\nbez static\n\n"; 
	    }
};
```
- Funkcjab
```c++
class Funkcjab{
	public:
	    static int functStatic(){
	     cout << "\n\nstatic\n\n";   
	    }
};
```

#### And then - if we want to call 'non static' method we have to make class object and then call to this method: 

```c++
Funkcja* f = new Funkcja();
	f -> nonStatic();
```

#### But if we use static method in class, call will look like this: 

```c++
Funkcjab::functStatic();
```
We just need to refer directly to the method.

## How about variables? 

For example we have void function. We will refer to it in a loop.
```c++
void example(){
	static int number =1;	
	int numberINT = 1;	
	
	number++;
	numberINT++;
	
	cout<<"static int: " << number << endl;
	cout <<"int: " << numberINT << endl;
	
	cout << "*************\n";
}

int main(){
    
    for(int i=0; i<3; i++){
	  	example();
	}
    
    return 0;
}

```
As a result in output we will see that, every time loop passes - static int will be increased by one, but 'normal' int variable - 'numberINT' will still be 2 when displayed.
Static variables behave like this due to they are allocated for the lifetime of program.

## Default value of static variable 
If we do not initiate static variable - by default they will have *zero* value.
Static variables are initialized *only once*.