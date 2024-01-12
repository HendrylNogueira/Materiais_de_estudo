namespace exercicio2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double raio = 0;
            double area = 0;
            double pi = 3.14159;

            Console.WriteLine("Digite o valor do raio: ");
            raio = double.Parse(Console.ReadLine());

            area = pi * (Math.Pow(raio, 2.0));

            Console.WriteLine($"O valor da áre é {area:F4}.");
        }
    }
}