#include<iostream>
#include<string>

using namespace std;
class student
{
public:
    string name;
    int rollno;
    string mn;
    string course;

    void names() {
        cout<<"Enter the name of student:";
        cin>>name;

    }
    void displayname()
    {
        cout<<"Student name:"<<name;
    }


    void rn()
    {
        cout<<"Enter the roll no. of student:";
        cin>>rollno;
    }

    void displayrn()
    {
        cout<<"Roll no:"<<rollno;
    }

    void mnm()
    {
        cout<<"Enter the mother name of student:";
        cin>>mn;

    }
    void displaymnm() {

        cout<<"Mother's name:"<<mn;
    }

    void co() {
        cout<<"Course name:";
        cin>>course;
    }
    void displayco()
    {
        cout<<"Course:"<<course<<endl;
    }


};

class subject:public student
{
public:
    int English,English1;
    int Maths,Maths1;
    int  Science,Science1;
    int Hindi,Hindi1;

    void setmarks(float e,float m,float s,float h,float e1,float m1,float s1,float h1 )
    {
        English=e;
        Maths=m;
        Science=s;
        Hindi=h;
        English1=e1;
        Maths1=m1;
        Science1=s1;
        Hindi1=h1;
    }
    void getmarks() {
        cout<<"English    "<<English<<"          "  <<English1<<endl
            <<"Maths      "<<Maths  <<"          "<<Maths1<<endl
            <<"Science    "<<Science<<"          "<<Science1<<endl
            <<"Hindi      "<<Hindi  <<"          "<<Hindi1;
    }
};

class total:public subject
{
public:
void gettotal()
{
        cout<<"English    "<<English<<"          "
            <<English1<<"         "<<English+English1<<endl;
        cout<<"Maths      "<<Maths  <<"          ";
        cout<<Maths1  <<"         "<<Maths+Maths1<<endl;
        cout<<"Science    "<<Science<<"          ";
        cout<<Science1<<"         "<<Science+Science1<<endl;
        cout<<"Hindi      "<<Hindi  <<"          ";
        cout<<Hindi1  <<"         "<<Hindi+Hindi1<<endl;
    }

};

class gtotal: public total
{
public:
int gt;
void gtl()
{
gt=English+English1+Maths+Maths1+Science+Science1+Hindi+Hindi1;
}

void getgtl()
{
cout<<"Grand Total                       "<<gt<<endl;
}


void perc()
{
cout<<gt/(float)4;
}

};



int main ()
{
    

    student s1;
    s1.names();
    s1.rn();
    s1.mnm();
    s1.co();

    int E,M,S,H;
    int E1,M1,S1,H1;
    subject s2;
    cout<<"Enter the internal marks of English,"
        <<" Maths, Science,Hindi:"<<endl
        <<"(Out of 40)"<<endl;
    cin>>E>>M>>S>>H;
    cout<<"Enter the external  marks of English,"
        <<" Maths, Science,Hindi:"<<endl
        <<"(out of 60)"<<endl;
    cin>>E1>>M1>>S1>>H1;
    
    total s3;
    s3.setmarks(E,M,S,H,E1,M1,S1,H1);

    gtotal s4;
   s4.setmarks(E,M,S,H,E1,M1,S1,H1);
    s4.gtl();
    

    

    
//----------------------------------

    cout<<"--------------------------------------------"<<endl
        <<"---------------------------------------------"<<endl;

    cout<<"           Student Marksheet"<<endl;
    cout<<endl;
    s1.displayname();
     cout<<endl;
    s1.displaymnm();
    cout<<endl;
    s1.displayrn();
    cout<<endl;
    s1.displayco();
    cout<<endl<<endl;
    cout<<"Subject    Int mrks   Ext marks   Total" <<endl;
    cout<<endl;
   s3.gettotal();
    cout<<endl;
    cout<<"_______________________________________"<<endl;
    s4.getgtl();
    
   cout<<"Percentage                         ";
    s4.perc();
    cout<<endl<<endl<<endl; 
    
    
    
    
    
    cout<<"Signature";
    return 0;
}