
class hello {
    public void sum(int a, int b) {
        System.out.println(a + b);
    }

    public void sum(int a, int b, int c) {
        System.out.println(a + b + c);
    }
}

public class overload {
    public static void main(String[] args) {
        hello h = new hello();
        h.sum(7, 8);
    }
}
