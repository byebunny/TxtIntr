#include <sstream>  
#include <string>  
#include <iostream>  
using namespace std;  
  
class Calc{  
private:  
double ish;  
string options;  
string help;  
double m[2];  
string result;  
  
public:  
Calc(double arg, string option);  
double* Res();  
Calc();  
//string Help();  
};
