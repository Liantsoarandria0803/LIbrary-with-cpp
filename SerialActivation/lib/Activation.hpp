#ifndef __POINT__
#define __POINT__

#include <iostream>
#include <fstream>
#include <string>
class Activation
{
    private:
        std::string code = "LOGBYLIANTSOA";
        int point;
        bool status = false;
        int vEssai;

    public:
        Activation();
        ~Activation();
        bool verifierActivation();
        void activer();
        bool getStatus();
        int getVEssai();
};
#endif