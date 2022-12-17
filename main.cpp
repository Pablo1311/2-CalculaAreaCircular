#include <iostream>
#include <math.h>

using namespace std;

/**Calcula el area de un terreno circular**/
class Circulo{
    private:
        //Declaracion de variables
        float radio;

    public:
        //Constructor con y sin parametros
        Circulo(){
            radio = 0;
        }

        Circulo(float pRadio){
            radio = pRadio;
        }

        //SETS and GETS
        void setRadio(float pRadio) { radio = pRadio; }

        float getRadio() { return radio; }

        //Calcular longitud
        float longitud(){
            return 2 * 3.14 * radio;
        }

        //Calcular area
        float area(){
            return 3.14 * radio * radio;
        }

        //Costo cubrir el area con tela
        float costoImpermeabilizar(){
            return area() * 0.75;
        }
};

int main()
{
    Circulo telaA (4);
    {
        cout<<"El radio de la tela A es: "<<telaA.getRadio()<<endl;
        cout<<"-----------------------------------------------"<<endl;
    }

    //Capturar datos en consola
    int rad1, l;
    Circulo telaB;
    {
        cout<<"Digite el radio de la tela B"<<endl;
        cin>>rad1;

        telaB.setRadio(rad1);
        l = telaB.longitud();
        telaB.setRadio(rad1);

        cout<<"El radio de la tela es:              "<<rad1<<endl;
        cout<<"El costo de la tela es:              "<<"$"<<telaB.costoImpermeabilizar()<<endl;
        cout<<"La cantidad de hule necesario es:    "<<telaB.area()<<" cm2"<<endl;
        cout<<"-----------------------------------------------"<<endl;
    }

    Circulo telaC;
    int rad2;
    {
        cout<<"Digite el radio de la tela C"<<endl;
        cin>>rad2;
        telaC.setRadio(rad2);

        cout<<"El radio de la tela C es:            "<<rad2<<endl;
        cout<<"El area de al tela C es:             "<<telaC.area()<<" cm2"<<endl;
        cout<<"La cantidad de hule necesario es:    "<<" $"<<telaC.costoImpermeabilizar()<<endl;
    }
    return 0;
}
