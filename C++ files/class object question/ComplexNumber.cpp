class ComplexNumber
{
private:
    int real;
    int img;

public:
    ComplexNumber(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void plus(ComplexNumber c2)
    {
        this->img += c2.img;
        this->real += c2.real;
    }
    void multiply(ComplexNumber c2)
    {
        this->real = (real * c2.real) - (img * c2.img);
        this->img = (real * c2.img) + (img * c2.real);
    }
    void print()
    {
        cout << real << "+" << img << "i" << endl;
    }
};