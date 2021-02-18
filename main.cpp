#include "dictionary.hpp"

#define fdebug 1

int main()
{
    /*
    Dictionary d1;
    Dictionary *d2 = new Dictionary;
    Dictionary d3("dict.txt");

    d1.LoadDictionary("dict.txt");   
    d2->LoadDictionary("dict.txt");
    
    d1.ShowDictionary();
    
    delete d2;*/
    
    vector<Dictionary> listdict;
    
    while(true)
    {
        if(fdebug) cout << "Insert an option: " << endl;
        if(fdebug) cout << "1.Insert Dictionary" << endl;
        if(fdebug) cout << "2.Show dictionaries" << endl;
        if(fdebug) cout << "3.Search" << endl;
        if(fdebug) cout << "4.Insert word" << endl;
        if(fdebug) cout << "5.Remove word" << endl;
        if(fdebug) cout << "6.Concatenate dictionaries" << endl;
        
        if(fdebug) cout << "0.Quit" << endl;
        
        char ch;
        cin >> ch;
        
        //cin.ignore();
        
        
        if(ch == '1')
        {
            cout << "Enter a filename: ";
            string path;
            cin >> path;            
            Dictionary d(path);
            listdict.push_back(d);
        }
        
        if(ch == '2')
        {
            for(size_t i=0; i<listdict.size(); i++)
            {
                listdict.at(i).ShowDictionary();
            }            
        }
        if(ch == '3')
        {
            cout << "Enter with a query: ";
            string query;
            cin >> query;            
            
            //cout << "Qual dicionário ?" << endl;   ????
            //vector<string> queries = Search(query);
        }
        
        if(ch == '4')
        {
                //Qual dicionário inserir ?    i
                //Criar novo ?
                //listdict.at(i).Inser(string)
        }
        if(ch == '5')
        {
        }
        
        if(ch == '6')
        {
            
            
        }
        if(ch == '0')
        {
            break;
        }
    }
    
    return 0;
}
