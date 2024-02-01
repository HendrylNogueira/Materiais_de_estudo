namespace exercicio9
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int x, y = 0;
            Console.WriteLine("Entrada: ");
            int entrada = int.Parse(Console.ReadLine());

            Console.WriteLine("Saida: ");
            int saida = int.Parse(Console.ReadLine());

            if (saida < entrada)
            {
                x = 24 - entrada;
                
                Console.WriteLine($"O JOGO DUROU {x+saida} HORAS");
            }
            else if (entrada == saida)
            {
                Console.WriteLine("O JOGO DUROU 24 HORAS");
            }

            else if (entrada < saida)
            {
                y = saida - entrada;
                Console.WriteLine($"O JOGO DUROU {y} HORAS");
            }
        }
    }
}