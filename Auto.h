//
// Created by HP on 09/06/2022.
//

#ifndef TEMPLATE_AUTO_H
    #define TEMPLATE_AUTO_H

    #include "string"
    using namespace std;
    class Auto{
        public:
            //Constructor
            Auto();
            Auto(string, string, int);
            //Destructor
            ~Auto();
            //Setters
            void SetValores(string, string, int);
            //Servicio
            void MostrarValores();
        private:
            int modelo;
            string marca;
            string nombrePropietario;
    };

    inline void Auto::SetValores(string nombre, string marca, int modelo) {
        this->marca = marca;
        this->modelo = modelo;
        this->nombrePropietario = nombre;
        return;
    }

#endif //TEMPLATE_AUTO_H
