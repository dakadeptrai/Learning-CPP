#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main(){
    int x,total=0;
    vector<int> a;
    //Mo file
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    //Kiem tra file
    if(!inputFile.is_open()){
        cout<<"File not found!\n";
        return 1;
    }
    if(!outputFile.is_open()){
        cout<<"File not found!\n";
        return 1;
    }
    //Doc du lieu tu file
    while(inputFile >> x){
        a.push_back(x);
    }
    for(int x:a){
        total += x;
    }
    //Xuat du lieu
    outputFile<<total;
    //Dong file
    inputFile.close();
    outputFile.close();
    return 0;
}