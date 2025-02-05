#ifndef DFH
#define DFH

//#define FILE "cse.txt"

#ifndef FILE
#define FILE "cse.txt"
#endif // FILE

namespace file
{
    string name="";
    int roll=0;
    class data
{
    ifstream fin;
    ofstream fout;
    fstream finout;
    string name;
    int roll;

public:
    data(string name="DEFAULT", int roll=0)
    {
        cout<<endl<<"Hi from data"<<endl;
        this->name=name;
        this->roll=roll;
    }
    display()
    {
        cout<<endl<<"Hi from display"<<endl;
        cout<<"NAme "<<name<<endl;
        cout<<"Roll "<<roll;
    }
    void write()
    {
        fout.open(FILE,std::ios::app);
        if (!fout)
        {
            cout<<endl<<"ERROR"<<endl;
            return;
        }
        cout<<endl<<FILE<<" FILE OPENED BY WRITE() SUCCSSFULLY"<<endl;
        fout<<name<<"\n"<<roll<<endl;
        fout.close();
    }
    void read()
    {
        fin.open(FILE);
        if (!fin)
        {
            cout<<endl<<"ERROR"<<endl;
            return;
        }
        cout<<endl<<FILE<<" FILE OPENED SUCCSSFULLY"<<endl;
        //fin>>name>>roll;
        getline(fin,name,'\n');
        fin>>roll;
        fin.close();
        display();
    }

};
}

#endif
