#include<iostream>
using namespace std;

class studentDetail
{
    private:
        int studentAttd;
        float testScore;
        int ttScore; //more than 5600
public:
    void getData()
    {
        cout<<"Input - ";
        cout<<"\nStudentAttd - ";
        cin>>studentAttd;
        cout<<"\nTest Score - ";
        cin>>testScore;
        cout<<"\nTest Total Score - ";
        cin>>ttScore;
    cout<<ttScore;
    }
    
    
    void displayGrade()
    {
        if((studentAttd>50) && (testScore > 0.70) && (ttScore > 5600))
        {
            cout<<"Res - 10";
        }
        else if((studentAttd>50) && (testScore > 0.70))
        {
            cout<<"Res - 9";
        }
        else if(ttScore>5600)
        {
            cout<<"Res - 8";
        }
        else if((studentAttd>50)&&(ttScore > 5600))
        {
            cout<<"Res - 7";
        }
        else if((studentAttd>50) || (testScore > 0.70) || (ttScore > 5600))
        {
            cout<<"Res - 6";
        }
        else if(!((studentAttd>50) && (testScore > 0.70) && (ttScore > 5600)))
        {
            cout<<"Res - 5";
        }
        else
        {
            cout<<"No Result";
        }
    }
};

int main()
{
    studentDetail sd;
    sd.getData();
    sd.displayGrade();
}