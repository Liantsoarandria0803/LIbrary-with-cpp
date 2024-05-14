#include <iostream>
#include "lib/Activation.hpp"
#include <fstream>

int main()
{
    Activation SerialAct = Activation();
    std::string i;
    std::ifstream fs("essai.txt");
    if (fs.fail())
    {
        std::cout << "essai.txt introuvable" << std::endl;
    }
    else if (i!="Activated")
    {
        if (SerialAct.getStatus() == false)
        {
            SerialAct.verifierActivation();
        }
        if (SerialAct.getVEssai()>0)
        {
            if (SerialAct.getStatus() == true)
             {
                std::cout << "Salut le programme fonctionne" << std::endl;
             }   
            else
            {
                std::cout <<  "Le programme fonctionne mais vous devez acheter ce programme" << std::endl;
            }
        }
    else
    {
        std::cout << "Vous devez acheter ce programme pour que cela fonctionne " << std::endl; 
    }
    }
}