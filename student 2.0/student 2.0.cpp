using System;

class ��������
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        string[] �������� = new string[5];

        for (int i = 0; i < 5; i++)
        {
            Console.Write($"������ ������� �������� {i + 1}: ");
            ��������[i] = Console.ReadLine();
        }

        Array.Sort(��������);
        Array.Reverse(��������);

        Console.WriteLine("\n������� �� ���������:");
        foreach(string ������� in ��������)
        {
            Console.WriteLine(�������);
        }
    }
}
