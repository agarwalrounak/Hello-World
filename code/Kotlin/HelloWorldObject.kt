fun main(args: Array<String>) {
    Callee("World").greet()
}

class Callee(val input: String) {
    fun greet() {
        println("Hello, $input !");
    }
}