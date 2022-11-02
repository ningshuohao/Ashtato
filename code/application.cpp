#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <unistd.h>
#include "head\atoio.cpph"
using namespace std;
using namespace shio;

#define reloca "213918243704823904827301443012784357349028412743246927346982716733333338941346983265738219564733129592361789237236627623897395643728652347944433692567598027043758430695749243"

#ifndef reloca
#else
int main(){
    string appMode;
    cout << "Ashto,version 0.1" << endl << "Mode 1:Open file to use." << endl << "Mode 2:Enter command." << endl;
    cout << "Mode(1/2):";
    cin >> appMode;
    if (appMode == (char*)"2"){
        string inputStr;
        usleep(0.05);
        for (;;){
            usleep(0.05);
            cout << ">>>";
            getline(cin,inputStr);
            if (inputStr == "exit"){
                break;
            };
        };
    // }else{
    //     ifstream toFile;
    //     toFile.open("in.ato",ios::in);
    //     string getFile;
    //     getline(toFile,getFile);
    //     char* chartemp = (char*)getFile.c_str();
    //     int inttemp = strlen(chartemp);
    //     StringSplit(getFile,"\r",1);
    //     toFile.close();
    };
};
#endif