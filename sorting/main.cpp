#include "sort.h"

int main(int argc, char const *argv[])
{  
/*  
    sort s1(100, 0, 100);
    sort s2(100, 0 ,100);
    sort s3(100, 0 ,100);

    std::cout<<std::endl<<std::endl<<"Bubble sort :"<<std::endl;
    auto start1 = std::chrono::steady_clock::now();
    s1.bubble_sort();
    auto end1 = std::chrono::steady_clock::now();
    auto time1 = end1-start1;
    std::cout << "Sorted ? " << s1.test_sorted();

    std::cout<<std::endl<<std::endl<<"Bubble sort opti :"<<std::endl;
    auto start2 = std::chrono::steady_clock::now();
    s2.bubble_sort_optimized();
    auto end2 = std::chrono::steady_clock::now();
    auto time2 = end2-start2;
    std::cout << "Sorted ? " << s2.test_sorted();

    std::cout<<std::endl<<std::endl<<"std sort :"<<std::endl;
    auto start3 = std::chrono::steady_clock::now();
    s3.stdlib_sort();
    auto end3 = std::chrono::steady_clock::now();
    auto time3 = end3-start3;
    std::cout << "Sorted ? " << s3.test_sorted()<<std::endl;

    std::cout << std::endl << "bubble sort : " << std::chrono::duration <double, std::nano> (time1).count() << " ns" << std::endl;
    std::cout << "bubble sort optimized : " << std::chrono::duration <double, std::nano> (time2).count() << " ns" << std::endl;
    std::cout << "std sort : " << std::chrono::duration <double, std::nano> (time3).count() << " ns" << std::endl;
*/

    for (int i = 0; i<1; i++){
        sort s(1000, 0, 100000);

        auto start1 = std::chrono::steady_clock::now();
        s.quick_sort();
        auto end1 = std::chrono::steady_clock::now();
        auto time1 = end1-start1;
    
        std::cout << std::chrono::duration <double, std::nano> (time1).count() << std::endl;
    }

    return 0;
}
