import java.util.Stack;

public class StackDemo
{
    public static void main(String args[])
    {
        Stack<Integer> s = new Stack<>();

        s.push(10);
        s.push(20);

        System.out.println(s.size());
        System.out.println(s.pop());
        System.out.println(s.size());
        System.out.println(s.isEmpty());
        System.out.println(s.peek());
    }
}