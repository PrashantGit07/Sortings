
class parent {
    static int a;

    protected void hello() {
        System.out.println("from parent");

    }
}

class child extends parent {
    public void hello() {
        // super.hello();
        System.out.println("from child");
    }
}

public class test {
    public static void main(String[] args) {
        System.out.println("static variable value : " + parent.a);
        parent c = new parent();
        c.hello();
    }
}
