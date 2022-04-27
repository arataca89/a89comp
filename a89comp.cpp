/********************************************************************
Arquivo     : a89comp.cpp
Descricao   : Utilitario que auxilia na compilacao de projetos
Data        : 20220427

Ultima atualizacao: 20220427

Como o utilitario funciona:
    - O programa abre o arquivo a89comp.files, le linha por linha.
      Cada deve ter um nome de arquivo do projeto (arquivo.cpp).
      A ultima linha deve ter o nome do executavel.

arataca89@gmail.com
Aulas particulares de programacao em C/C++ 
********************************************************************/
#include <iostream>
using std::cout;
using std::cerr;

#include <fstream>
using std::ifstream;

#include <cstdlib>

#include <string>
using std::string;

#include <vector>
using std::vector;

void uso(){
    cout << "USO: a89c [arquivo.cpp]";
    exit(EXIT_SUCCESS);
}

vector<string> argv_to_vector(int argc, char* argv[]){
    vector<string> v;
    for(int i = 0; i < argc; ++i)
        v.push_back(argv[i]);
    return v;
}

string get_file_name(const string& filename){    
    size_t point = filename.find(".");
    string name = filename.substr(0, point);
    return name;
}

string get_file_extension(const string& filename){    
    size_t point = filename.find(".");
    if(point == string::npos){
        return "";
    }
    string extension = filename.substr(point);
    return extension;
}

int main(int argc, char* argv[]){
    vector<string>args = argv_to_vector(argc, argv);
    string comando = "g++";

    ifstream input_file("a89comp.files");
    if (!input_file.is_open()) {
        cerr << "ERRO ao tentar abrir o arquivo a89comp.files\n";
        return EXIT_FAILURE;
    }
    string line;
    vector<string>files;

    while(getline(input_file, line)){
        files.push_back(line);
    }

    for(auto i: files) cout << i << '\n';


/*
    switch(args.size()){
        case 1: uso();
        case 2:
            if(get_file_extension(args[1]).compare(".cpp")) uso();
            comando += " ";
            comando += args[1];
            comando += " -o ";
            comando += get_file_name(args[1]);
            break;
        default: uso();
    }

    //cout << "comando: " << comando.c_str() << '\n';

    int status = system(comando.c_str());
    
    switch(status){
        case 0:
            cout << "\n>>> COMPILADO COM SUCESSO; status: " << status << " <<<\n";
            break;
        default:
            cout << "\n>>> ERRO; status: " << status << " <<<\n";
            break; 
    }  
*/
    return 0;
}
/********************************************************************
arataca89@gmail.com
Aulas particulares de programacao em C/C++ 
********************************************************************/