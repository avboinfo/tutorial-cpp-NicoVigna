#include <iostream>

class mastermind
{
    private:
    int numero_mosse;
    std::string ultima_mossa;
    public:
    mastermind(){
        numero_mosse=0;
        ultima_mossa="";

    }
    void nuova_giocata(){
        std::cout<<numero_mosse+1<<": ";
        std::getline(std::cin, ultima_mossa);
        std::cout<<ultima_mossa<<std::endl;
    }
}