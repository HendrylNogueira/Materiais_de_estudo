namespace exercicio3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a, b, c, d, diferenca;

            Console.WriteLine("Digite o primeiro valor: ");
            a = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o segundo valor: ");
            b = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o terceiro valor: ");
            c = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite o quarto valor: ");
            d = int.Parse(Console.ReadLine());

            diferenca = (a * b) - (c * d);

            Console.WriteLine($"O produte de 'a' e 'b' é: {a*b} " +
                $"\nO produto de 'c' e 'd' é: {c*d}" +
                $"\nA diferença entrre os valores é {diferenca}");

        }
    }
}