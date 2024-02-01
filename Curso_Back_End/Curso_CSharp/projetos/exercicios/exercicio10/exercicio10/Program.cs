namespace exercicio10
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double total = 0;
            Console.WriteLine("Digite o código do produto:");
            int cod = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite a quantidade: ");
            int quant = int.Parse(Console.ReadLine());

            if (cod == 1)
            {
                total = quant * 4.00;
            }
            else if (cod == 2)
            {
                total = quant * 4.50;
            }
            else if (cod == 3)
            {
                total = quant * 5.00;
            }
            else if (cod == 4)
            {
                total = quant * 2.00;
            }
            else if (cod == 5)
            {
                total = quant * 1.50;
            }
            else
            {
                Console.WriteLine("Valor inválido.");
            }

            Console.WriteLine($"Total: R${total:F2}");
        }
    }
}