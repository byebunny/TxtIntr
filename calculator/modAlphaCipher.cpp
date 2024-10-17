#include <iostream>  
#include <string>  
#include <cmath>  
#include <sstream>  
#include "header.h"  
using namespace std;  
  
Calc::Calc(){  
    ish=0.0;  
    options="-h";}  
      
Calc::Calc(double arg, string op){  
        ish=arg;  
        options=op;}  
  
double* Calc::Res(){  
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
  
         else{return 0;}         
        }  
          
//string Calc::Help(){  
    //help="Справка по использованию:\n -c или --act  вычисление арккотангенса\n -t или --atn вычисление арктангенса\n пример:\n-с значение;";  
//return help;  
//}
