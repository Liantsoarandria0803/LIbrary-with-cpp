#include "Activation.hpp"
bool Activation::verifierActivation()
{
    std::ifstream fs("serial.txt");//lecture du fichier qui contient la clée saisissé par l'utilisateur
    if (fs.fail())
    {
        std::cout << "fichier d'activation introuvable" << std::endl;
        return false;
    }
    else
    {
        std::string cle;
        fs >> cle;// la cle saisissé par l'utilisateur
        fs.close();
        if (cle == code)
        {
            std::cout << "Activation OK" << std::endl;
            activer();
            return true;
        }
        else
        {
            std::string s;
            std::ifstream tryFyle("essai.txt");
            tryFyle >> s;
            tryFyle.close();
            int i = stoi(s);
            std::ofstream w("essai.txt");
            vEssai = (i - 1);
            w << vEssai;//
            w.close();
            return false;
        }
    }
}

void Activation::activer()
{
    std::ofstream fs("essai.txt");
    fs << "activated";
    status = true;
    fs.close();
    //Ecriture dans le fichier 
}

Activation::Activation()
{
    std::string i;
    std::ifstream fs("essai.txt");
    if (fs.fail())
    {
        std::cout << "essai.txt introuvable" << std::endl,
            point = 0;
    }
    else
    {
        fs >> i;
        if (i == "activated") 
        {
            status = true; // lanccement du programme jusquèà l'infini
        }
        else
        {
            point = stoi(i);
        }
        fs.close();
    }
}

Activation::~Activation()
{
}
bool Activation::getStatus()
{
    return status;
}
int Activation::getVEssai()
{
    return vEssai;
}