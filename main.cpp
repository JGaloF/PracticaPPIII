#include <iostream>
#include "Auto.h"
using namespace std;

int main() {
    Auto A1,A2("Pedro", "Nissan", 2008);

    A1.SetValores("Martin", "Chevrolet", 206);

    A1.MostrarValores();
    A2.MostrarValores();

    return 0;
}
