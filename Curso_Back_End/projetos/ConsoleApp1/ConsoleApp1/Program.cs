using System.Diagnostics;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Digite seu primeiro nome: ");
            string nome = Console.ReadLine();
            Console.WriteLine("Digite seu nome do meio: ");
            string sobrenome = Console.ReadLine();
            
            Console.Write(nome + sobrenome);
        }
    }
}