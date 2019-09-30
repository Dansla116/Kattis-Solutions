using System;

namespace provincesandgold {
    class Program {
        static void Main(string[] args) {
            string input = Console.ReadLine();
            int g = Int32.Parse(input.Split(" ")[0]);
            int s = Int32.Parse(input.Split(" ")[1]);
            int c = Int32.Parse(input.Split(" ")[2]);

            int total = g * 3 + s * 2 + c;

            if (total >= 8) {
                Console.Write("Province or Gold");
            } else if (total >= 6) {
                Console.Write("Duchy or Gold");
            } else if (total >= 5) {
                Console.Write("Duchy or Silver");
            } else if (total >= 3) {
                Console.Write("Estate or Silver");
            } else if (total >= 2) {
                Console.Write("Estate or Copper");
            } else {
                Console.Write("Copper");
            }
        }
    }
}
