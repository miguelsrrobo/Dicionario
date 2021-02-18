#include "dictionary.hpp"

Dictionary::Dictionary(vector<string> stringDeletas, vector<string> stringDeletas)
{
    sort (list1.begin(), list1.end());
    size_t i = 0;
    while(i < list1.size()-1)
    {
        if((list1.at(i).length() >= wordSize) && (list1.at(i) == list1.at(i+1)))
        {
            stringDeletas.push_back(list1.at(i));
            list1.erase(list1.begin()+i);
            numberDuplicatesExcluded++;
        }
        else
            i++;        
    }
    Filtered_Words = list1.size();
    for(size_t i = 0;i < stringDeletas.size();i++)
    {
        cout << stringDeletas.at(i) << "==" << stringDeletas.at(i) << endl;
    }
    cout << "Duplicates:_" << numberDuplicatesExcluded << "\n" << "Filtered_Words:_" << Filtered_Words << endl;
/**/
}

Dictionary::Dictionary(string path)
{
    LoadDictionary(path);
}

Dictionary::~Dictionary()
{
    m_list.clear();
}

bool Dictionary::LoadDictionary(string path)
{
    cout << "Reading file " << path << endl;
    
    ifstream file;
    file.open(path);
    if(file.is_open())
    {
        string tmp;
        while(getline(file, tmp))
        {
            m_list.push_back(tmp); 
        }
        m_list.erase(m_list.begin()+0);     
    }
    else return false;
        
    return true;  
}

void Dictionary::ShowDictionary()
{
    if(m_list.size() == 0) cout << "Ops. Dictionary is empty" << endl;
    
    for(size_t i=0; i<m_list.size(); i++)
    {
        cout << m_list.at(i) << endl;
    }        
}
