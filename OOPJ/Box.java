/*WAP to implement a class name Box having its instance variables with height, width, depth of double data type 
 * and a methodthat is volume func with datatype double findout the volume of the box using volume function*/
class Box
{
    double width,height,depth;
    double Volume()
    {
        return Volume(width,height,depth);
    }
    double Volume(double x, double y,double z)
    {
        return x * y * z;
    }
}