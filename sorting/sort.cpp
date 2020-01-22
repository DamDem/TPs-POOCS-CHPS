#include "sort.h"

sort::sort(const int SIZE,const int val_min,const int val_max)
{
    size = SIZE;

    for (int i = 0; i < size; i++)
    {
        //ajoute val random dans vec
        vec.push_back(rng(val_min, val_max));
    }
    
}

sort::sort()
{
    size = 10;

    for (int i = 0; i < size; i++)
    {
        //ajoute val random dans vec
        vec.push_back(rng(0,10));
    }   
}

int sort::rng(int val_min, int val_max){
    std::random_device r;
    std::default_random_engine e(r());
    std::uniform_int_distribution<int> uniform_dist(val_min, val_max);
    
    return uniform_dist(e);
}

void sort::bubble_sort(){
    int i,j;    
    for (i = 0; i<size-1; i++)
        for (j=0; j<size-i-1; j++)
            if (vec.at(j+1) < vec.at(j))
                std::swap(vec.at(j), vec.at(j+1));
}

void sort::bubble_sort_optimized(){
    for(int i= size-1; i>=0; i--){
        bool done = true;
        for(int j = 0; j < i; j++){
            if(vec.at(j+1)<vec.at(j)){
                std::swap(vec.at(j+1), vec.at(j));
                done = false;
            }
        }
        if (done)
            return;
    }
}

void sort::quick_sort(std::vector<int> vec, int first, int last){
    if(first<last){
        int p = partition(vec, first, last);

        quick_sort(vec, first, p-1);
        quick_sort(vec, p+1, last);
    }
}

int sort::partition(std::vector<int> vec, int first, int last){
    int pivot = vec.at(last);

    int i = (first - 1);

    for (int j = first; j<= last; j++){
        if (vec.at(j) < pivot){
            i++;
            std::swap(vec.at(i), vec.at(j));
        }
    }
    std::swap(vec.at(i+1), vec.at(last));
    return (i+1);
}

void sort::quick_sort(){
    quick_sort(vec, 0, size-1);
}

void sort::stdlib_sort(){
    std::sort(vec.begin(), vec.end());
}

bool sort::test_sorted(){
    for (int i = 0; i<size-2; i++)
        if (vec.at(i) > vec.at(i+1))
            return false;
    return true;
}

void sort::print(){
    for (int i = 0; i<size; i++)
        std::cout<<i<<"-----"<<vec.at(i)<<std::endl;
}

sort::~sort()
{
    vec.~vector();
}
