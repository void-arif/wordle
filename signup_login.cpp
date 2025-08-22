#include<bits/stdc++.h>
using namespace std;
fstream userdata;
int LoginOrSignup();
pair<string,string> getSignup();
void login();
void signup();
int chooseGameMode();
int getPlayerNum();
void getMode();
int main()
{
    int lors=LoginOrSignup();
    if(lors==0)
    {
        //login koraite hobe
    }
    else if(lors==1)
    {
        pair<string,string>namepass=getSignup();
    }
    else
    {
        chooseGameMode();
    }

}

pair<string,string> getSignup();
{
    string name;
    string pass;
    cout<<"Username (one word): ";
    cin>>name;
    cout<<"Password (no space): ";
    cin>>pass;
    pair<string,string>namepass={name,pass};
    return namepass;
}
void signup()
{
    userdata.open("userdata.txt",ios::app);
    if(userdata.is_open())
    {

    }
}
int LoginOrSignup()
{
    cout<<"Do you want to Login(0) or Sing up(1) or Guest(2): "
    int lors;
    while(true)
    {
        cin>>lors;
        if(lors==0||lors==1||lors==2)
            return lors;
        else
            cout<<"----------OOOPSSS!!!Wrong Input----------"<<endl;
    }
}

int chooseGameMode()
{
    while(true)
    {
        cout<<"Do you want to play"<<endl;
        cout<<"Type 0 for Single player"<<endl;
        cout<<"Type 1 for Multiplayer"<<endl;
        cout<<"Enter: ";
        int cgm;
        cin>>cgm;
        if(cgm==0||cgm==1)
            return cgm;
        else
            cout<<"----------OOOPSSS!!!Wrong Input----------"<<endl;
    }
}
int getPlayerNum()
{
    int mode=chooseGameMode();
    if(mode==0)
        return 1;
    else
    {
        while(true)
        {
            cout<<"Please enter the player number(2-5): ";
            int playernum;
            cin>>playernum;
            if(playernum>1&&playernum<6)
                return playernum;
            else
            {
                if(playernum<2)
                    cout<<"----------Get a social life, lil bro----------"<<endl;
                else
                    cout<<"----------Too many players!!!----------"<<endl;
            }
        }
    }
}

