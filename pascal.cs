using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace triangle_de_pascal
{
    class Program
    {
        public static string Indent(int count)
        {
            return "".PadLeft(count);
        }

        static void Main(string[] args)
        {
            string s_taille;
            int taille = 0;

            Console.Write("Entrez la taille du triangle : ");
            s_taille = Console.ReadLine();
            taille = Int32.Parse(s_taille);
    
            int[ , ] tableau = new int [taille +1 , taille +1];
            int i = 0;
            int j = 0;

              for (i = 0; i <= taille && taille != 0; i++){
                tableau[i, i] = 1;
                tableau[i , 0] = 1;

                for (j = 1; j<i; j++){
                    tableau[i , j] = tableau[i - 1 , j] + tableau[i - 1 , j - 1];
                    }
                }

              for (i = 0; i <= taille; i++){
                Console.Write(i);
                Console.Write("\t");
                for (j = 0; j <= i; j++){
                    Console.Write(Indent(1) + tableau[i , j]);
                }
                Console.Write("\n");
              }
        }
    }
}
