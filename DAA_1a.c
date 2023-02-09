
#include <stdio.h>
#include <math.h>

void func1(int n){    //n^3
   int res=n*n*n;
   printf("%d\t",res);
}

void func2(int n){   // ln(n)
   double res=log(n);
    printf("%.3f\t",res);
}

void func3(int n){        // nlg(n)
    double res=n*log2(n);
    printf("%.3f\t",res);
}

void func4(int n){  // 2^ln(n)

    double res = pow(2,log(n));
    printf("%.3f\t",res);
}

void func5(int n){
    double res = pow(log2(n),0.5); // sqrt(log2n)
    printf("%.3f\t",res);
}

void func6(int n){   // log2 n
   double res=log2(n);
    printf("%.3f\t",res);
}

void func7(int n){   // (root 2)^ log2n
    double res = pow(sqrt(2),log2(n));
     printf("%.3f\t",res);
}

void func8(int n){  // ln ln n
    double res = log(log(n));
    printf("%.3f\t",res);
}

void func9(int n){   // n
  printf("%d\t",n);
}

void func10(int n){   // n^ (lglgn)
    double res = pow(2,2*log2(n));
     printf("%.2f\t",res);
}

int main()
{
    printf("n\t");
    printf("Func1\tFunc2\tFunc3\tFunc4\tFunc5\tFunc6\tFunc7\tFunc8\tFunc9\tFunc10\t");
    printf("\n");
    for(int i=0;i<=100;i++){
        printf("%d\t",i);
        func1(i);
        func2(i);
        func3(i);
        func4(i);
        func5(i);
        func6(i);
        func7(i);
        func8(i);
        func9(i);
        func10(i);
        printf("\n");
    }

    return 0;
}


