#include <iostream>
#include "./Header/Activation.hpp"

int main()
{
    Activation test = Activation();
    if (test.getStatus() == false)
    {
        test.verifActivation();
    }
    if (test.getPoint() > 0)
    {

        if (test.getStatus() == true)
        {
            std::cout << "Bienvenue sur le logiciel" << std::endl;
        }
        else
        {
            std::cout << "clé incorrect " << std::endl << "Vous pouvez passer en mode essai" << std::endl;
        }
    }
    else
    {
        std::cout << "Acheter le clé d'activation" << std::endl;
    }
  
    return 0;
}
