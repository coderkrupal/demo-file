#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>

    using namespace std;

      int  login();
      int  registration();

  int main()
{
        int ch;



        cout<<"###########################################################"<<endl;
        cout<<"###########################################################"<<endl;
        cout<<"         REGISTRATION  SYSTEM                          "<<endl;
        cout<<"############################################################"<<endl;
         cout<<"###########################################################"<<endl;
         cout<<"###########################################################\n"<<endl;



       cout<<"----------------------------------------------------------------"<<endl;
       cout<<"MAIN MENU"<<endl;
       cout<<"----------------------------------------------------------------\n"<<endl;
       cout<<"1:login"<<endl;
       cout<<"2:registration"<<endl;
       cout<<"3:EXIT"<<endl;

             cout<<"enter your choice\n"<<endl;

            cin>>ch;
   
                        system("cls"); 
             switch (ch)
             {
             case 1:
             
                    login();
                break;
               case 2:

                           registration();
             default:
                break;
             }
}

      int  login(){
             string  userid,passwd,id,pass ;

                      int count;
                cout<<"enter your user id:";
                cin>>userid;

                cout<<"create a new password:";
                cin>>passwd;

                 ifstream input("records.txt");

                while (input>>id>>pass)
                {
                     if(userid==id && passwd==pass){
                         count=1;
                         system("cls");
                     }
                }
                
          input.close();

          if(count==1){
                cout<<userid <<"\t"<<"SUCCESFULLY LOGGED TO  YOUR ACCOUNT\n"<<endl;
                cout<<"YOU UNLOCED YOUR CALCULATOR"<<endl;

                  int wh;
                 cout<<"1:run calculator"<<endl;
                 cout<<"2:exit"<<endl;
                  cout<<"choose any one"<<endl;
                  cin>>wh;

                   switch (wh)
                   {
                   case 1:
                     system("cls");
                          cout<<"1:ADDITION"<<endl;
                          cout<<"2:SUBTRACTION"<<endl;
                          cout<<"3:DIVISION"<<endl;

                          int cla;
                          cout<<"chosse one"<<endl;
                          cin>>cla;

                          switch (cla)
                          {
                          case 1:
                           int num1,num2,add;
                           system("cls");
                          cout<<"enter a num1"<<endl;
                          cin>>num1;
                          cout<<"enter a num2"<<endl;
                          cin>>num2;
                          add=num1+num2;
                        cout<<"ADDITION IS: "<<add<<endl;
                            break;
                          
                          default:
                            break;
                          }
                    break;

                    case 2:
                       exit(1);
                   
                   default:

                     cout<<"select valid option"<<endl;
                     login();
                    break;
                   }
          }
          else{
               cout<<"please check your username\n"<<endl;
               main();
          }
      }


      int  registration(){

           string ruser,rpass;

            cout<<"enter user name:"<<endl;
            cin>>ruser;

            cout<<"enetr password:"<<endl;
            cin>>rpass;

            ofstream f1("records.txt",ios::app);
                     f1<<ruser<<" "<<rpass<<endl;

                       system("cls");
                      cout<<" "<<endl;
                     cout<<"registration sucessfully done"<<endl;
                     main();
              
      }
