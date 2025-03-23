#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double map(double n)
{
	return 0.75*n-1.75;
}

int main()
{
    std::ifstream fstr;  //("data.txt");
	fstr.open("data.txt");

    if (fstr.fail())
	{
		std::cerr <<"File not found" << std::endl;
		return 1;
	}

    double n;
    double sum=0;
    unsigned int c=0;
    std::ofstream file("result.txt", std::ios::app);

    //std::string line;  
    double numero;
    while(fstr>>numero)  //std::getline(fstr,line)
    {
        //double numero=std::stod(line);
        n=map(numero);
        sum+=n;
        c++;
        file<<c<<" "<<sum/c<<std::endl;
    }
    file.close();
    fstr.close();

    return 0;
}
