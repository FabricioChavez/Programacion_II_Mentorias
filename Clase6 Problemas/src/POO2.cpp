#include <iostream>
#include <vector>
using namespace std;

class Profesor{

private:
    string nombre_;
    string apellidoP_;
    string apellidoM_;
    int n;
    vector<string> Cursos;
    void hazalgo(){ // se pueden hacer metodos en privado

    }
public:

    Profesor( string nombre , string apellido1 , string apellido2):nombre_(nombre),apellidoP_(apellido1),apellidoM_(apellido2){
        cout<<"INGRESAR LA CANTIDAD DE CURSOS QUE IMPARTE :";
        cin>>n;
        cin.ignore();
        string prov;
        for (int i = 0; i < n; ++i) {
            cout<<"INGRESA CURSO"<<i<<":";
            cin>>prov;// TODO
            Cursos.push_back(prov);
            prov.clear();

        }

    }

    const string &getNombre() const {
        return nombre_;
    }

    const string &getApellidoP() const {
        return apellidoP_;
    }

    const string &getApellidoM() const {
        return apellidoM_;
    }

    int getCantidadCursos() const {
        return n;
    }

    void setNombre(const string &nombre) {
        nombre_ = nombre;
    }

    void setApellidoP(const string &apellidoP) {
        apellidoP_ = apellidoP;
    }

    void setApellidoM(const string &apellidoM) {
        apellidoM_ = apellidoM;
    }

    void setN(int n2) {
        this->n = n2;
    }

    void agregarcurso(const string& Nuevo_Curso){
        Cursos.push_back(Nuevo_Curso);
        n++;

    }
    void MostrarCursos(){
        cout<<"LOS CURSOS QUE IMPARTE EL PROFESOR " <<nombre_ <<" SON :"<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<"CURSO"<<i<<":  "<<Cursos[i]<<endl;
        }


    }
    bool FindCurso(const string & Nombre_curso){

        for(const auto& v:Cursos)
        {
            if(Nombre_curso==v)
                return true;
        }

        return false;

    }
  ~Profesor(){

    }
};
struct Junta{
    vector<Profesor*> Profesores;

    Junta(){
        int n;
        cout<<"DATOS DE ALAN "<<endl;
        Profesor* uno = new Profesor("Alan" , "Algo1" , "Algo2");
        cout<<endl;
        cout<<"DATOS DE Fiestas "<<endl;
        Profesor* dos = new Profesor("Fiestas" , "Algo2" , "Algo3");
        Profesores.push_back(uno);
        Profesores.push_back(dos);
    }

    void MostrarResultados(){

        for(auto v : Profesores) {
            if (v->FindCurso("Calculo"))
                v->MostrarCursos();
        }


    }

};
int main(){

    Junta primera;
    primera.MostrarResultados();


//    uno.setNombre("Alam");
//    uno.MostrarCursos();
//    cout<<"LA CANTIDAD DE CURSOS QUE IMPARTE SON :"<<uno.getCantidadCursos();

    return 0;
};