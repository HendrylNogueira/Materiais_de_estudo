namespace exercicio8
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Digite um numero: ");
            int n1 = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite outro numero: ");
            int n2 = int.Parse(Console.ReadLine());

            if (n1 % n2 == 0 || n2 % n1 == 0)
            {
                Console.WriteLine("São multiplos");
            }
            else
            {
                Console.WriteLine("Não são multiplos");
            }
        }
    }
}