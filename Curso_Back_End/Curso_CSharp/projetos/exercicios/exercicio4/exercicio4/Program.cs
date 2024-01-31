namespace exercicio4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num_func;
            double horas_trabalhadas;
            double valor_hora;
            double salario;

            Console.WriteLine("Digite o número do funcionario: ");
            num_func = int.Parse(Console.ReadLine());

            Console.WriteLine("Digite as horas trabalhadas: ");
            horas_trabalhadas = double.Parse(Console.ReadLine());

            Console.WriteLine("Digite o valor hora do funcionário: ");
            valor_hora = double.Parse(Console.ReadLine());

            salario = horas_trabalhadas * valor_hora;

            Console.WriteLine($"NUMBER: {num_func} " +
                $"\nSALARY: R${salario:F2}.");
        }
    }
}