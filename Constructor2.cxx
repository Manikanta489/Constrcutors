#include<iostream>
class Box
{
    int length;
    int breadth;
    int height;
    public:
    Box ():
        length{5}, breadth{6}, height {10}
    {
    }
    void setBox(int l, int b, int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void getBox()
    {
        std::cout<<"Length = "<<length<<std::endl<<"Breadth = "<<breadth<<std::endl<<"Height = "<<height<<std::endl;
    }
    int volume()
    {
        return (length*breadth*height);
    }
};
int main()
{
    Box *b1;
    b1->getBox();
    std::cout<<b1->volume()<<std::endl;
    b1->setBox(10,20,30);
    b1->getBox();
    std::cout<<b1->volume()<<std::endl;
    return 0;
}