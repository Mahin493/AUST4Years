using System;
using System.Collections.Generic;
using System.Text;

namespace Assignmentsd
{
    class Class1
    {
        public void Print()
        {
            int sum = 0;

            Console.Write("Enter row:");
            int row = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter column:");
            int col = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine();

            int[,] Matrix = new int[row, col];

            Console.Write("Enter the elements of matrix: ");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    Matrix[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine("\n Input Matrix: ");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    Console.Write(Matrix[j, i] + "\t");

                }
                Console.WriteLine();
            }
            for (int i = 0; i < row; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    if (i == j)
                    {
                        sum += Matrix[i, j];
                    }
                }
               
            }

            Console.WriteLine("\n\nTrace of the matrix is {0}", sum);
        }
    }
}
