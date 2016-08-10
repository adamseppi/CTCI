public class HelloWorld {

    public static void main(String[] args) {
        // Prints "Hello, World" to the terminal window.
        System.out.println(f(3));
    }

    private static int f(int n){
    	if(n<=1)
    		return 1;
    	return f(n-1) + f(n-1);
    }
}