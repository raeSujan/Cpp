#include<iostream>
#include<fstream>

using namespace std;

int main(){

    // Writing to file
    ofstream out_file("data.txt");

    out_file << "Sujan" << endl;
    out_file << 101 << endl;
    out_file << 85;

    out_file.close();


    // Reading from same file
    ifstream in_file("data.txt");

    if(!in_file){
        cout << "File could not be opened.";
        return 1;
    }
    else{
        cout << "File opened successfully.";
    }

    string name;
    int id;
    int mark;

    getline(in_file, name);
    in_file >> id;
    in_file >> mark;

    cout << endl << endl;

    cout << "Name = " << name << endl;
    cout << "ID = " << id << endl;
    cout << "Mark = " << mark;

    in_file.close();

    return 0;
}
