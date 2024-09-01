# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 17.0,b = 10.0 ,l = 27.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    double v = c1.volume();
    c1.disp(v);
  
}
    