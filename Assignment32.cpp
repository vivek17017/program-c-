#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imag;
    public:
        void set_real(int a)
        {
            real=a;
        }
        void set_imaginary(int b)
        {
            imag=b;
        }
        void print_values()
        {
            cout<<"real="<<real<<" imaginary="<<imag;
        }
}c1;
int main1()
{
    Complex c2;
    c1.set_real(3);
    c1.set_imaginary(5);
    c1.print_values();

}  
class Time
{
    private:
        int hr,min,sec;
    public:
        void set_time()
        {
            cout<<"Enter time in hr min and seconds"<<endl;
            cin>>hr>>min>>sec;
        }
        void show_time()
        {
            cout<<hr<<" hour "<<min<<" minutes "<<sec<<" seconds";
        }
};
int main2()
{
    Time t1;
    t1.set_time();
    t1.show_time();
    
}
class Date
{
    private:
        int d,m,y;
    public:
        void set_date(int a)
        {
            d=a;
        }
        void set_months(int b)
        {
            m=b;
        }
        void set_year(int c){y=c;}
        void showDate1()
        {
            cout<<"d="<<d<<" m="<<m<<" y="<<y;
        }
        void showDate2()
        {
            cout<<d<<"-"<<m<<"-"<<y;
        }
        void showDate3(int a)
        {
            char* months[12]={"jan","feb","march","april","may","june","july","aug","sept","oct","nov","dec"};
            cout<<d<<"-"<<months[a]<<"-"<<y;
        }


};
int main4()
{
    Date d1;
    d1.set_date(31);
    d1.set_months(12);
    d1.set_year(2022);
    d1.showDate1();
    d1.showDate3(12);
}
class circle
{
    private:
        int r;
    public:
        void set_radius(int a)
        {r=a;}
        int get_radius()
        {return r;}
        float getArea(){
            return 3.14*r*r;
        }
        float getCircumference(){
            return 2*3.14*r;
        }

}C1;
int main()
{
    int a;
   
    cout<<"Enter radius ";
    cin>>a;
    C1.set_radius(a);
    cout<<C1.get_radius();
    cout<<"area is "<<C1.getArea();
    cout<<"area is "<<C1.getCircumference();
}