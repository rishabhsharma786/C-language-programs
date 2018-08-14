import static java.lang.Math.*;
class a
{
public int p,r,t;
public void input()
{

p=100;
r=100;
t=2;
}
public void cal()
{
float a,b;
a=(float)(1+r/100.0);
a=(float)pow(a,t);
float ci=p*a-p;
System.out.println("compound intrest="+ci);
}
public static void main(String args[])
{
a obb =new a(); 
obb.input();
obb.cal();
}
}
