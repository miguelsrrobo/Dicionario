#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Dictionary
{
private:
    //atributes
    vector<string> m_list;
    

    //methods    
public:
    //constructors and destructors
    Dictionary(); //constructor, quantos eu necessitar, uma chamada somente
    Dictionary(string path); //constructor, quantos eu necessitar, uma chamada somente
    
    ~Dictionary(); //destrutor, chamado automaticamente quando o escopo

    bool LoadDictionary(string path);
    void ShowDictionary();
    
    //vector<string> Search(string query);    //substrings
    //void Insert(string);
    //void Remove(string);
    
};

