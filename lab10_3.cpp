//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include<fstream>
#include <iomanip>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int count=0;
    double sum=0;
    double kum=0;
   
    ifstream source("score.txt");
    string textline;
    while(getline(source,textline)){
	    sum=sum+stod(textline);
	    kum=kum+ pow(stod(textline),2);
	    count++;
	  
	} 
	

	double mean=sum/count;
	double stand;
	stand=sqrt((kum/count)-pow(mean,2));
	
	
	
    
    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<stand<<"\n";
}