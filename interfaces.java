
interface hello {
    abstract public void printing();
}

class child implements hello {
    public void printing() {
        System.out.println("implemented interfcae");
    }
}

public class interfaces {
    public static void main(String[] args) {
        child c = new child();
        c.printing();
    }
}
