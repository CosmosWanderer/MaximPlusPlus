#include "antlr4-runtime.h"
#include "CalcLexer.h"
#include "CalcParser.h"
#include "CalcEvalVisitor.hpp"

#include <iostream>

int main() {
    std::string getPrimeNumbers = R"(
        // Find all prime numbers <= N
        def getPrimes(integer N) {
            i = 2;
            while (i < N) {
                flag = 1;
                j = 2;
                while (j * j <= i) {
                    if ((i % j) == 0) {
                        /* Checking, if there are any devisers
                        If there are -> flag = 0 -> not a prime number */
                        flag = 0;
                    }
                    j++;
                }
                if (flag) {
                    print[i];
                }
                i++;
            }
        }

        getPrimes(100);
    )";

    std::string getFactorial = R"(
        // Get factorial of N (not reccurent)
        def factor(integer N) {
	        result = 1;
	        i = 0;
	        while (i < N) {
    		    result = result * (i + 1);
    		    i = i + 1;
	        }
	        return result;
        }

        // Reccurent version            
        def factorR(integer N) {
            if (N == 1) {
                return N;
            }
            return N * factorR(N - 1);
        }
        
        print[factor(5)];
        print[factorR(5)];
    )";

    std::string recurs = R"(
        def recurFunc(integer M) {
            if (M == 10) {
                return M;
            }
            else {
                return recurFunc(M + 1);
            }
        }

        print[recurFunc(0)];

    )";



    std::string input = getFactorial;

    try {
        antlr4::ANTLRInputStream stream(input);

        CalcLexer lexer(&stream);
        antlr4::CommonTokenStream tokens(&lexer);

        CalcParser parser(&tokens);
        antlr4::tree::ParseTree* tree = parser.prog();

        CalcEvalVisitor visitor;
        visitor.visit(tree);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "Unknown exception occurred" << std::endl;
    }
    return 0;
}