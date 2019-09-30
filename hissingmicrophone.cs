using System;

namespace hissingmicrophone {
    class Program {
        static void Main(string[] args) {
            string line = Console.ReadLine();
            string hiss = "no hiss";

            for (int i = 0; i < line.Length - 1; i++) {
                if (line.Substring(i, 2) == "ss") {
                    hiss = "hiss";
                }
            }

            Console.WriteLine(hiss);
        }
    }
}
