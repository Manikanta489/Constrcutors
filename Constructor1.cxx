#include <iostream>
#include <cmath>
class Point
{
    double m_x;
    double m_y;
    public:
    // Default Constructor
    Point()
    {
        m_x=6;
        m_y=8;
    }
    // Parameterized Constructor
    Point(double value_1, double value_2=3)
    {
        m_x=value_1;
        m_y=value_2;
    }
    // Copy Constructor
    Point(const Point &ref)
    {
        m_x=ref.m_x;
        m_y=ref.m_y;
    }
    void printmembers()
    {
        std::cout<<"Point: "<<m_x<<","<<m_y<<std::endl;
    }
    void distance_from_origin();
    void quadrant()
    {
        if(m_x>0 && m_y>0)
        std::cout<<"Quadrant Q1"<<std::endl;
        else if(m_x <0 && m_y >0)
       std::cout<<"Quadrant Q2"<<std::endl;
        else if(m_x <0 && m_y <0)
       std::cout<<"Quadrant Q3"<<std::endl;
        else if(m_x >0 && m_y <0)
        std::cout<<"Quadrant Q4"<<std::endl;
        else
        std::cout<<"Origin"<<std::endl;
    }

};
void Point :: distance_from_origin()
    {
        double distance;
        distance=sqrt(pow(m_x,2)+pow(m_y,2));
        std::cout<<"Distance from origin = "<<distance<<std::endl;
    }
int main()
{
    //Point p1;
    Point p2(4,-3);
    //Point p3=p2;
    //p1.printmembers();
    p2.printmembers();
    //p3.printmembers();
    //p1.distance_from_origin();
    p2.distance_from_origin();
    p2.quadrant();
    return 0;
}