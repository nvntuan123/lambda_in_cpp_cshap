using System;

namespace cshap
{
    class Program
    {
        public static int ReturnX(int x)
        {
            return x;
        }

        public delegate int ReturnXPtrFunc(int x);

        static void Main(string[] args)
        {
            // (paramater list) => { body }
            ReturnXPtrFunc funcPtr = (int x) => {
                    return x;
                };
            //int iA = funcPtr(8);
            //int iA = funcPtr.Invoke(8);
            Console.WriteLine("Function x = " + Program.ReturnX(6));
            Console.WriteLine("Lambda a = " + iA);
        }
    }
}
