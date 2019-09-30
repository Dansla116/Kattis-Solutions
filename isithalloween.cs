using System;

namespace isithalloween {
    class Program {
        static void Main(string[] args) {
            string line = Console.ReadLine();

            if (line == "OCT 31" || line == "DEC 25") {
                Console.WriteLine("yup");
            } else {
                Console.WriteLine("nope");
            }

        }
    }
}
