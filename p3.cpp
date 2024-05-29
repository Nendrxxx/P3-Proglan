/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

class electronics{
  public: 
        int power;
        std::string type;
        
        electronics(){
            power = 666;
            type = "Kursi Warung";
        }
        
        electronics(int power, std::string type){
            this->power = power;
            this->type = type;
        }
        
        void turnOn(){
            std::cout << "Power: " << power << " W" << std::endl;
            std::cout << "Type: " << type << std::endl;
        }
        
        void turnOff(){
            std::cout << "Power: " << power << "W" << std::endl;
            std::cout << "Type: " << type << std::endl;
        }
};

class furniture{
    public:
        std::string material;
        std::string name;
        
        furniture(){
            material = "Plastic";
            name = "Smartchair Warteg";
        }
        
        furniture(std::string material, std::string name){
            this->material = material;
            this->name = name;
        }
        
        void assemble(){
            std::cout << "Smartchair: " << name << std::endl;
            std::cout << "Material: " << material << std::endl;
        }
        
        void diassemble(){
            std::cout << "Smartchair: " << name << std::endl;
            std::cout << "Material: " << material << std::endl;
        }

    
};

class smartchair : public electronics, public furniture{
    public:
        smartchair(int power, std::string type, std::string material, std::string name) :
        electronics(power, type),
        furniture(material, name) {}
        
        void showFeatures(){
            std::cout << "Assembling " << name << std::endl;
            std::cout << "Diassembling " << name << std::endl;
            std::cout << "Turning On " << type << std::endl;
            std::cout << "Turning Off " << type << std::endl;
            std::cout<< name << " the " << type << " made of " << material << " is demonstrating all features" << std::endl;

        }
};

int main()
{   
    smartchair satu(200, "kursi", "kayu", "kursi kayu");
    satu.turnOn();
    satu.assemble();
    satu.showFeatures();
    
    return 0;
}