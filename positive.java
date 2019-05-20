import java.util.*;

public class positive

{

public static void main(String args[])

{

float num;

Scanner sc=new Scanner(System.in);

System.out.println("Enter the Number:");

num=sc.nextFloat();

if(num>0)

{

System.out.println("The Given Number is Positive");

}

else if(num<0)

{

System.out.println("The Given Number is Negative");

}

else

{

System.out.println("The Given Number is Zero");

}

}

}
