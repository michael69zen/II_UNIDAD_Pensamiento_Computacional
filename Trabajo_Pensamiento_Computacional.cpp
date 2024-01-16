#include <iostream>
using namespace std;

int main(){

    int numero;

    do{
        cout<<endl;
        cout<<"*************************************"<<endl;
        cout<<"______PENSAMIENTO COMPUTACIONAL______"<<endl;
        cout<<"Ing. Miguel Romilio Aceituno Rojo"<<endl;
        cout<<"Est. Cristhian Michael Jallo Paredes"<<endl;
        cout<<"Codigo: 236543"<<endl;
        cout<<"*************************************"<<endl;

        cout<<"CALCULANDO AREAS Y VOLUMENES"<<endl;
        cout<<"1. AREAS"<<endl;
        cout<<"2. VOLUMENES"<<endl;
        cout<<"3. SALIR"<<endl;
        cout<<"*************************************"<<endl;
        cout<<"Digite una opcion entre 1-3: "<<endl;
        cin>>numero;

        switch(numero){
            case 1:
                int nroA;
                cout<<"********************"<<endl;
                cout<<endl;
                cout<<"CALCULANDO AREAS"<<endl;
                cout<<"1. CUADRADO"<<endl;
                cout<<"2. TRIANGULO"<<endl;
                cout<<"3. CIRCULO"<<endl;
                cout<<"4. RECTANGULO"<<endl;
                cout<<"5. ROMBO"<<endl;
                cout<<"6. TRAPECIO"<<endl;
                cout<<"7. PARALELOGRAMO"<<endl;
                cout<<"8. SECTOR CIRCULAR"<<endl;
                cout<<"9. ANILLO"<<endl;
                cout<<"10. ELIPSE"<<endl;
                cout<<endl;
                cout<<"Digite una opcion: "<<endl;
                cin>>nroA;

                switch(nroA){
                    case 1:
                        float lado;
                        float area_cuadrado;
                        cout<<"*********************************"<<endl;
                        cout<<"Calculando el AREA del CUADRADO"<<endl;
                        cout<<"Ingrese el lado del CUADRADO: "<<endl;
                        cin>>lado;
                        area_cuadrado = lado*lado;
                        cout<<endl;
                        cout<<"El AREA del CUADRADO es: "<<area_cuadrado<<" m2trs"<<endl;
                        break;

                    case 2:
                        float altura;
                        float base;
                        float area_triangulo;
                        cout<<"***********************************"<<endl;
                        cout<<"Calculando el AREA del TRIANGULO"<<endl;
                        cout<<"Ingrese la BASE del TRIANGULO: "<<endl;
                        cin>>base;
                        cout<<"Ingrese la ALTURA del TRIANGULO: "<<endl;
                        cin>>altura;
                        area_triangulo = 0.5*altura*base;
                        cout<<endl;
                        cout<<"El AREA del TRIANGULO es: "<<area_triangulo<<" m2trs"<<endl;
                        break;

                    case 3:
                        float radio_circulo;
                        float area_circulo;
                        cout<<"************************************************"<<endl;
                        cout<<"Calculando el AREA del CIRCULO o CIRCUNFERENCIA"<<endl;
                        cout<<"Ingrese el RADIO del CIRCULO: "<<endl;
                        cin>>radio_circulo;
                        area_circulo = 3.1416*radio_circulo*radio_circulo;
                        cout<<endl;
                        cout<<"El AREA del CIRCULO es: "<<area_circulo<< " m2trs."<<endl;
                        break;

                    case 4:
                        float base_rectangulo, altura_rectangulo;
                        float area_rectangulo;
                        cout<<"***********************************"<<endl;
                        cout<<"Calculando el AREA del RECTANGULO"<<endl;
                        cout<<"Ingrese la BASE del RECTANGULO: "<<endl;
                        cin>>base_rectangulo;
                        cout<<"Ingrese la ALTURA del RECTANGULO: "<<endl;
                        cin>>altura_rectangulo;
                        area_rectangulo = base_rectangulo*altura_rectangulo;
                        cout<<endl;
                        cout<<"El AREA del RECTANGULO es: "<<area_rectangulo<<" m2trs."<<endl;
                        break;

                    case 5:
                        float diagonal_m, diagonal_M;
                        float area_rombo;
                        cout<<"*****************************"<<endl;
                        cout<<"Calculando el AREA del ROMBO"<<endl;
                        cout<<"Ingrese la DIAGONAL MENOR del ROMBO: "<<endl;
                        cin>>diagonal_m;
                        cout<<"Ingrese la DIAGONAL MAYOR del ROMBO: "<<endl;
                        cin>>diagonal_M;
                        area_rombo = diagonal_m*diagonal_M*0.5;
                        cout<<endl;
                        cout<<"El AREA del ROMBO es: "<<area_rombo<<" m2trs."<<endl;
                        break;

                    case 6:
                        float altura_trap, base_menor, base_mayor;
                        float area_trapecio;
                        cout<<"*********************************"<<endl;
                        cout<<"Calculando el AREA del TRAPECIO"<<endl;
                        cout<<"Ingrese la BASE MENOR del TRAPECIO: "<<endl;
                        cin>>base_menor;
                        cout<<"Ingrese la BASE MAYOR del TRAPECIO: "<<endl;
                        cin>>base_mayor;
                        cout<<"Ingrese la ALTURA del TRAPECIO: "<<endl;
                        cin>>altura_trap;
                        area_trapecio = altura_trap*((base_menor + base_mayor)*0.5);
                        cout<<endl;
                        cout<<"El AREA del TRAPECIO es: "<<area_trapecio<<" m2trs."<<endl;
                        break;

                    case 7:
                        float base_paralelogr, altura_paralelogr;
                        float area_paralelogramo;
                        cout<<"*************************************"<<endl;
                        cout<<"Calculando el AREA del PARALELOGRAMO"<<endl;
                        cout<<"Ingrese la BASE del PARALELOGRAMO: "<<endl;
                        cin>>base_paralelogr;
                        cout<<"Ingrese la ALTURA del PARALELOGRAMO: "<<endl;
                        cin>>altura_paralelogr;
                        area_paralelogramo = base_paralelogr*altura_paralelogr;
                        cout<<endl;
                        cout<<"El AREA del PARALELOGRAMO es: "<<area_paralelogramo<<" m2trs."<<endl;
                        break;

                    case 8:
                        float angulo, radio_sector;
                        float area_sector_circular;
                        cout<<"****************************************"<<endl;
                        cout<<"Calculando el AREA del SECTOR CIRCULAR"<<endl;
                        cout<<"Ingrese el ANGULO del SECTOR CIRCULAR: "<<endl;
                        cin>>angulo;
                        cout<<"Ingrese el RADIO del SECTOR CIRCULAR: "<<endl;
                        cin>>radio_sector;
                        area_sector_circular = (angulo/360)*3.1416*(radio_sector*radio_sector);
                        cout<<endl;
                        cout<<"El AREA del SECTOR CIRCULAR es: "<<area_sector_circular<<" m2trs."<<endl;
                        break;

                    case 9:
                        float Radio_Anillo, radio_anillo;
                        float area_anillo;
                        cout<<"*******************************"<<endl;
                        cout<<"Calculando el AREA del ANILLO"<<endl;
                        cout<<"Ingrese el RADIO MAYOR del ANILLO"<<endl;
                        cin>>Radio_Anillo;
                        cout<<"Ingrese el RADIO MENOR del ANILLO"<<endl;
                        cin>>radio_anillo;
                        area_anillo = 3.1416*((Radio_Anillo+radio_anillo)*(Radio_Anillo-radio_anillo));
                        cout<<endl;
                        cout<<"El AREA del ANILLO es: "<<area_anillo<<" m2trs."<<endl;
                        break;

                    case 10:
                        float semieje_menor, semieje_mayor;
                        float area_elipse;
                        cout<<"*********************************"<<endl;
                        cout<<"Calculando el AREA de la ELIPSE"<<endl;
                        cout<<"Ingrese el SEMIEJE MENOR de la ELIPSE: "<<endl;
                        cin>>semieje_menor;
                        cout<<"Ingrese el SEMIEJE MAYOR de la ELIPSE: "<<endl;
                        cin>>semieje_mayor;
                        area_elipse = 3.1416*semieje_mayor*semieje_menor;
                        cout<<endl;
                        cout<<"El AREA de la ELIPSE es: "<<area_elipse<<" m2trs."<<endl;
                        break;

                    default:
                        cout<<"OPCION NO VALIDA"<<endl;
                }
                break;

            case 2:
                int nroV;
                cout<<"**********************"<<endl;
                cout<<"CALCULANDO VOLUMENES"<<endl;
                cout<<"1. CUBO"<<endl;
                cout<<"2. CILINDRO"<<endl;
                cout<<"3. PARALELEPIPEDO"<<endl;
                cout<<"4. PRISMA TRIANNGULAR"<<endl;
                cout<<"5. PRISMA CUADRANGULAR"<<endl;
                cout<<"6. ESFERA"<<endl;
                cout<<"7. PIRAMIDE TRIANGULAR"<<endl;
                cout<<"8. PIRAMIDE CUADRADA"<<endl;
                cout<<"9. CONO"<<endl;
                cout<<"Digite una Opcion: "<<endl;
                cin>>nroV;

                switch(nroV){
                    case 1:
                        float ladoC;
                        float volumen_cubo;
                        cout<<"***********************************"<<endl;
                        cout<<"Calculando el VOLUMEN de un CUBO"<<endl;
                        cout<<"Ingrese el LADO del CUBO: "<<endl;
                        cin>>ladoC;
                        volumen_cubo = ladoC*ladoC*ladoC;
                        cout<<endl;
                        cout<<"El VOLUMEN del CUBO es: "<<volumen_cubo<<" m3trs."<<endl;
                        break;

                    case 2:
                        float radioC, alturaC;
                        float volumen_cilindro;
                        cout<<"****************************************"<<endl;
                        cout<<"Calculando el VOLUMEN de un CILINDRO"<<endl;
                        cout<<"Ingrese el RADIO de la BASE del CILINDRO: "<<endl;
                        cin>>radioC;
                        cout<<"Ingrese la ALTURA del CILINDRO: "<<endl;
                        cin>>alturaC;
                        volumen_cilindro = 3.1416*(radioC*radioC)*alturaC;
                        cout<<endl;
                        cout<<"El VOLUMEN del CILINDRO es: "<<volumen_cilindro<< " m3trs."<<endl;
                        break;

                    case 3:
                        float a,b,c;
                        float volumen_paralelepipedo;
                        cout<<"******************************************"<<endl;
                        cout<<"Calculando el VOLUMEN del PARALELEPIPEDO"<<endl;
                        cout<<"Ingrese el LADO (a) del PARALELEPIPEDO"<<endl;
                        cin>>a;
                        cout<<"Ingrese el LADO (b) del PARALELEPIPEDO"<<endl;
                        cin>>b;
                        cout<<"Ingrese el LADO (c) del PARALELEPIPEDO"<<endl;
                        cin>>c;
                        volumen_paralelepipedo = a*b*c;
                        cout<<"El VOLUMEN del PARALELEPIPEDO es: "<<volumen_paralelepipedo<<" m3trs."<<endl;
                        break;

                    case 4:
                        float base_tri, altura_tri, altura_pri;
                        float volumen_prisma_tri;
                        cout<<"***********************************************"<<endl;
                        cout<<"Calculando el VOLUMEN de un PRISMA TRIANGULAR"<<endl;
                        cout<<"Ingrese la BASE de la BASE TRIANGULAR: "<<endl;
                        cin>>base_tri;
                        cout<<"Ingrese la ALTURA de la BASE TRIANGULAR: "<<endl;
                        cin>>altura_tri;
                        cout<<"Ingrese la ALTURA del PRISMA: "<<endl;
                        cin>>altura_pri;
                        volumen_prisma_tri = (0.5*base_tri*altura_tri)*altura_pri;
                        cout<<"El VOLUMEN del PRISMA TRIANGULAR es: "<<volumen_prisma_tri<<" m3trs."<<endl;
                        break;

                    case 5:
                        float lado_base_cuad, altura_prisma;
                        float volumen_prisma_cuad;
                        cout<<"*************************************************"<<endl;
                        cout<<"Calculando el VOLUMEN de un PRISMA CUADRANGULAR"<<endl;
                        cout<<"Ingrese el LADO de la BASE CUADRADA: "<<endl;
                        cin>>lado_base_cuad;
                        cout<<"Ingrese la ALTURA del PRISMA: "<<endl;
                        cin>>altura_prisma;
                        volumen_prisma_cuad = (lado_base_cuad*lado_base_cuad)*altura_prisma;
                        cout<<"El VOLUMEN del PRISMA CUADRANGULAR es: "<<volumen_prisma_cuad<<" m3trs."<<endl;
                        break;

                    case 6:
                        float radio_esfera;
                        float volumen_esfera;
                        cout<<"*************************************"<<endl;
                        cout<<"Calculando el VOLUMEN de la ESFERA"<<endl;
                        cout<<"Ingrese el RADIO de la ESFERA"<<endl;
                        cin>>radio_esfera;
                        volumen_esfera = (4/3)*3.1416*(radio_esfera*radio_esfera*radio_esfera);
                        cout<<"El VOLUMEN de la ESFERA es: "<<volumen_esfera<<" m3trs."<<endl;
                        break;

                    case 7:
                        float base_triangular, altura_triangular, altura_piramide;
                        float volumen_piramide_tri;
                        cout<<"**************************************************"<<endl;
                        cout<<"Calculando el VOLUMEN de la PIRAMIDE TRIANGULAR"<<endl;
                        cout<<"Ingrese la BASE de la BASE TRIANGULAR"<<endl;
                        cin>>base_triangular;
                        cout<<"Ingrese la ALTURA de la BASE TRIANGULAR"<<endl;
                        cin>>altura_triangular;
                        cout<<"Ingrese la ALTURA de la PIRAMIDE"<<endl;
                        cin>>altura_piramide;
                        volumen_piramide_tri =(1/3)*(0.5*base_triangular*altura_triangular)*altura_piramide;
                        cout<<"El VOLUMEN de la PIRAMIDE TRIANGULAR es: "<<volumen_piramide_tri<<" m3trs."<<endl;
                        break;

                    case 8:
                        float base_cuadrada,altura_piramide_cuad;
                        float volumen_piramide_cuad;
                        cout<<"*********************************************************"<<endl;
                        cout<<"Calculando el VOLUMEN de la PIRAMIDE de BASE CUADRADA"<<endl;
                        cout<<"Ingrese el LADO de la BASE CUADRADA: "<<endl;
                        cin>>base_cuadrada;
                        cout<<"Ingrese la ALTURA de la PIRAMIDE: "<<endl;
                        cin>>altura_piramide_cuad;
                        volumen_piramide_cuad = (1/3)*(base_cuadrada*base_cuadrada)*altura_piramide_cuad;
                        cout<<"El VOLUMEN de la PIRAMIDE de BASE CUADRADA es: "<<volumen_piramide_cuad<<" m3trs."<<endl;
                        break;

                    case 9:
                        float radio_bas_cono, altura_cono;
                        float volumen_cono;
                        cout<<"**********************************"<<endl;
                        cout<<"Calculando el VOLUMEN de un CONO"<<endl;
                        cout<<"Ingrese el RADIO de la BASE del CONO: "<<endl;
                        cin>>radio_bas_cono;
                        cout<<"Ingrese la ALTURA del CONO: "<<endl;
                        cin>>altura_cono;
                        volumen_cono = (1/3)*3.1416*(radio_bas_cono*radio_bas_cono)*altura_cono;
                        cout<<"El VOLUMEN del CONO es: "<<volumen_cono<< " m3trs."<<endl;
                        break;

                    default:
                        cout<<"OPCION NO VALIDA"<<endl;

                }
                break;

            case 3:

                break;

            default:
                cout<<"OPCION NO VALIDA"<<endl;
        }

    } while (numero != 3);

return 0;
}
