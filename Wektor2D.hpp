class Wektor2D
{
    public:

    double x;
    double y;

    Wektor2D(){
        x = 0;
        y = 0;
    };

    Wektor2D(double xx, double yy) : x(xx), y(yy){};

    void setX(double new_x){
        x = new_x;
    };

    double getX(){
        return x;
    };

    void setY(double new_y){
        y = new_y;
    };

    double getY(){
        return y;
    };

    Wektor2D operator+(Wektor2D& b){
        double sum_x = x + b.x;
        double sum_y = y + b.y;
        return Wektor2D(sum_x, sum_y);
    };

    double operator*(Wektor2D& b){
        return x * b.x + y * b.y;
    };
};
