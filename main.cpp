//
//  main.cpp
//  Sparse Checker
//
//  Created by Tiago Lopes de Paiva Dionysio da Fonseca on 11/06/17.
//  Copyright © 2017 Apolox. All rights reserved.
//

#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    struct stat st;
    
    if(argc < 2){
        std::cerr << "Necessario informar o arquivo!" << endl;
        return 1;
    }
    
    if(stat(argv[1], &st) != 0) {
        std::cerr << "Nao foi possivel executar a operacao!" << endl;
        return 1;
    }

    if(st.st_size > (st.st_blocks * 512)){
    	std::cout << "ESPARSO" << endl;
    } else {
    	std::cout << "REGULAR" << endl;
    }

    
    return 0;
}

