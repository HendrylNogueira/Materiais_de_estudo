using System.Runtime.Serialization;

namespace exercicio1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Digite um valor: ");
            int n1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Digite outro valor: ");
            int n2 = int.Parse(Console.ReadLine());

            int soma = n1 + n2;

            Console.WriteLine($"A soma entre os doi números é: {soma}");
        }
    }
}