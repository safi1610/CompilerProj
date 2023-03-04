#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string fileName = "Test1.cp";
    
    ifstream file(fileName);

    

    if(!file.is_open()){
        cout << "Unable to Open file" << fileName << endl;
        return 1;
    }

    const int buffSize = 1024;
    string buff1[buffSize];
    string buff2[buffSize];
    
    string line;
    int i = 0;
    int buffIndex = 0;

    while(getline(file, line)){
        if(i % 2 == 0){
            buff1[buffIndex] = line;

            cout<< "buff1: " << buff1[buffIndex]<< endl;
        }
        else{
            buff2[buffIndex] = line;

            cout<< "buff2: " << buff2[buffIndex]<< endl;

        }

        buffIndex = (buffIndex + 1) % buffSize;

        i++;
    }

    file.close();

    return 0;

}
