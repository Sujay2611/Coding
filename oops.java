/*
public class a{
    int age;
    String name;
    public a(int age,String name)
    {
        this.age=age;
        this.name=name;
    }
    public a(int age)
    {
        this.age=age;
    }
    public int getAge()
    {
        return age;
    }
    public String getName()
    {
        return name;
    }
    public void setAge(int age)
    {
        this.age=age;
    }
    public static void main(String []args)
    {
        a a1=new a(10,"abc");
        //System.out.println(a1.getAge());
        //System.out.println(a1.getName());
        a1.setAge(22);
        System.out.println(a1.toString());
    }
}
*/

//compile type polymorphism - method overloading
/*
public class a{
    public int sum(int x,int y)
    {
        return x+y;
    }
    public int sum(int x,int y,int z)
    {
        return x+y+z;
    }
    public double sum(double x,double y)
    {
        return x+y;
    }
    public static void main(String []args)
    {
        a s=new a();
        System.out.println(s.sum(1,2));
        System.out.println(s.sum(1,2,3));
        System.out.println(s.sum(1.0,2));
        //System.out.println(sum(1,2));
    }
}
*/

//run time polymorphism - method overriding
/*
class animal{
    void display()
    {
        System.out.println("animal");
    }
}

class dog extends animal{
    void display()
    {
        System.out.println("dog");
    }
}

public class a{
    public static void main(String []args)
    {
        animal a=new dog();
        a.display();
        animal b=new animal();
        b.display();
    }
}
*/
//interface is used to achieve total abstraction and also support multiple inheritence like in case of c++
//varibles in interface are final, public and static
/*
interface i1{
    int c=12;
    void display();
}
interface i2{
    int sum(int a,int b);
}
class a implements i1,i2{
    public void display()
    {
        System.out.println("hello world");
    }
    public int sum(int a,int b)
    {
        return a+b;
    }
    public static void main(String []args)
    {
        a b=new a();
        //c=14;
        b.display();
        System.out.println(b.sum(3,4));
        //System.out.println(c);
    }
}
*/

//inheritence
/*
class square{
    public int l;
    public int b;
    public square(int l,int b)
    {
        this.l=l;
        this.b=b;
    }
    public int area(int l,int b)
    {
        return l*b;
    }
}
class cube extends square{
    public int h;
    public cube(int l,int b,int h)
    {
        super(l,b);
        this.h=h;
    }
    public int volume()
    {
        return h*area(l,b);
    }
}
public class a{
    public static void main(String []args)
    {
        cube a=new cube(2,3,4);
        System.out.println(a.volume());
    }
}
*/



