using System;

namespace HelloWorldApp
{
    internal static class HelloWorld
    {
        internal static string SayHello(this string _)=> "Hello World";
    }

    /// <summary>
    ///  Fancy Hello World Program.
    /// </summary>
    class Program
    {
        static void Main() => Console.WriteLine(string.Empty.SayHello());
    }
}
