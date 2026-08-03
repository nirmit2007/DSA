import java.util.Scanner;
import java.util.Stack;

public class StackString
{
    public static void main(String[] args)
    {
        Stack<Character> s = new Stack<>();

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter String: ");
        String str = sc.next();

        for(int i = 0; i < str.length(); i++)
        {
            s.push(str.charAt(i));
        }

        System.out.println(s);

        while(!s.isEmpty())
        {
            System.out.print(s.pop());
        }
    }
}
