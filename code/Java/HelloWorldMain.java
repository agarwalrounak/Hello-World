public class HelloWorldMain {
	
	public static String line;
	

	public static void main(String[] args) {
		
		line = insertingLine(line);
		System.out.println(line);

	}

	
	public static String insertingLine(String x){
		x = "Hello World!";
		return x;
	}
}