﻿namespace TestesParaAulas
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int horas;
            Console.WriteLine("Qual a hora atual? ");
            horas = int.Parse(Console.ReadLine());
            
            if (horas < 12)
            {
                Console.WriteLine("Bom dia!");
            }
            else if (horas < 18)
            {
                Console.WriteLine("Boa tarde!");
            }
            else
            {
                Console.WriteLine("Boa noite!");
            }
        }
    }
}