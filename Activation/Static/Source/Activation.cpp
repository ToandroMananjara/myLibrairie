#include "../Header/Activation.hpp"
bool Activation::verifActivation()
{
    std::ifstream fs("Files/key.txt");
    if (fs.fail())
    {
        std::cout << "Fichier d'activation introuvable" << std::endl;
        return false;
    }
    else
    {
        std::string key;
        fs >> key;
        fs.close();
        if (key == keyValue)
        {
            std::cout << "Cle d'activation correcte" << std::endl;
            activate();
            return true;
        }
        else
        {
            std::string s;
            std::ifstream tryFile("Files/try.txt");
            tryFile >> s;
            tryFile.close();
            int i = stoi(s), value;
            std::ofstream w("Files/try.txt");
            value = (i - 1);
            w << value;
            w.close();
            return false;
        }
    }
}

void Activation::activate()
{
    std::ofstream fs("Files/try.txt");
    fs << "30";
    status = true;
    fs.close();
}

Activation::Activation()
{
    std::string i;
    std::ifstream fs("Files/try.txt");
    if (fs.fail())
    {
        std::cout << "Fichier introuvable" << std::endl,
            point = 0;
    }
    else
    {
        fs >> i;
        if (i == "activer")
        {
            status = true;
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

int Activation::getPoint()
{
    return point;
}
