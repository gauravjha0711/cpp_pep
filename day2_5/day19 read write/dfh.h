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
    float marks[5];
    char grade;

    class data
{
    ifstream fin;
    ofstream fout;
    fstream finout;
    string name;
    int roll;
    float marks[5]={0};
    char grade;

public:
    input(string name, int roll, char grade, float marks[])
    {
        cout<<endl<<"Hi from data"<<endl;
        this->name=name;
        this->roll=roll;
        this->grade=grade;
        this->marks[0]=marks[0];
        this->marks[1]=marks[1];
        this->marks[2]=marks[2];
        this->marks[3]=marks[3];
        this->marks[4]=marks[4];
    }
    void display()
    {
        cout<<endl<<"Hi from display"<<endl;
        cout<<"NAme "<<name<<endl;
        cout<<"Roll "<<roll<<endl;
        cout<<"Grade "<<grade<<endl;
        cout<<"Marks "<<this->marks[0]<<" "<<this->marks[1]<<" "<<this->marks[2]<<" "<<this->marks[3]<<" "<<this->marks[4]<<endl;

    }
    void write_stream()
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
    void read_stream()
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

    void write_object()
    {
        fout.open(FILE,std::ios::app);
        if (!fout)
        {
            cout<<endl<<"ERROR"<<endl;
            return;
        }
        cout<<endl<<FILE<<" FILE OPENED BY WRITE() SUCCSSFULLY"<<endl;
        fout.write((char*)this,sizeof(this));
        fout.close();
    }
    void read_object()
    {
        fin.open(FILE);
        if (!fin)
        {
            cout<<endl<<"ERROR"<<endl;
            return;
        }
        cout<<endl<<FILE<<" FILE OPENED SUCCSSFULLY"<<endl;
        //fin>>name>>roll;
        //getline(fin,name,'\n');
        //fin>>roll;
        fin.read((char*)this,sizeof(this));
        fin.close();
        display();
    }


};
}

#endif
