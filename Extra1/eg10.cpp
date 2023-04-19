#include<iostream>
#include<string>
using namespace std;
 
 class Alpha{
    private:
        string Alpha_str;
    public:
        Alpha(string str){
            Alpha_str=str;
            cout<<"Alpha constructor called"<<endl;
        }
        ~Alpha(){
            cout<<"Alpha destructor called"<<endl;
        }
        void display(){
            cout<<"Alpha string:"<<Alpha_str<<endl;
        }
 };
 class Beta{
    private:
        int beta_num;
    public:
        Beta(int num){
            beta_num=num;
            cout<<"Beta constructor called"<<endl;
        }
        ~Beta(){
            cout<<"Beta destructor called"<<endl;
        }
        void display(){
            cout<<"Beta number:"<<beta_num<<endl;
        }
 };
 class Gamma:public Alpha,public Beta{
    private:
        double gamma_val;
    public:
        Gamma(string str,int num,double val):Alpha(str),Beta(num){
            gamma_val=val;
            cout<<"Gamma constructor called"<<endl;
        }
        ~Gamma(){
            cout<<"Gamma destructor called"<<endl;
        }
        void display(){
            Alpha::display();
            Beta::display();
            cout<<"Gamma value:"<<gamma_val<<endl;
        }
 };
 int main(){
    Gamma g_obj("Hello" ,123,3.14);
    g_obj.display();
    return 0;
 }