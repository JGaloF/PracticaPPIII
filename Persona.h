//
// Created by HP on 09/06/2022.
//

#ifndef TEMPLATE_PERSONA_H
    #define TEMPLATE_PERSONA_H
    #include "string"
    using namespace std;

    struct telefono{
        string personal;
        string laboral;
    };

    class Persona{
        public:
        //Constructor
        Persona(string, int);
        Persona(string, int, telefono);

        //Destructor
        ~Persona();
        //Sett
        void SetPersona(string, int, telefono);

        private:
        string nombre;
        int edad;
        telefono tel;
    };

    inline void Persona::SetPersona(string nombre, int edad, telefono tel){
        this->tel = tel;
        this->nombre = nombre;
        this->edad = edad;

        return;
    }
#endif //TEMPLATE_PERSONA_H
