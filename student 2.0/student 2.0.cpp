using System;

class Програма
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        string[] студенти = new string[5];

        for (int i = 0; i < 5; i++)
        {
            Console.Write($"Введіть прізвище студента {i + 1}: ");
            студенти[i] = Console.ReadLine();
        }

        Array.Sort(студенти);
        Array.Reverse(студенти);

        Console.WriteLine("\nПрізвища за спаданням:");
        foreach(string студент in студенти)
        {
            Console.WriteLine(студент);
        }
    }
}
