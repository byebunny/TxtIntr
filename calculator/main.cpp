#include <iostream>
#include <string>
#include <string.h>
#include <cmath>
#include <stdexcept>
#include <sstream>
using namespace std;

class Calc{
private:
    double ish;
    string options;
    string help;
    double m[2];
    string result;

public:
Calc(){
    ish=0.0;
    options="-h";}
    
Calc(double arg, string op){
    ish=arg;
    options=op;}
    
double* Res(){
       stringstream ss;
       string str;
  
        if (options=="-t" or options=="--atn"){
        m[0]=atan(ish);
        m[1]=(atan(ish)*180.0)/M_PI;
        return m;}
                
                
            else if (options=="-c" or options=="--act"){
        m[0]=1/atan(ish);
        m[1]=((1/atan(ish))*180.0)/M_PI;
        return m;}
        
                        };
        
string Help(){
    if (options=="-h"){
    help="Справка по использованию:\n -c или --act  вычисление арккотангенса\n -t или --ctn вычисление арктангенса\n пример:\n-с значение;";
return help;}}
        
        
    };

int main(int argc, char* argv[])
//int main()
{ 
 if (argc==3){
    string param1=argv[1];//флаг
   string param2=argv[2];//значение
   
  // string param2="0.22";//значение  /тестовые
   //string param1="-s";//флаг
   
Calc r(stod(param2),param1);

try{
double* result = r.Res(); //получили указатель на массив
cout<<"в радианах:\n"<<result[0]<<"\n"<<"в градусах:\n"<<result[1];}
 catch(const invalid_argument& e){
 cerr << "Ошибка" << e.what() << endl;
 r.Help();}}
 
  else{
   Calc r;
cout<<r.Help();
}}
    
    