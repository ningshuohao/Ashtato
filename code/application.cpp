#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <ctime>
#include "head\atoio.cpph"
using namespace std;
using namespace shio;

//此函数用strtok方法，
string StringSplit(string TODO,string SPLITSTR,int TODOCHARNUM){
    //获得Char型的被分隔值
    char* toDoChar = (char*)TODO.c_str();
    //获得Char型的分隔值
    const char* splitStrChar = SPLITSTR.c_str();
    //隔出后的暂存点
    char* token;
    int tokenCharNum;
    //分割
    //第一个
    token = strtok(toDoChar,splitStrChar);
    //剩下的
    for (int i = 1;i < TODOCHARNUM;i++){
        token = strtok(NULL,splitStrChar);
    };
    string RETURNSTR = string(token);
    return RETURNSTR;
};
int main(){
    string appMode;
    cout << "Ashto,version 0.1" << endl << "Mode 1:Open file to use." << endl << "Mode 2:Enter command." << endl;
    cout << "Mode(1/2):";
    cin >> appMode;
    if (appMode == (char*)"2"){
        string inputStr;
        size_t sizes;
        for (;;){
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