
abstract class parent {
    abstract public void h();

    public void s() {
        System.out.println("uper abstract method");
    }
}

class child extends parent {
    @Override
    public void h() {
        System.out.println("defined the abstract method");
    }
}

public class abstractClass {
    public static void main(String[] args) {
        child c = new child();
        c.h();
        c.s();
    }
}
