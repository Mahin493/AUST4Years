using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Assignmentsd
{
    class List
    {
        public void mylist()
        {
            Console.WriteLine("Input your String");
            string mystring = Console.ReadLine();
            Console.WriteLine("First string is ");
            Console.WriteLine(mystring);

            List<string> list1 = new List<string>();
            list1 = mystring.Split(" ").ToList();
            list1.Sort();
            list1.Reverse();
            

            Console.WriteLine("After spliting and sorted in desending order");

            foreach (string a in list1)
            {
                Console.WriteLine(a);
            }

            Console.WriteLine("Input your Second String");
            string mystring2 = Console.ReadLine();
            Console.WriteLine("Second string is ");
            Console.WriteLine(mystring2);


            List<string> list2 = new List<string>();
            list2 = mystring2.Split(" ").ToList();

            Console.WriteLine("After spliting second String ");

            foreach (string b in list2)
            {
                Console.WriteLine(b);
            }

            Console.WriteLine("\n After Inserting First List in the Top of the secound List");
            list1.InsertRange(6, list2);
            Console.WriteLine("\n");

            foreach (var k in list1)
            {
                Console.WriteLine(k);
            }
        }
    }
}
//Laptop Mouse Book Mobile Television Pencil
//Tablet Charger Keyboard