#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

class consle{
    void out(const char* outStr){
        cout << outStr;
    };
    void in(string VarName){
        string inputStr;
        cin >> inputStr;
    };
};

class var{
    public:
    int VarNum = 0;
    string +listed[128];
    void addVar(string VarName,string VarValue){
        listed[VarNum] = {"str",VarName,string(VarValue)};
        VarNum++;
    };  
    void addVar(string VarName,int VarValue){
        listed[VarNum] = {"int",VarName,string(VarValue)};
        VarNum++;
    };
    void addVar(string VarName,float VarValue){
        listed[VarNum] = {"flo",VarName,string(VarValue)};
        VarNum++;
    };
    void addVar(string VarName,bool VarValue){
        listed[VarNum] = {"bol",VarName,string(VarValue)};
        VarNum++;
    };
    void removeVar(string VarName){
        string TempValue[3];
        bool NowType = false;
        for (int nowNum = 0;nowNum < VarNum;nowNum++){
            TempValue = listed[nowNum];
            if (TempValue[1] == VarName){
                listed[nowNum] = NULL;
                VarNum--;
                NowType = true;
                break;
            };
        };
        if (NowType == false){
            cout << "IndexERROR:The Variables is not index to remove."
        };
    };
    string getVar(string VarName){
        string TempValue[3];
        bool NowType = false;
        for (int nowNum = 0;nowNum < VarNum;nowNum++){
            TempValue = listed[nowNum];
            if (TempValue[1] == VarName){
                return TempValue[1];
            };
        };
        if (NowType == false){
            cout << "IndexERROR:The Variables is not index to get."
            return NULL;
            
        };
    };
    void setVar(string VarName,string VarValue){};
    void setVar(string VarName,int VarValue){};
    void setVar(string VarName,float VarValue){};
    void setVar(string VarName,bool VarValue){};
};

class time{};

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
    // };
};