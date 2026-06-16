import java.util.*;

public class Recursion {
    public static void main(String[] args)
    {
        System.out.println("====Hello World====");
        message();
    }


static void message()
{
    System.out.println("===Back to basics===");
    message1();
}

static void message1()
{
    System.out.println("===Back to basics===");
    message2();
}
static void message2()
{
    System.out.println("===Back to basics===");
    message3();
}
static void message3()
{
    System.out.println("===Back to basics===");
    message4();
}
static void message4()
{
    System.out.println("===Back to basics===");
}

}