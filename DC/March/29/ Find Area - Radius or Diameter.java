import java.util.*;

class Circle {

    private double radius;

    public Circle(int radius) {
        this.radius = radius;
    }
public Circle(double dia){
    radius = (dia)/2.0;
}
public double getArea(){
    double arr = (22/7.0)*radius*radius;
    return arr;
}
} // end of Circle class

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Q = Integer.parseInt(sc.nextLine().trim());
        Circle circle = null;
        if (Q == 1) {
            int radius = Integer.parseInt(sc.nextLine().trim());
            circle = new Circle(radius);
        } else if (Q == 2) {
            double diameter = Double.parseDouble(sc.nextLine().trim());
            circle = new Circle(diameter);
        }
        System.out.print(String.format("%.2f", circle.getArea()));
    } // end of main function
} // end of Hello class
