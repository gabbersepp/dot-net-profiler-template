using System;

namespace ErrorThrowingApp
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                try
                {
                    Console.WriteLine("\r\n------------------\r\nFrom App: Press any key to throw an exception or 'a' to exit");
                    if (Console.ReadKey().KeyChar == 'a')
                    {
                        break;
                    }
                    Console.Write("\r\n");

                    throw new Exception("See you in the profiler for sure");
                }
                catch
                {
                    Console.WriteLine("From App: Catched exception");
                }
            }
        }
    }
}
