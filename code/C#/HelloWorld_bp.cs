void Main()
{
    Console.WriteLine(Hello.World.ToString());
}

public static class Hello
{
    public static class World
    {
        public static new string ToString()
        {
            return MethodBase.GetCurrentMethod().DeclaringType.ToString();
        }
    }
}
